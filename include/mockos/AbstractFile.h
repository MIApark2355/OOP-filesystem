#pragma once

#include <vector>
#include <string>
#include "AbstractFileVisitor.h"

using namespace std;
class AbstractFile {
public:
//    AbstractFile();
	virtual ~AbstractFile() = default;

	//s18
	//virtual void read() = 0;
	
	//changed from void to vector<char> in studio 19
	//s19
	virtual vector<char> read() = 0;

	virtual int write(std::vector<char> v) = 0;
	virtual int append(std::vector<char> v) = 0;
	virtual unsigned int getSize() = 0;
	virtual std::string getName() = 0;

	//studio 19
	virtual void accept(AbstractFileVisitor*) = 0;

	//To implement the prototype pattern for the copy command
	virtual AbstractFile* clone(string newName) = 0;
};
