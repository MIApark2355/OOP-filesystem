#pragma once
#include "AbstractCommand.h"

class TouchCommand : public AbstractCommand {
public:
	//constructor
	TouchCommand(AbstractFileSystem* afs, AbstractFileFactory* aff);

	virtual int execute(string CWD) override;
	virtual void displayInfo() override;
	virtual ~TouchCommand() = default;
private:
	
	AbstractFileSystem* afs;
	AbstractFileFactory* aff;
};