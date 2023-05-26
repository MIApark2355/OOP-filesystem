
#include "../../include/mockos/DisplayCommand.h"
#include "../include/mockos/ImageFile.h"
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

DisplayCommand::DisplayCommand(AbstractFileSystem* fileSys) : fs(fileSys) {}

int DisplayCommand::execute(string cmd) {
	istringstream iss(cmd);
	string str;
	vector<std::string> v;

	while (iss >> str) {
		v.push_back(str);
	}


	if (v.size() < 1) {
		cerr <<  "Usage: ds <filename> [-d]" << endl;
		return 52;
	}
	else if (v.size() > 2) {
		cerr << "Invalid command" << endl;
		return 52;
	}
	else if (v.size() == 2 && v[1] != "-d") {
		std::cerr << "Invalid Command" << std::endl;
		return 52;
	}

	
	//cout << "trying to open file: " << v[0] << endl;
	AbstractFile* f = fs->openFile(v[0]);
	if (f == nullptr) {
		std::cerr << "Unable to open file: " << v[0] << std::endl;
		//unable to open file
		return 53;
	}

	bool dataOnly = (v.size() == 2 && v[1] == "-d");

	if (!dataOnly) {
		BasicDisplayVisitor visitor;
		f->accept(&visitor);
		fs->closeFile(f);
		return 0;
	}

	//formated --> without options
	else {
		//cout << "Displaying file: " << v[0] << endl;
		vector<char> contents = f->read();
		for (size_t i = 0; i < contents.size(); ++i) {
			cout << contents[i];
		}
		cout << endl;
		fs->closeFile(f);
		return 0;
	}


	return 0;

}

void DisplayCommand::displayInfo() {
	// without option "ds"
	cout << "display file formatted" << endl;
	cout << "Usage: ds <filename>" << endl;
	// with option "ds -d"
	cout << "display file unformatted, data only" << endl;
	cout << "Usage: ds <filename> -d" << endl;
}