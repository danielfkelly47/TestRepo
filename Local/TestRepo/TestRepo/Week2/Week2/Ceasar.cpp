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
	codedMessage = "";

	std::cout << "Please enter messgae to encode";
	getline(cin, uncodedMessage);

	std::cout << "Shift By";
	std::cin >> k;
	codedMessage = EncodeMessage(uncodedMessage,k);
	cout << "Coded message is: " << codedMessage << endl;

	decodedMessage = DecodeMessage(codedMessage, k);
	cout << "Decoded message is: " << decodedMessage << endl;

	cout << endl; //Just newline

	codedMessage = EncodeCharCipher(uncodedMessage, k);
	cout << "Coded message is: " << codedMessage << endl;

	decodedMessage = DecodeCharCipher(codedMessage, k);
	cout << "Decoded message is: " << decodedMessage << endl;

	// This might work as well - solution discussed in class
	// 29-09-2020 (LAB SESSION)
	/*
	// Ask user for unencrypted message
	// Ask user for encryption key
	string message = "";
	int key = 0;

	cout << "Enter unencrypted message: ";
	cin >> message;

	cout << "Enter key: ";
	cin >> key;

	// Loop the message

	string encryptMsg = "";
	string tmp = "";
	int index = 0;
	int a = 0;

	for (int i = 0; i < message.length(); i++) {
		if (message[i] == '-') {
			tmp = "-";
		}
		else {
			// Add the encryption
			// Consider the number of alphabets -- X
			index = (int)message[i] + key;

			if (index > 122) {
				a = (index - 122) % 26;
				index = a + 96;
			}
			else if (index > 90 && index < 97) {
				a = (index - 90) % 26;
				index = a + 64;
			}

			tmp = (char)index;
		}

		// replace the string
		encryptMsg.append(tmp);
	}

	// generate output
	cout << encryptMsg << endl;
	*/

	return 0;
}


string EncodeMessage(string message, int cipher) {

	string codedMessage, c;
	int index = 0;

	//Create a string iterator for the coded message
	string::const_iterator iterator{ message.begin() };

	//Now iterate through the message
	while (iterator != message.end()) {

		//Get the ASCII value
		int asciiValue = (int)message[index];
		//Determine if it is an A-Z or a-z characther
		if (asciiValue >= 65 && asciiValue <= 90) {
			//We have an A=Z so shift by
			asciiValue += cipher;
			//If we have gone past Z loop back to A
			if (asciiValue > 90)
				asciiValue -= 26;
			c = (char)asciiValue;
			codedMessage.append(c);

		}
		//Determine if it is an A-Z or a-z characther
		else if (asciiValue >= 97 && asciiValue <= 122) {
			//We have an A=Z so shift by
			asciiValue += cipher;
			//If we have gone past z loop back to a
			if (asciiValue > 122)
				asciiValue -= 26;
			c = (char)asciiValue;
			codedMessage.append(c);

		}
		else {
			//We must have a number or symbol
			c = message[index];
			codedMessage.append(c);
		}



		++iterator; //advance iterator to the next character
		++index;
	}

	return codedMessage;
}

string DecodeMessage(string message, int cipher) {

	string codedMessage, c;
	int index;

	//Using a for loop this time just to shake things up
	for (index = 0; index <= message.length() - 1; index++) {

		//Get the ASCII value
		int asciiValue = (int)message[index];
		//Determine if it is an A-Z or a-z characther
		if (asciiValue >= 65 && asciiValue <= 90) {
			//We have an A=Z so shift by
			asciiValue -= cipher;
			//If we have gone past A go forward to Z
			if (asciiValue < 65)
				asciiValue += 26;
			c = (char)asciiValue;
			codedMessage.append(c);

		}
		//Determine if it is an A-Z or a-z characther
		else if (asciiValue >= 97 && asciiValue <= 122) {
			//We have an A=Z so shift by
			asciiValue -= cipher;
			//If we have gone past a go forward to a
			if (asciiValue < 97)
				asciiValue += 26;
			c = (char)asciiValue;
			codedMessage.append(c);

		}
		else {
			//We must have a number or symbol
			c = message[index];
			codedMessage.append(c);
		}

	}

	return codedMessage;
}

// Char based iteration based on seed
// Encoder function
string EncodeCharCipher(string message, int seed) {
	string codedMsg, codedStr;
	int keyValue;

	for (int i = 0; i < message.length(); i++) {
		// Only code alphabets
		char postChar = message.at(i);
		if (int(postChar) >= 65 && int(postChar) <= 90) {
			if (int(postChar) + seed <= 90)
				keyValue = int(postChar) + seed;
			else
				keyValue = 64 + (int(postChar) + seed - 90);
			codedStr = char(keyValue);
		}
		else if (int(postChar) >= 97 && int(postChar) <= 122) {
			if (int(postChar) + seed <= 122)
				keyValue = int(postChar) + seed;
			else
				keyValue = 96 + (int(postChar) + seed - 122);
			codedStr = char(keyValue);
		}
		else {
			codedStr = postChar;
		}
		codedMsg.append(codedStr);
	}

	return codedMsg;
}

// Decoder function
// This would be reversed
string DecodeCharCipher(string message, int seed) {
	string codedMsg, codedStr;
	int keyValue;

	for (int i = 0; i < message.length(); i++) {
		// Only code alphabets
		char postChar = message.at(i);
		if (int(postChar) >= 65 && int(postChar) <= 90) {
			if (int(postChar) - seed <= 65)
				keyValue = 90 - (64 - (int(postChar) - seed));
			else
				keyValue = int(postChar) - seed;
			codedStr = char(keyValue);
		}
		else if (int(postChar) >= 97 && int(postChar) <= 122) {
			if (int(postChar) - seed <= 97)
				keyValue = 122 - (96 - (int(postChar) - seed));
			else
				keyValue = int(postChar) - seed;
			codedStr = char(keyValue);
		}
		else {
			codedStr = postChar;
		}
		codedMsg.append(codedStr);
	}

	return codedMsg;
}
