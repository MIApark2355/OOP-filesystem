#include "../../include/mockos/CreateEditParsingStrategy.h"
#include <iostream>
#include <sstream>

vector<string> CreateEditParsingStrategy::parse(string str) {

    vector<string> parsed_input;
    istringstream iss(str);

	vector<string> v_check;
	while (iss >> str) {
		v_check.push_back(str);
	}

	if (v_check.size() == 1) {
		string filename = v_check[0];
		parsed_input.push_back(filename);
		parsed_input.push_back(filename);
	}
	else if (v_check.size() == 2 && v_check[1] == "-p") {
		string filename = v_check[0];
		string first = filename + " " + "-p";
		parsed_input.push_back(first);
		parsed_input.push_back(filename);
	}
	
    return parsed_input;
}
