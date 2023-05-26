#include "../../include/mockos/MetadataDisplayVisitor.h"
#include "../../include/mockos/TextFile.h"
#include "../../include/mockos/ImageFile.h"

#include<iostream>
#include<vector>
using namespace std;

//display a file's metadata(the file's name, size, and type)
void MetadataDisplayVisitor::visit_TextFile(TextFile* file) {
	cout << file->getName() << "\t" << "text\t"<< file->getSize();
	//cout  << "text\t" << file->getSize();
	cout << endl;
}

void MetadataDisplayVisitor::visit_ImageFile(ImageFile* file) {
	cout << file->getName() << "\t" << "image\t" << file->getSize();
	//cout  << "image\t" << file->getSize();
	cout << endl;
}
