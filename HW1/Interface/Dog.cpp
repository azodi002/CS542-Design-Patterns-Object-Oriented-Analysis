/*******************************************
Name: Omid Azodi
Class: CS542
Date: 02/06/2017
Professor: Dr. Ye
File Name: Dog.cpp
*******************************************/
#include "Dog.h"

Dog::Dog()
{ 
	cout << "Creating Dog" << endl; 
}

Dog::~Dog() 
{ 
	cout << "Destroying Dog" << endl; 
}

/**************************************
@method -> void Speak()
@param  -> NONE
@return type = void
Description: Print Dog Message
***************************************/
void Dog::Speak() 
{ 
	cout << "Bow Wow" << endl; 
}
