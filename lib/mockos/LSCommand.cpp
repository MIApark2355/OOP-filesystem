#include "../../include/mockos/LSCommand.h"
#include "../../include/mockos/BasicDisplayVisitor.h"
#include "../../include/mockos/MetadataDisplayVisitor.h"
#include<iostream>
#include<sstream>
#include <iomanip>
#include <typeinfo>

using namespace std;

LSCommand::LSCommand(AbstractFileSystem* afs_input) :
	afs(afs_input) { }

void LSCommand::displayInfo() {
	// without option
	cout << "the names of all files currently in the file system" << endl;
	cout << "Usage: ls" << endl;
	// with option "-m"
	cout << "list with the metadata associated with files" << endl;
	cout << "Usage: ls -m" << endl;
}

int LSCommand::execute(string cmd_input) {
	string remained = cmd_input;
	
    bool showData = false;
    if (remained== "-m") {
        showData = true;
    }

    // get all file names from the file system
    set<string> fileNames = afs->getFileNames();

    // print the file names and metadata if the "-m" option is specified
    if (showData) {
        for (string fileName : fileNames) {

            MetadataDisplayVisitor visitor;

            AbstractFile* f = afs->openFile(fileName);

            //int size = f->getSize();
            //cout << fileName << "\t";
            f->accept(&visitor);
            afs->closeFile(f);
    
        }
    }
    else {

        // print only the file names if there is no option
        if (remained.size() == 0) {
       
            int count = 0;
            for (auto const& fileName : fileNames) {
                cout << setw(20) << left << fileName;
                if (++count % 2 == 0) {
                    cout << endl;
                }
            }
            if (count % 2 != 0) {
                cout << endl;
            }
        }

        else {
            cout << "wrong command option" << endl;
            return 51; //wrong option (= it is not "-m")
        }
    }
    
	
	return 0; 
}