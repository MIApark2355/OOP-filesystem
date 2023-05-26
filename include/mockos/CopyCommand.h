#pragma once

#include "AbstractCommand.h"
#include <sstream>


class CopyCommand : public AbstractCommand {

public:
	CopyCommand(AbstractFileSystem* fileSys);
	virtual int execute(string cmd) override;
	virtual void displayInfo() override;
	virtual ~CopyCommand() = default;
private:
	AbstractFileSystem* afs;
};