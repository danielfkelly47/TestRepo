//Filename: main.cpp
//Description: Print the Messasge "Hello World" to the screen
//Author: Daniel Kelly
//Date 21/09/2021

#include <iostream>
using namespace std;

int main() {
	char start = 'a';
	char end = 'z';
	int number;

	std::cout << "The ASCII value of" << start << "is" << int(start);
	cin >> start;
	std::cout << "The ASCII value of" << end << "is" << int(end);
	cin >> end;
	if (start > 255 || end < 0)
	{
		start = 1;
	}
	if (end < 0 || end >255)
	{
		end = 255;
	}
	std::cout << "The ASCII value of" << endl;
	for (number = start; number <= end; number++)
	{
		cout << number << "Is" << char(number) << endl;
	}
	for (int i = 'A'; i <= 'Z'; i++)
	{
		std::cout << char(i) << "\t" << i << "\t" << char(i + 32) << "\t" << i + 32 << endl;

	}

	return 0;
}