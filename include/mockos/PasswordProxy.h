#pragma once

#include "AbstractFile.h"
#include "AbstractFileVisitor.h"
#include "ImageFile.h"
#include "TextFile.h"
#include <vector>	

class PasswordProxy : public AbstractFile {
public:
	//c
	PasswordProxy(AbstractFile* abs_f, string pw);

	//for copy
	PasswordProxy(PasswordProxy &f);
	//d
	virtual ~PasswordProxy();


	//Q3)
	virtual vector<char> read() override;
	virtual int write(vector<char>) override;
	virtual int append(vector<char>) override;
	virtual unsigned int getSize() override;
	virtual string getName() override;
	virtual void accept(AbstractFileVisitor*) override;


	virtual PasswordProxy* clone(string) override;
protected:
	virtual string passwordPrompt();

	virtual bool match();

private:
	//a
	//This will point to the file that is to be pw protected
	AbstractFile* actualFile;

	//b
	//A private string that will be the password for the real file
	string pw;

	//std::vector<char> contents;
	
};