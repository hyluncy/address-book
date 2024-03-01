#define _CRT_SECURE_NO_WARNINGS

#ifndef PERSON_H
#define PERSON_H 

class Person {
	char* m_Name; 
	char* m_Address; 
	char* m_Phone; 
public: 
	// Constructors
	Person(const char* arg_Name); 
	Person(const char* arg_Name, const char* arg_Address);  
	Person(const char* arg_Name, const char* arg_Address, const char* arg_Phone); 
	// Destructor
	~Person(); 
	void updateAddress(); 

};



#endif 