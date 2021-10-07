#pragma once
// Person.h
// // Author: Daniel Kelly
// Date: 07/10/2021
//Description: class declaration header file for the Person Class
#include <iostream>
#include <string>

using namespace std;

class Person {
public:
	std::string name_;
	int age_;

	void PrintName()const {
	std:cout << name_ << endl;

	}
};