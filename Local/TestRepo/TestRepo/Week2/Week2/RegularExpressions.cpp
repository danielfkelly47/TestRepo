#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <sstream>
#include <regex>

using namespace std;
void printMatches(std::string str, std::regex reg ) {
	std::smatch matches;
	std::cout << std::boolalpha;
	while (std::regex_search(str, matches, reg)) {
		std::cout << "There is a match" << matches.ready ();
	}

}

int main6() {
	std::string str = "The Ape was at the Apex";
	std::smatch matches;
	std::regex reg("");
	return 0;

}