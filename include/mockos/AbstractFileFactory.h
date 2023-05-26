#pragma once

#include "AbstractFile.h"
#include <string>
class AbstractFileFactory {
public:

	//from studio 18
	virtual AbstractFile* createFile(std::string fileName) = 0;
};