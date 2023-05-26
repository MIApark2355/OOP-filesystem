#include "../../include/mockos/SimpleFileSystem.h"
#include "../../include/mockos/TextFile.h"
#include "../../include/mockos/ImageFile.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>

//member variables
//std::map<std::string, AbstractFile *> files; --> contains all files in the file system
//std::set<AbstractFile*> openFiles;


int SimpleFileSystem::addFile(std::string fileName, AbstractFile* abst_ptr) {
	if (files.find(fileName) != files.end()) {
		//already exist 
		return fileAlreadyExists;
	}
	else if (abst_ptr == nullptr) {
		//nullptr
		return isNull;
	}
	files.insert(std::pair<std::string, AbstractFile*>(fileName, abst_ptr));
	return 0;

};
//int SimpleFileSystem::createFile(std::string fileName) {
//	if (files.find(fileName) != files.end()) {
//		//same name already exist 
//		return 173;
//	}
//	std::string txt_str = "txt";
//	std::string img_str = "img";
//	if (fileName.find(txt_str) != std::string::npos) {
//		TextFile txtf(fileName);
//		files.insert(std::pair<std::string, AbstractFile*>(fileName, &txtf));
//		return 0;
//	}
//	else if (fileName.find(img_str) != std::string::npos) {
//		ImageFile imgf(fileName);
//		files.insert(std::pair<std::string, AbstractFile*>(fileName, &imgf));
//		return 0;
//
//	}
//	//any failure
//	return 175;
//	
//};

int SimpleFileSystem::deleteFile(std::string fileName) {
	auto thatFile = files.find(fileName);
	if (files.find(fileName) != files.end()) {
		//ifstream filestr(fileName);
		AbstractFile* file = thatFile->second;
		//If it is not open
		if (openFiles.find(file) == openFiles.end()) {
			files.erase(thatFile);
			delete file;
			
			return 0;
		}
		else {
			//the file is open
			return fileOpen;
		}
	}
	else {
		//the file does not exist
		return 	fileNotExist;
	}
};
AbstractFile* SimpleFileSystem::openFile(string fileName) {
	auto thatFile = files.find(fileName);
	if (thatFile != files.end()) { // file exists
		AbstractFile* file = thatFile->second;
		//If the file is not already open
		if (openFiles.find(file) == openFiles.end()) { 
			openFiles.insert(file);
			return file;
		}
		//else { // file already open
		//	return nullptr;
		//}
	}
	else { // file does not exist
		return nullptr;
	}
	return nullptr;
};
int SimpleFileSystem::closeFile(AbstractFile* abst_ptr) {
	if (openFiles.find(abst_ptr) != openFiles.end()) {
		auto thatFile = openFiles.find(abst_ptr);
		openFiles.erase(thatFile);
		return 0;
	}
	return fileWasNotOpen;
};

//lab5
set<string> SimpleFileSystem::getFileNames() {
	set<string> fileName;
	for (auto const& element : files) {
		fileName.insert(element.first);
	}
	return fileName;
}