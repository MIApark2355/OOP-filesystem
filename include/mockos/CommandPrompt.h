#pragma once

#include "AbstractCommand.h"
#include "AbstractFileSystem.h"
#include "AbstractFileFactory.h"

#include <string>
#include <map>

class CommandPrompt {
public:
	//d
	CommandPrompt();

	//e
	~CommandPrompt() = default;

	//f
	void setFileSystem(AbstractFileSystem*);

	//g
	void setFileFactory(AbstractFileFactory*);
	
	//h
	int addCommand(std::string, AbstractCommand*);
	

	//k
	int run();
	

private:

	//s21-3-a
	std::map<std::string, AbstractCommand*> commands;

	//b
	AbstractFileSystem* fileSystem;

	//c
	AbstractFileFactory* fileFactory;


protected:
	//i
	void listCommands();

	//j
	std::string prompt();
};