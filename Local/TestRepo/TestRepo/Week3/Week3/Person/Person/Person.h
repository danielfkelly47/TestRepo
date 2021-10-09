#pragma once
// Person.h
// // Author: Daniel Kelly
// Date: 07/10/2021
//Description: class declaration header file for the Person Class
#include <iostream>
#include <string>

using namespace std;

class Person {
	//Data members private
private:
	std::string name_;
	int age_;

public:
	Person();
	explicit Person(std::string name);
	explicit Person(int age);

	Person(std::string name, int age);
	void setName(std::string name);
	std::string getName() const;

	void setAge(int age);
	int getAge()const;

	void PrintName()const {
	std:cout << name_ << std::endl;

	}
};