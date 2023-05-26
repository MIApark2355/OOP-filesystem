#include "../../include/mockos/TouchCommand.h"
#include "../../include/mockos/PasswordProxy.h"
#include<iostream>
#include<sstream>

using namespace std;

TouchCommand::TouchCommand(AbstractFileSystem* afs_input, AbstractFileFactory* aff_input) :
	afs(afs_input),aff(aff_input) { }

void TouchCommand::displayInfo() {
	cout << "touch creates a file" << endl;
	cout << "Usage: touch <filename>" << endl;
	cout << "creating password protected files " << endl;
	cout << "Usage: touch <filename> -p" << endl;
}

int TouchCommand::execute(string cmd_input) {
	istringstream iss(cmd_input);
	string str;
	vector<string> v;

	while (iss >> str) {
		v.push_back(str);
	}

	if (v.size() < 1) {
		std::cerr << "Usage: ds <filename> [-p]" << std::endl;
		return 52;
	}
	else if (v.size() == 2 && v[1] != "-p") {
		std::cerr << "Usage: ds <filename> [-p]" << std::endl;
		return 52;
	}
	else if (v.size() > 2) {
		std::cerr << "Invalid command" << std::endl;
		return 52;
	}

	AbstractFile* f = aff->createFile(v[0]);
	if (f == nullptr) {
		//The file was not created successfully
		cout << "failed to create file" << endl;
		return 213;
	}
	if (v.size() == 2 && v[1] == "-p") {
		string password;
		cout << "What is the password? ";
		getline(cin, password);
		f = new PasswordProxy(f, password);
	}

	

	int result = afs->addFile(v[0], f);
	if (result != 0) {
		cout << "failed to add file to file system, deleting file" << endl;
		delete f;
		return 214;
	}
	cout << "successfully executed" << endl;
	return 0;
}

