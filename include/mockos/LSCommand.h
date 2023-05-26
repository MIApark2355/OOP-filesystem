#pragma once

#include "AbstractCommand.h"

class LSCommand : public AbstractCommand {
public:
	LSCommand(AbstractFileSystem* fileSys);
	virtual int execute(string CWD) override;
	virtual void displayInfo() override;
	virtual ~LSCommand() = default;
private:
	AbstractFileSystem* afs;
};