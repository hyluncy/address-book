#define _CRT_SECURE_NO_WARNINGS

#include <iostream> 
#include <cstring> 

#include "Person.h" 

using namespace std; 

// Destructor to deallocate dynamic memory
Person::~Person() {
	delete[] m_Name;
	delete[] m_Address; 
	delete[] m_Phone; 
}






