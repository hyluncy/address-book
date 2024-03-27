#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream> 

#include "Person.h" 
#include "addressBook.h" 

using namespace std; 

int main() {
	// opening the address book in reading and append mode 
	fstream file; 
	file.open("myAddressBook.txt", ios::out | ios::in | ios::app); 

	AddressBook myBook; 

	Person* person = new Person(); 
	Person* people[MAX_ENTRIES];  

	int userInput = -1;

	do {
		userInput = myBook.mainMenu();
		myBook.mainMenuSelection(userInput, file, person, people);
	} while (userInput != 0);

	return 0;
}