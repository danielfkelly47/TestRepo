#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Person {
public:
	std::string name_;
	int age_;

	void PrintName()const {
		std::cout << name_ << endl;

	}

};

int main() {
	// Main 
	std::cout << "Welcome to the Intro to Classes" << endl;
	Person Jim;
	Jim.name_ = "Jim Harkin";
	

	
	Jim.age_ = 40;

	Jim.PrintName();

	Person Jane{ "Jane Doe",23 };

	return 0;

}
