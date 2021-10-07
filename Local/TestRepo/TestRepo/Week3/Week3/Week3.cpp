#include <iostream>
#include <string>
#include "Programs.h"
using namespace std;

class Person {
public:
	std::string name_;
	int age_;

	void PrintName()const {
	std:cout << name_ << endl;
		
	}
};

int main() {
	Person Jim;
	Jim.name_ = "Jim Harkin";
	Jim.age_ = 40;

	Jim.PrintName();
	std::cout << "Welcome to the Intro to Class" << endl;

	return 0;
}