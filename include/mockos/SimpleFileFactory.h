#pragma once
#include "AbstractFileFactory.h"
#include <map>
#include <set>

class SimpleFileFactory : public AbstractFileFactory {

	std::map<std::string, AbstractFile*> files;
	std::set<AbstractFile*> openFiles;

public:

	//the compiler defined default constructor will work fine for us now, 
	//so there is no need to
	//declare or define a constructor for your SimpleFileSystem class.

	virtual AbstractFile* createFile(std::string fileName);
};