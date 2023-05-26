#include "../include/mockos/TextFile.h"
#include "../include/mockos/ImageFile.h"
#include "../include/mockos/SimpleFileSystem.h"
#include "../include/mockos/SimpleFileFactory.h"
#include "../include/mockos/BasicDisplayVisitor.h"
#include "../include/mockos/MetadataDisplayVisitor.h"
#include "../include/mockos/PasswordProxy.h"
#include "../include/mockos/TouchCommand.h"
#include "../include/mockos/CommandPrompt.h"
#include "../include/mockos/DisplayCommand.h"
#include "../include/mockos/LSCommand.h"
#include "../include/mockos/CatCommand.h"
#include "../include/mockos/MacroCommand.h"
#include "../include/mockos/RemoveCommand.h"
#include "../include/mockos/CopyCommand.h"

#include "../include/mockos/RenameParsingStrategy.h"
#include "../include/mockos/CreateEditParsingStrategy.h"


#include <algorithm>

int main(int argc, char* arg[]) {

	// allocate all objects needed
	AbstractFileFactory* aff = new SimpleFileFactory();
	AbstractFileSystem* afs = new SimpleFileSystem();
	AbstractCommand* cmd_1 = new TouchCommand(afs, aff);
	AbstractCommand* cmd_2 = new LSCommand(afs);
	AbstractCommand* cmd_3 = new RemoveCommand(afs);
	AbstractCommand* cmd_4 = new CatCommand(afs);
	AbstractCommand* cmd_5 = new DisplayCommand(afs);
	AbstractCommand* cmd_6 = new CopyCommand(afs);
	//rename
	MacroCommand* cmd_7 = new MacroCommand(afs);
	//create and edit (touch and cat)
	MacroCommand* cmd_8 = new MacroCommand(afs);
	
	//setting parsing strategy
	cmd_7->setParseStrategy(new RenameParsingStrategy);
	cmd_8->setParseStrategy(new CreateEditParsingStrategy);

	//adding commands (rename: rn)
	cmd_7->addCommand(cmd_6);
	cmd_7->addCommand(cmd_3);

	//adding commands (creating and editing: vi)
	cmd_8->addCommand(cmd_1);
	cmd_8->addCommand(cmd_4);

	//test
	string name1 = "i1.img";
	string name2 = "t1.txt";
	AbstractFile* test1 = new ImageFile(name1);
	AbstractFile* test2 = new TextFile(name2);


	afs->addFile(name1,test1);
	afs->addFile(name2,test2);

	// create command prompt and configure
	CommandPrompt cmd;

	cmd.setFileSystem(afs);
	cmd.setFileFactory(aff);
	cmd.addCommand("touch", cmd_1);
	cmd.addCommand("ls", cmd_2);
	cmd.addCommand("rm", cmd_3);
	cmd.addCommand("cat", cmd_4);
	cmd.addCommand("ds", cmd_5);
	cmd.addCommand("cp", cmd_6);
	cmd.addCommand("rn", cmd_7);
	cmd.addCommand("vi", cmd_8);

	// run the command prompt
	cmd.run();

	//What objects are allocated dynamically? ->filefactory, filesystem, file, commands

	
	delete aff;
	// destroying all the files
	delete afs; 
	
	delete cmd_1;
	delete cmd_2;
	delete cmd_3;
	delete cmd_4;
	delete cmd_5;
	delete cmd_6;
	delete cmd_7;
	delete cmd_8;
	return 0;
}

