#include "../../include/mockos/MacroCommand.h"
#include "../../include/mockos/RenameParsingStrategy.h"
#include <iostream>

using namespace std;


MacroCommand::MacroCommand(AbstractFileSystem* fs) : afs(fs), parsingStrategy(nullptr) {}


void MacroCommand::addCommand(AbstractCommand* command) {
	commands.push_back(command);
}

void MacroCommand::setParseStrategy(AbstractParsingStrategy* strategy) {
	parsingStrategy = strategy;
}



int MacroCommand::execute(std::string input) {
    // Parse input using the parsing strategy
    

	if (parsingStrategy != nullptr) {

		vector<string> parsedInput = parsingStrategy->parse(input);
		if (parsedInput.size() != commands.size()) {
			cout << "execution failed" << endl;
			return 62;
		}
		for (int i = 0; i < commands.size(); i++) {
			int result = commands[i]->execute(parsedInput[i]);
			if (result != 0) {
				//execution failed
				return 60;
			}
		}
		return 0;

	}
	else {
		cout << "strategy is not set" << endl;
		return 59;
	}

}

void MacroCommand::displayInfo() {

    cout << "Renaming a file" << endl;
    cout << "Usage: rn <existing_file> <new_name_with_no_extension>" << endl;

    //additional macro command (#9)
    cout << "Creating and editing a file immediately" << endl;
    cout << "Usage: vi <filename> [-p]" << endl;
}