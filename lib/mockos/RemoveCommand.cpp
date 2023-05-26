#include "../../include/mockos/RemoveCommand.h"
#include "../../include/mockos/BasicDisplayVisitor.h"
#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;

RemoveCommand::RemoveCommand(AbstractFileSystem* fileSys) : fs(fileSys) {}

// removes a file from the current working directory
int RemoveCommand::execute(string cmd) {
	ifstream file(cmd);
	string path = cmd;

	if (file.is_open()) {
		cout << "File is open." << endl;
		return AbstractFileSystem::fileOpen;
	}
	else {
		int result = fs->deleteFile(path);
		if (result == 0) {
			cout << "Successfully removed!" << endl;
			return 0;
		}
		else if (result == AbstractFileSystem::fileNotExist) {
			cout << "File does not exist" << endl;
			return AbstractFileSystem::fileNotExist;
		}
		//file is already opened
		else {
			std::cout << "File is open." << std::endl;
			return AbstractFileSystem::fileOpen;
		}
	}
	
	
	
}

void RemoveCommand::displayInfo() {
	cout << "remove the file with the provided name from the file system" << endl;
	cout << "Usage: rm <file_name>" << endl;
}