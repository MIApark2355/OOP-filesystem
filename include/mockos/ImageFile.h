#pragma once
#include "AbstractFile.h"


class ImageFile : public AbstractFile {
	std::vector<char> contents;
	std::string name;
	char size;

public:
	ImageFile(std::string n);
	ImageFile(ImageFile& f, string newName);

	//s18
	//virtual void read();

	//s19
	virtual std::vector<char> read();
	virtual int write(std::vector<char> v);
	virtual int append(std::vector<char> v);
	virtual unsigned int getSize();
	virtual std::string getName();

	//studio 19
	virtual void accept(AbstractFileVisitor*);

	//prototype pattern
	virtual ImageFile* clone(string newName);
	//void setName(string name);
};