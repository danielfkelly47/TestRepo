#include <iostream>
# include <string>
#include "Person.h"

using namespace std;
void DoBar(Person p) {
	int i = p.getAge();
}

int main() {
	DoBar(27);
	std::cout << "Welcome to the Intro to Classes" << endl;

	Person Jane{ "Jane Doe" , 23 };
	Person Jim;

	Jim.setName("Jim Harkin");
	Jim.setAge(40);

	Jim.PrintName();

	string name = Jim.getName();
	int age = Jim.getAge();

}