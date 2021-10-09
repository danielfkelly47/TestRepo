 #include <iostream>
 #include <string>
#include <algorithm>
using namespace std;
int CheckUpperChar(char c);

int main() {
	string s{};
	int numWords{ 1 };

	std::cout << "Enter a CamelCase word here \n"
		std::cin >> s;

	for (int i = 0; i <= s.length(); i++) {
		if (::isupper(s [i]))
		{
			numWords;
		}
	}
}