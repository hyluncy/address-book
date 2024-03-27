#define _CRT_SECURE_NO_WARNINGS

#ifndef PERSON_H
#define PERSON_H 

#define MAX_NAME 125
#define MAX_ADDRESS 150
#define MAX_PHONE 20


class Person {
	char* m_Name; 
	char* m_Address; 
	char* m_Phone; 
public: 
	~Person(); 
};

#endif 