#pragma once
#include "AbstractFileSystem.h"
#include <map>
#include <set>

class SimpleFileSystem : public AbstractFileSystem {

	std::map<std::string, AbstractFile *> files;
	std::set<AbstractFile *> openFiles;

public:

	//the compiler defined default constructor will work fine for us now, 
	//so there is no need to
	//declare or define a constructor for your SimpleFileSystem class.

	virtual int addFile(std::string fileName, AbstractFile*);
	//virtual int createFile(std::string fileName);
	virtual int deleteFile(std::string fileName);
	virtual AbstractFile* openFile(std::string fileName);
	virtual int closeFile(AbstractFile*);

	//lab5-1
	virtual set<string> getFileNames();
};