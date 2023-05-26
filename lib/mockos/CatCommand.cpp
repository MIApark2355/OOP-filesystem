#include "../../include/mockos/CatCommand.h"
#include "../include/mockos/ImageFile.h"
#include "../include/mockos/TextFile.h"
#include <fstream>
#include <iostream>
#include <sstream>
#

using namespace std;

CatCommand::CatCommand(AbstractFileSystem* fileSys) : afs(fileSys) {}

int CatCommand::execute(string cmd) {
	istringstream iss(cmd);
	string str;
	vector<string> v;

	while (iss >> str) {
		v.push_back(str);
	}

	if (v.size() < 1) {
		cerr << "Usage: cat <filename> [-a]" << endl;
		return 52;
	}else if (v.size() > 2) {
		cerr << "Invalid command" << endl;
		return 52;
	}else if (v.size() == 2 && v[1] != "-a") {
		std::cerr << "Invalid Command" << std::endl;
		return 52;
	}

	ifstream ifs(v[0]);

	AbstractFile* f = afs->openFile(v[0]);
	string input;
	if (f == nullptr) {
		cerr << "Unable to open file: " << v[0] << endl;
		//unable to open file
		return 53;
	}

	bool optioned = (v.size() == 2 && v[1] == "-a");
	vector<char> original = f->read();
	// with option
	if (optioned) {
		vector<char> temp;
		
		
		original.push_back('\n');
		for (size_t i = 0; i < original.size(); ++i) {
			cout << original.at(i);
		}

		cout << v[0] << endl;
		cout << "Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving." << endl;

		bool has_input = false;
		while (getline(cin, input)) {

			vector<char> content(input.begin(), input.end());

			//quit without saving
			if (input == ":q") {
				afs->closeFile(f);
				return 0;
			}
			//save and quit
			else if (input == ":wq") {
				if (has_input) {
					temp.pop_back();
				}
				
				//save

				//if it is an image file it will return 1 rather than 0
				if (f->append(temp) == 1) {
					cout << "Image file does not support append function" << endl;
					//f->write(original);
					afs->closeFile(f);
					return 1;
				}
				afs->closeFile(f);
				return 0;
			}

			for (size_t i = 0; i < content.size(); ++i) {
				temp.push_back(content[i]);
			}
			temp.push_back('\n');
			has_input = true;

		}
		return 53;

	}

	//"cat" command with replacement (without option "-a")
	else {
		vector<char> temp;
		// print original content

		cout << "Enter data you would like to write to the file. Enter :wq to save the file and exit, enter :q to exit without saving." << endl;
		bool has_input = false;
		while (getline(cin, input)) {
			vector<char> content(input.begin(), input.end());

			//quit without saving
			if (input == ":q") {
				afs->closeFile(f);
				return 0;
			}
			//save and quit
			else if (input == ":wq") {
				//save

				if (has_input) {
					temp.pop_back();
					
				}
				f->write(temp);
				afs->closeFile(f);
				return 0;
			}
			for (size_t i = 0; i < content.size(); ++i) {
				temp.push_back(content[i]);
			}
			temp.push_back('\n');
			has_input = true;

		}
		
		return 53;
	}
}

void CatCommand::displayInfo() {

	cout << "Concatenating current file" << endl;
	cout << "Usage: cat <filename>" << endl;
	//with option
	cout << "With append option" << endl;
	cout << "Usage: cat <filename> -a" << endl;
}