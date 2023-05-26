#include "../../include/mockos/SimpleFileFactory.h"
#include "../../include/mockos/TextFile.h"
#include "../../include/mockos/ImageFile.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>

AbstractFile* SimpleFileFactory::createFile(std::string fileName) {
	std::string txt_str = "txt";
	std::string img_str = "img";
	if (fileName.find(txt_str) != std::string::npos) {
		AbstractFile* file = new TextFile(fileName);
		//creates a file only
		//files.insert(std::pair<std::string, AbstractFile*>(fileName, &txtf));
		return file;
	}
	else if (fileName.find(img_str) != std::string::npos) {
		AbstractFile* file = new ImageFile(fileName);
		//creates a file only
		//files.insert(std::pair<std::string, AbstractFile*>(fileName, &imgf));
		return file;

	}
	//any failure
	return nullptr;

};