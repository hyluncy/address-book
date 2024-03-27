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
	 
	return 0;   
}