#include "../../include/mockos/RenameParsingStrategy.h"
#include <iostream>
#include <sstream>

vector<string> RenameParsingStrategy::parse(string str) {
    vector<string> parsed_input;
    istringstream iss(str);
    string existing_file, new_name;
    iss >> existing_file >> new_name;
    parsed_input.push_back(existing_file + " " + new_name);
    parsed_input.push_back(existing_file);
    return parsed_input;
}

//void RenameParsingStrategy::displayInfo() {
//    cout << "Renaming a file" << endl;
//    cout << "Usage: rn <existing_file> <new_name_with_no_extension>" << endl;
//}