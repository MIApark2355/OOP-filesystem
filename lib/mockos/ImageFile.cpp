#include "../../include/mockos/ImageFile.h"

#include <iostream>
//virtual void read() = 0;
//virtual int write(std::vector<char> v) = 0;
//virtual int append(std::vector<char> v) = 0;
//virtual unsigned int getSize() = 0;
//virtual std::string getName() = 0;

ImageFile::ImageFile(std::string n) :name(n), size(0) {
};

//copy constructor
ImageFile::ImageFile(ImageFile& f, string newName) {
	contents = f.contents;
	size = f.size;
	name = newName;
};

//line 14: before s19 & line 16: after s18
//void ImageFile::read() {

vector<char> ImageFile::read() {
	//s19
	return contents;

	//s18
	/*for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			int index = i * size + j;
			std::cout << contents[index];
		}
		std::cout << std::endl;
		
	}
	*/
};

int ImageFile::write(std::vector<char> v) {
	vector<char> original = contents;
	if (v.size() == 0) {
		contents.clear();
		size = 0;
		return 0;
	}
	int size_input = v[v.size() - 1] - 48;
	//std::cout << "size_input: " << size_input << std::endl;
	//size = size_input;
	if ((v.size()-1) != (size_input*size_input)) {
		//size mismatch
		contents.clear();
		size = 0;
		cout << "ERROR --> Invalid input for writing on image file (size mismatch)" << endl;
		return 2;
	}
	
	for (int i = 0; i < v.size()-1; i++) {
		if (v[i] != 'X' && v[i] != ' ') {
			//something other than a 'X' or a ''
			contents.clear();
			size = 0;
			cout << "ERROR --> Invalid input, something other than a 'X' or a ' '" << endl;
			return 3;
		}
	}
	contents = v;
	contents.pop_back();
	size = size_input;

	return 0;
};

int ImageFile::append(std::vector<char> v) {
	//an image file should not support append
	return 1;
};

unsigned int ImageFile::getSize() {
	return contents.size();
};

std::string ImageFile::getName() {
	return name;
};


//studio 19
void ImageFile::accept(AbstractFileVisitor* abs_v) {
	if (abs_v) { abs_v->visit_ImageFile(this); }
}

//void ImageFile::setName(string input) {
//	name = input;
//};


//Prototype pattern
ImageFile* ImageFile::clone(string newName) {
	return new ImageFile(*this, newName);
}