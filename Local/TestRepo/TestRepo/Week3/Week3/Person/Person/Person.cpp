// Person.cpp
// // Author: Daniel Kelly
// Date: 07/10/2021
//Description: class declaration header file for the Person Class
# include "Person.h"
# include <string>
//
Person::Person() {
	std::cout << name_ << "Is Alive!" << endl;
}
Person::Person(std::string name) :name_{ name } {
	std::cout << name << "Is Alive" << std::endl;

}

Person::Person(int age) : age_{ age } {
	std::cout << "I am" << age << std::endl;
}

Person::Person(std::string name, int age) {
	//:name_{name}, age_{age};
	std::cout << "I am" << age << std::endl;
}
void Person::PrintName() const {
	std::cout << name_ << endl;
}
void Person::setName(std::string name) {
	name_ = name;

};

std::string Person::getName() const {
	return name_;
}

void Person::setAge(int age) {
	age_ = age;
}
int Person::getAge()const {
	return age_;
}

