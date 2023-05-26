#include "../../include/mockos/TextFile.h"

#include <iostream>
//virtual void read() = 0;
//virtual int write(std::vector<char> v) = 0;
//virtual int append(std::vector<char> v) = 0;
//virtual unsigned int getSize() = 0;
//virtual std::string getName() = 0;

TextFile::TextFile(std::string n):name(n){
};


//copy constructor
TextFile::TextFile(TextFile &f, string newName) {
	contents = f.contents;
	name = newName;
};

//line 14: before s19 & line 16: after s18
//void TextFile::read() {

vector<char> TextFile::read() {
	//s19
	return contents;

	//s18
	//for (int i = 0; i < contents.size(); i++){
	//	std::cout << contents[i];
	//}
};

int TextFile::write(std::vector<char> v) {
	contents = v;
	return 0;
};

int TextFile::append(std::vector<char> v) {
	contents.insert(contents.end(), v.begin(), v.end());
	return 0;
};

unsigned int TextFile::getSize() {
	return contents.size();
};

std::string TextFile::getName() {
	return name;
};

//void TextFile::setName(string input) {
//	name = input;
//};

//studio 19
void TextFile::accept(AbstractFileVisitor* abs_v) {
	if (abs_v) { abs_v->visit_TextFile(this); }
}


//Prototype pattern
TextFile* TextFile::clone(string newName) {
	return new TextFile(*this, newName);
}