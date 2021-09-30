#include <iostream>
#include <string>

using namespace std;
int main2() {
	string s1("OMG I think I am preggy!!");
	std::cout << s1.substr(17,7)<<endl;

	string one("Apples");

	string two("beans");

	cout << one << two << endl;
	one.swap(two);

	cout << one << two << endl;
	string m1("Ham is spam oh yes I am");

	std::cout << s1.find("am") << endl;

	std::cout << s1.rfind("am") << endl;
	return 0;
}