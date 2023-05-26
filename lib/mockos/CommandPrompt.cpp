#include "../../include/mockos/CommandPrompt.h"
#include<iostream>
#include <sstream>

using namespace std;

//d
CommandPrompt::CommandPrompt() : fileSystem(nullptr), fileFactory(nullptr) {}


//f
void CommandPrompt::setFileSystem(AbstractFileSystem* fs_input) {
	fileSystem = fs_input;
}

//g
void CommandPrompt::setFileFactory(AbstractFileFactory* ff_input) {
	fileFactory = ff_input;
}

//h
int CommandPrompt::addCommand(string name, AbstractCommand* cmd) {
	auto result = commands.insert({ name,cmd });
	if (result.second) {
		return 0;
	}
	else {
		//failed to add command
		return 211;
		
	}
}

//i
//prints the command names
void CommandPrompt::listCommands() {
	cout << "Commands:" << endl;
	for (auto it = commands.begin(); it != commands.end(); ++it) {
		cout << it->first << endl;
	}
}

//j
string CommandPrompt::prompt() {
	cout << "Enter a command, ";
	cout << "'q' to quit,";
	cout << "'help' for a list of commands, ";
	cout << "or 'help' followed by a command name for more information about that command." << endl;
	cout << "$  ";
	string input;
	getline(cin, input);
	return input;
}

//k
int CommandPrompt::run() {
	while (1) {
		string input = prompt();
		if (input == "q") {
			return 212;
		}
		else if (input == "help") {
			listCommands();
		}
		else if (input.find_first_of(' ') == string::npos) { // single word command
			auto it = commands.find(input);
			if (it == commands.end()) {
				cout << "invalid command" << endl;
			}
			else {
				int result = it->second->execute(""); // no additional options
				if (result != 0) {
					cout << "command failed" << endl;
				}
			}
		}
		else {  //if the input is longer than 1 word
			istringstream iss(input);  //wrap the input in a istringstream
			string command;
			iss >> command;// extract the first word
			if (command == "help") {
				string commandToDisplay;
				iss >> commandToDisplay; //extract the second word
				auto it = commands.find(commandToDisplay);
				if (it != commands.end()) { // if valid command, display its information
					it->second->displayInfo();
				}
				else {
					cout << "command does not exist" << endl;
				}
			}
			else { //the first word is a command name
				auto it = commands.find(command);
				if (it != commands.end()) {

					string remained = input.substr(input.find_first_of(' ') + 1, string::npos);
					int result = it->second->execute(remained);
					if (result != 0) {
						cout << "command failed" << endl;
					}
				}
				else {
					cout << "invalid command" << endl;
				}
			}
		}
	}
}






