#define _CRT_SECURE_NO_WARNINGS

#include <iostream> 
#include <fstream>

#include "addressBook.h" 
#include "Person.h"  

using namespace std; 

int AddressBook::mainMenu() {
	int userInput; 

	cout << "Please choose an option:\n" <<
		"1 - Add person\n" <<
		"2 - Delete person\n" <<
		"3 - Update person\n" <<
		"0 - Close address book\n" << endl;
	cin >> userInput;
	cin.ignore(); 
	return userInput;  
}

char AddressBook::updatePersonOptions() {
	char userInput; 

	cout << "Please choose what you would like to update:\n" <<
		"A - Update address\n" <<
		"B - Update phone number\n" << endl; 
	cin >> userInput; 
	return userInput;   
} 

void AddressBook::mainMenuSelection(int userInput, fstream& file, Person* person, Person* people[]) {
	switch (userInput) { 
		// Person does not exist in the address book --> make new entry 
	case 1:
		if (this->numOfEntries < MAX_ENTRIES) {
			addPerson(people, person, file); 
			cout << person->getName() << " has been successfully added!\n" << endl;
		}
		else {
			cout << "Address Book is full. Please delete an entry to add another person.\n" << endl;
		}
		break;
	case 2:
		break;
	case 3:
		updatePersonOptions(); 
		break; 
	case 4:
		break; 
	}
}

void AddressBook::addPerson(Person* people[], Person* person, fstream& file) {
	char* name = requestName();    
	person->setName(name);  
	char* address = requestAddress(); 
	person->setAddress(address); 
	char* phone = requestPhone(); 
	person->setPhone(phone); 

	people[this->numOfEntries++] = person; 
	file << "Name: " << person->getName() << "\nAddress: " << person->getAddress() << "\nPhone: " << person->getPhone() << "\n" << endl;
}

char* AddressBook::requestName() {
	cout << "Please enter their name: " << endl;
	char* name = new char[MAX_NAME];
	cin.getline(name, MAX_NAME); 
	return name;
}

char* AddressBook::requestAddress() {
	cout << "Please enter their address: " << endl; 
	char* address = new char[MAX_ADDRESS]; 
	cin.getline(address, MAX_ADDRESS);
	return address;  
}

char* AddressBook::requestPhone() {
	cout << "Please enter their phone number: " << endl; 
	char* phone = new char[MAX_PHONE]; 
	cin.getline(phone, MAX_PHONE); 
	return phone; 
}

AddressBook::~AddressBook() { 
	file.close();   
} 

