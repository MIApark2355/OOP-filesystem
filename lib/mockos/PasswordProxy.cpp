#include "../../include/mockos/PasswordProxy.h"
#include<iostream>

using namespace std;

PasswordProxy::PasswordProxy(AbstractFile* file, string pw_set){
	this->actualFile = file;
	this->pw = pw_set;

}

//PasswordProxy::PasswordProxy(PasswordProxy &f) {
//	this->actualFile = f.actualFile;
//	this->pw = f.pw;
//}


string PasswordProxy::passwordPrompt() {
	cout << "Insert Password: ";
	string input;
	getline(cin, input);
	return input;
}

unsigned int PasswordProxy::getSize() {
	return actualFile->getSize();
}

string PasswordProxy::getName() {
	return actualFile->getName();
}

vector<char> PasswordProxy::read() {
	string input_pw = "";
	input_pw = passwordPrompt();
	vector<char> res;
	if (actualFile != nullptr) {
		if (pw == input_pw) {
			res = actualFile->read();
		}
		//if the password is incorrect do nothing and return empty vector
		else {
			cout << "Incorrect Password--> cannot read" << endl;
		}
		return res;
	}
	else {
		// when actualFile is null
		return res;
	}
	
	
}

void PasswordProxy::accept(AbstractFileVisitor* fv) {
	//cout << "accepting";
	string input_pw = passwordPrompt();
	if (pw == input_pw) {
		actualFile->accept(fv);
	}
}

int PasswordProxy::write(vector<char> data) {
	//cout << "writing ";
	string input_pw = passwordPrompt();
	if (pw == input_pw) {
		return actualFile->write(data);
	}
	else {
		// password incorrect
		cout << "Incorrect password --> cannot write" << endl;
		return 201;
	}
	
}

int PasswordProxy::append(vector<char> data) {
	//cout << "appending ";
	string input_pw = passwordPrompt();
	if (pw == input_pw) {
		return actualFile->append(data);
	}
	else {
		// password incorrect
		cout << "Incorrect password --> cannot append" << endl;
		return 201;
	}
	
}

//The destructor that deletes the pointer to the real file
PasswordProxy::~PasswordProxy() {
	delete actualFile;
}

bool PasswordProxy::match() {
	string input_pw = passwordPrompt();
	if (pw == input_pw) {
		return true;
	}return false;
}



//Prototype pattern
PasswordProxy* PasswordProxy::clone(string newName) {
	return new PasswordProxy(actualFile->clone(newName),pw);
}