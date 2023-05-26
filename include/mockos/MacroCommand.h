#include <vector>
#include <memory>
#include "AbstractCommand.h"
#include "AbstractParsingStrategy.h"
#include "AbstractFile.h"
#include "AbstractFileSystem.h"

class MacroCommand : public AbstractCommand {
public:
    MacroCommand(AbstractFileSystem*);

    virtual int execute(string input);
    void addCommand(AbstractCommand* command);
    void setParseStrategy(AbstractParsingStrategy* strategy);
    void displayInfo() override;
    //~MacroCommand();



private:
    /*vector<shared_ptr<AbstractCommand>> commands;
    shared_ptr<AbstractParsingStrategy> parseStrategy;*/
    AbstractFileSystem* afs;
    vector<AbstractCommand*> commands;
    AbstractParsingStrategy* parsingStrategy;

};