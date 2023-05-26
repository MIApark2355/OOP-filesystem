#include "../../include/mockos/CopyCommand.h"
#include "../../include/mockos/PasswordProxy.h"


using namespace std;

CopyCommand::CopyCommand(AbstractFileSystem* fileSys) : afs(fileSys) {}

int CopyCommand::execute(string cmd) {

	istringstream iss(cmd);
	string str;
	vector<std::string> v;


	while (iss >> str) {
		v.push_back(str);
	}


	if (v.size() != 2) {
		//invalidCommandParams
		return 56;
	}
	string filename = v[0];
	string copyname = v[1];

	//if the copyname has an extension, throws error message
	// Find the position of the last dot in the filename
	size_t dot_pos = copyname.find_last_of('.');

	if (dot_pos != string::npos) {
		// A dot was found, so the filename includes an extension
		cout << "Usage: cp <file_to_copy> <new_name_with_no_extension>" << endl;
		//new name includes extension
		return 61;
	}

	AbstractFile* file = afs->openFile(filename);
	//if (file) {
	//	//file does not exist
	//	return 57;
	//}


	if (file == nullptr) { // file creation failed
		cout << "Error: unable to open directory" << endl;
		afs->closeFile(file);
		//directory does notexist
		return 58;
	}
	else {

		cout << "Copying from <" << filename << "> to " << copyname << endl;
		
		//getting an extension
		string extension;

		// Find the position of the last dot in the filename
		size_t dot_pos = filename.find_last_of('.');

		if (dot_pos != string::npos) {
			// Extract the characters after the last dot as the extension
			extension = filename.substr(dot_pos + 1);
		}
		//extension added by the cp command
		copyname += ".";
		copyname += extension;

		AbstractFile* copiedFile = file->clone(copyname);

		int result = afs->addFile(copyname, copiedFile);
		if (result != 0) {
			cout << "Error: unable to add file to the file system" << endl;
			afs->closeFile(file);
			afs->closeFile(copiedFile);
			return 59;
		}
		else {
			cout << "Successfully copied!" << endl;
		}

		afs->closeFile(copiedFile);
		afs->closeFile(file);


		return 0;
	}
}

void CopyCommand::displayInfo() {
	//command for copy
	cout << "Copy current file to other file" << endl;
	cout << "Usage: cp <file_to_copy> <new_name_with_no_extension>" << endl;
}

