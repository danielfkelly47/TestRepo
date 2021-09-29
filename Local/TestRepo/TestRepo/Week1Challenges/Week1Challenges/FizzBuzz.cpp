//Filename: main.cpp
//Description: Print the Messasge "Hello World" to the screen
//Author: Daniel Kelly
//Date 21/09/2021

#include <iostream>
using namespace std;
int main() {
	int user_input{};
	for (int i = 1; i <= 100; i++)
	{
		if ((i % 15 == 0) && (i % 5 == 0)) {
			std::cout << "FizzBuzz";
		}
		else if (i % 3 == 0)
		{
			std::cout << "Fizz";
		}
		else if (i % 5 == 0) {
			std::cout << "Buzz";
		}
		else {
			std::cout << i;
		}
		cout << "\n";


		return 0;

}