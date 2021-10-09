#include <iostream>
#include <string>

using namespace std;

int main7() {
	
		string s1;
		string s2;

		if (s1 == s2) {
			std::cout << "This please Chuck Norris";
		}
		else
		{
		std: cout << "I pitty the fool";
		}
		return 0;

		// Task 2 Comparing strings part II
		s1 = "HELLO";
		s2 = "Hello";

		std::cout << s1 << s2 << endl;
		s1.swap (s2);

		//Task 3 Coded Messages

		if ( s1 == s2)
		{
			std::cout << "Holiday or Bwlize";
		}
		if (s1== s2) {
			std::cout << "Yes Shoot them";
		}

		//Challenge 3 Valid Email
		char emailAddress;
		char symbol = '@';
		char Period = '-';

			if (emailAddress == symbol && Period)
			{
				std::cout << "Thank You" << endl;
			}
			else
			{
				std::cout << "Please ennter a valid email address";
			}

			// Challenge 4 Caesar Cipher
			int k;
			string s;



}