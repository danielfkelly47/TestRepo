//Filename: main.cpp
//Description: Print the Messasge "Hello World" to the screen
//Author: Daniel Kelly
//Date 21/09/2021


#include <iostream>
#include <string>

using namespace std;
int main() {


	std::cout << "Hello World, my name is Daniel " << std::endl;
	std::cout << "Well how are you today" << " This is C++ Programming is easy" << std::endl;

	// Variables and Types
	std::cout << "Variables and Types \n" << std::endl;
	int number = 27;
	std::cout << "The value of number is: " << number << std::endl;

	int number2;
	number2 = 99;
	std::cout << "The value of number 2 is: " << number2 << std::endl;

	bool busy = true;
	double tax = 23;
	char start = 'a';
	char end = 'z';
	std::cout << "The value of busy  is: " << busy << "The value of tax is:" << tax << std::endl;

	//Input with cin
	std::cout << "What is your Name \n" << std::endl;
	std::string name = "";
	// Get the name
	cin >> name;

	std::cout << "Hello \n" << name << std::endl;
	//std::cout << "This is C++ Programming is easy" << std::endl;
	std::cout << "What is your first Name \n" << std::endl;

	string fName, sName;

	int age;
	cin >> fName;
	std::cout << "What is your second  Name \n" << std::endl;
	cin >> sName;

	std::cout << "How Old are you \n" << std::endl;
	cin >> age;

	std::cout << fName << " " << sName << " " << age << std::endl;
	return 0;

	// Operators
	int a;
	int b;
	int sum;

	std::cout << "What is your First number \n" << std::endl;
	std::cin >> a;

	std::cout << "What is your Second number \n" << std::endl;
	std::cin >> b;

	sum = a + b;

	std::cout << "The sum of your two numbers is:" << sum << std::endl;

	int length;
	int width;
	int perimeter = (length + width) * 2;

	std::cout << "Please entter the  Length of the field" << std::endl;
	std::cin >> length;

	std::cout << "Please enter the width of the field  \n" << std::endl;
	std::cin >> width;


	std::cout << "The perimeter of  the field  is:" << perimeter << std::endl;

	//Auto keyword initialation
	auto variable1 = 1;
	auto variable2 = 'f';
	auto variable3 = 64.2;


}