//
#include <iostream>
#include <string>

using namespace std;
int checkUpperCase(char c);

int main8() {
	string s, s1, s2;
	int numWords{ 1 };
	std::cout << "Enter a Came case here";
	std::cin >> s;

	for (int i = 0; i <= s.length(); i++)
	{
		if (:: isupper(s[i]))
		{
			numWords++;
		}
	}
	std::cout << "The number of words is" << numWords << endl;
	return 0;

		
	
	
}
int checkUpperChar(char c) {
	for (int i = 0; i < 27; i++)
	{
		if (c ==char('A' + i)) {
			return 1;
		}
	}
}