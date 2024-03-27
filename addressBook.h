#define _CRT_SECURE_NO_WARNINGS

#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H 

#include "Person.h" 

const int MAX_ENTRIES = 2;

class AddressBook {
	int numOfEntries; 
	Person people[MAX_ENTRIES];  
	std::fstream file;  
public: 
	~AddressBook();

	// Prints out all options user has to interact with address book. Returns the user's choice
	int mainMenu();
	void mainMenuSelection(int userInput, std::fstream& file, Person* person, Person* people[]);

	// Prints out all options user has when updating a person in the address book. Returns the user's choice 
	char updatePersonOptions();

	void addPerson(Person* people[], Person* person, std::fstream& file); 

	// Requests for information from the user on the terminal 
	char* requestName();  
	char* requestAddress(); 
	char* requestPhone(); 
};

#endif 