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

		std::cout << "Are there no matches" << matches.empty();

		std::cout << "Number Of Matches" << matches.size();

		std::cout << "" << matches.str (1);

		str = matches.suffix().str();
		std::cout << "\n";
	}

}

int main6() {
	std::string str = "The Ape was at the Apex";
	std::smatch matches;
	std::regex reg("");
	printMatches(str, reg);

	std::string str2 = "I picked the Pickle";
	std::regex reg2("(pick ([^] +)?)");
	printMatches(str2, reg2);

	std::string str3 = "cat, rat, mat, fat, pat";
	std::regex reg3("([crmfp]at))");
	std::string owlFood = regex_replace(str3, reg3, "Owl");
	std::cout << owlFood << "\n";
	printMatches(str3, reg3);

	std::regex reg4("([C-Fc-f] at)");
	printMatches(str3, reg4);

	std::regex reg5("([^Cr] at)");
	printMatches(str3, reg5);
	return 0;


	std::string str7 = "F.B.I. I.R.S CIA";
	std::regex reg7("([^] \..\..\.)");

	std::string str8 = "This is an multiline string that has many lines";

	std::regex reg8("([^] \..\..\.)");
	std::string noLBStr = std::regex_replace(str8, reg8, "");
	std::cout << noLBStr << "\n";

	std::string str9 = "12345";
	std::regex reg9("\\d");
	printMatches(str9, reg9);

	std::string str10 = "123 12345 123456 1234567";
	std::regex reg10("\\d {5,7}");
	printMatches(str10, reg10);

	std::string str11 = "412-867-5309";
	std::regex reg11("\\w{3}-\\w {3}-\\w{4}");
	printMatches(str11, reg11);

	std::string str12 = "Toshio Muramatsu";
	std::regex reg12("\\w\{2,20} \\s\\w{2,20}");
	printMatches(str12, reg12);

	std::string str13 = "a as ape bug";
	std::regex reg13(" a [a-z]+");
	printMatches(str13, reg13);

	std::string str14 = "db@aol.com m@.com @apple.com db@.com";
	std::regex reg14(" [\\w._%+-]{1,20}@[\\w.-]{2,20}.[A-Za-z]{2,3}+");
	printMatches(str14, reg14);

}
