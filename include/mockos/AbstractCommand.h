#pragma once
#include <string>
#include <iostream>
#include "AbstractFileSystem.h"
#include "AbstractFileFactory.h"

class AbstractCommand {
public:
	virtual int execute(string) = 0;
	virtual void displayInfo() = 0;
	virtual ~AbstractCommand() = default;
};