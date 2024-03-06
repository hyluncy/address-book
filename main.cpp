#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream> 

#include "Person.h" 
#include "addressBook.h" 

using namespace std; 

int main() {
	FILE* file; 
	// opening the address book in reading and append mode 
	file = fopen("myAddressBook.txt", "a+");

	int userInput = mainMenu();
	mainMenuSelection(userInput);  

	
}