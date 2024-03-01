#define _CRT_SECURE_NO_WARNINGS

#include <iostream> 
#include <cstring> 
#include "Person.h" 

using namespace std; 

// 1 argument Constructor 
Person::Person(const char* arg_Name) {
	m_Name = new char[strlen(arg_Name) + 1];
	strcpy(m_Name, arg_Name);
	m_Address = NULL; 
	m_Phone = NULL;  
}

// 2 argument constructor 
Person::Person(const char* arg_Name, const char* arg_Address) : Person(arg_Name) {
	m_Address = new char[strlen(arg_Address) + 1]; 
	strcpy(m_Address, arg_Address);
	m_Phone = NULL;
}

// 3 argument Constructor 
Person::Person(const char* arg_Name, const char* arg_Address, const char* arg_Phone) : Person(arg_Name, arg_Address) {
	m_Phone = new char[strlen(arg_Phone) + 1]; 
	strcpy(m_Phone, arg_Phone); 
}

// Destructor to deallocate dynamic memory
Person::~Person() {
	delete[] m_Name;
	delete[] m_Address; 
	delete[] m_Phone; 
}




