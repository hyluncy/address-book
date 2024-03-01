#define _CRT_SECURE_NO_WARNINGS

#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H 

// prints out all options user has to interact with address book. Returns the user's choice
int mainMenu();  

// prints out all options user has when updating a person in the address book. Returns the user's choice 
char updatePersonOptions(); 

void mainMenuSelection(int userInput); 


#endif 