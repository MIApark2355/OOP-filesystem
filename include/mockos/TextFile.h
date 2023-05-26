#pragma once
#include "AbstractFile.h"

class TextFile : public AbstractFile {
	std::vector<char> contents;
	std::string name;

public:
	TextFile(std::string n);
	TextFile(TextFile& f, string newName);
	//s18
	//virtual void read();


	//s19
	virtual std::vector<char> read() ;
	virtual int write(std::vector<char> v) ;
	virtual int append(std::vector<char> v) ;
	virtual unsigned int getSize() ;
	virtual std::string getName() ;

	//studio 19
	virtual void accept(AbstractFileVisitor*);

	//prototype pattern
	virtual TextFile* clone(string newName);
	//void setName(string name);
};