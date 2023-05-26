#pragma once
#include "AbstractCommand.h"


class RemoveCommand : public AbstractCommand {
public:
	RemoveCommand(AbstractFileSystem* afs);
	virtual int execute(string cmd) override;
	virtual void displayInfo() override;
	virtual ~RemoveCommand() = default;
private:
	AbstractFileSystem* fs;
};