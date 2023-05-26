#include "AbstractCommand.h"


class CatCommand : public AbstractCommand {
public:
	CatCommand(AbstractFileSystem* fileSys);
	virtual int execute(string options) override;
	virtual void displayInfo() override;
	virtual ~CatCommand() = default;
private:
	AbstractFileSystem* afs;
};