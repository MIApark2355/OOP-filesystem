#pragma once

#include "AbstractFile.h"
#include <vector>
#include <string>
#include <set>
class AbstractFileSystem {
public:

	//return error
	enum error {
		success,  fileNotExist, fileOpen, fileWasNotOpen, fileAlreadyAdded, fileAlreadyExists, isNull,
		
	};

	//from studio 17
	virtual int addFile(std::string fileName, AbstractFile*) = 0;

	//s19 (comment out)
	//virtual int createFile(std::string fileName) = 0;
	virtual int deleteFile(std::string fileName) = 0;
	virtual AbstractFile* openFile(std::string fileName) = 0;
	virtual int closeFile(AbstractFile*) = 0;


	//lab5-1
	virtual set<string> getFileNames() = 0;
};