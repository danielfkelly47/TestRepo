#include <iostream>
#include <string>

using namespace std;

//Forward declarations
string EncodeMessage(string message, int cipher);
string DecodeMessage(string message, int cipher);

// Version Char of the encoder
string EncodeCharCipher(string message, int seed);
string DecodeCharCipher(string message, int seed);

int main10() {
	string uncodedMessage, codedMessage, decodedMessage;
	int k;
	k = 2;
}