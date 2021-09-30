#include <iostream>
#include <string>

using namespace std;

int main1() {
	string s1("Hi my name is Daniel and I love baconand ham!");

	std::cout << s1 << endl;
	s1.erase(20);
	std::cout << s1 << endl;
	s1.replace(14,5, "samuel Jackson");
	s1.insert(14, "lucky ");
	return 0;
}