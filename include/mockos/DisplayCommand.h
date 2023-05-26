#pragma once

#include "../include/mockos/AbstractCommand.h"
#include "../include/mockos/AbstractFile.h"
#include "../include/mockos/TextFile.h"
#include "../include/mockos/ImageFile.h"
#include "../include/mockos/BasicDisplayVisitor.h"
#include<iostream>
#include<sstream>
#include<vector>

class DisplayCommand : public AbstractCommand {

public:
	DisplayCommand(AbstractFileSystem* fileSys);
	virtual int execute(string cmd) override;
	virtual void displayInfo() override;
	virtual ~DisplayCommand() = default;
private:
	AbstractFileSystem* fs;
};