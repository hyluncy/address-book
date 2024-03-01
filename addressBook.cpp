#define _CRT_SECURE_NO_WARNINGS

#include <iostream> 
#include "addressBook.h" 
#include "Person.h" 

using namespace std; 

int mainMenu() { 
	int userInput; 

	cout << "Please choose an option:\n" <<
		"1 - Add person\n" <<
		"2 - Delete person\n" <<
		"3 - Update person\n" << endl;  
	cin >> userInput;

	return userInput;  
}

char updatePersonOptions() {
	char userInput; 

	cout << "Please choose what you would like to update:\n" <<
		"A - Update address\n" <<
		"B - Update phone number\n" << endl; 
	cin >> userInput; 
	 
	return userInput;   
} 

// using 'void' as a placeholder 
void mainMenuSelection(int userInput) { 
	switch (userInput) { 
		// Person does not exist in the address book --> make new entry 
	case 1:
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

void updateAddress() {

}

