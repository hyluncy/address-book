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

// Getter functions
const char* Person::getName() const {
	return m_Name;
}
const char* Person::getAddress() const {
	return m_Address;
}
const char* Person::getPhone() const {
	return m_Phone;
}

// Setter functions 
void Person::setName(char* name) {
	m_Name = name;
}

void Person::setAddress(char* address) {
	m_Address = address;
}

void Person::setPhone(char* phone) {
	m_Phone = phone;
}






