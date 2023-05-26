#include "../../include/mockos/BasicDisplayVisitor.h"
#include "../../include/mockos/TextFile.h"
#include "../../include/mockos/ImageFile.h"

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

//s19 (moved read method)
void BasicDisplayVisitor::visit_TextFile(TextFile* file) {
	vector<char> contents = file->read();
	for (size_t i = 0; i < contents.size(); ++i) {
		cout << contents[i];
	}
	cout << endl;
}

void BasicDisplayVisitor::visit_ImageFile(ImageFile* file) {
	vector<char> contents = file->read();

	for (int i = 0; i < sqrt(file->getSize()); i++) {
		for (int j = 0; j < sqrt(file->getSize()); j++) {
			int index = i * sqrt(file->getSize()) + j;
  		    std::cout << contents[index];
		}
		std::cout << std::endl;

	}
}
