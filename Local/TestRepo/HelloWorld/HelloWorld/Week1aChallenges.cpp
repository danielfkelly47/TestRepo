#include <iostream>
#include <string>
#include <random>

float GenerateRandomNumber();

int main(int argc, const char* argv[]) {
	int goal{ 0 };
	int num_games{ 0 };
	int cash{ 0 };
	int stake{ 0 };
	int bets{ 0 };
	int wins{ 0 };

	char playAgain{ 'y' };
	while (playAgain)
	{
		num_games++;

		std::cout << "Please enter the players  intial cash";
		std::cin >> goal;
		std::cout << "\n Game:" << num_games << std::endl;

		//Task 1
		while (cash > 0 && cash < goal)
		{
			bets++;

			stake = 1;

			if (GenerateRandomNumber() < 0.5)
			{
				cash += stake;

			}
			else
			{
				cash -= stake;
			}

			std::cout << "cash" << cash << std::endl;
		}
		if (cash == goal)
		{
			wins++;

			std::cout << "Do you  want to play again Y/N:";
			std::cin >> playAgain;

			std::cout << std::endl;
		}
		std::cout << "The total number of bets is:" << bets << "for" << num_games << "Games";
		std::cout << "Total Wins" << wins;
		std::cout << "Precentage of" << (100 * wins / num_games) << "wins" << std::endl;

		return 0;
	}



}

float GenerateRandomNumber() {
	std::random_device rd;

	std::mt19937 gen(rd());


	std::uniform_real_distribution<> dis(0, 1);

	float outcome = dis(gen);
	std::cout << "Outcome" << outcome;

	return outcome;

}
// Problem Of Points
int GenerateThrow();

int main(int argc, const char* argv[]) {
	int playerOneScore{ 12 }, playerTwoScore{ 12 };
	bool winner{ 0 };
	int score{ 0 }, numberThrows{ 0 };

	while (!winner)
	{
		score = 0;
		numberThrows++;
		score = GenerateThrow() + GenerateThrow() + GenerateThrow();
		std::cout << "Player one throws a" << score << std::endl;
		if (score == 14)
		{
			playerOneScore++;
			playerTwoScore--;

		}
		numberThrows++;
		score = GenerateThrow() + GenerateThrow() + GenerateThrow();
		std::cout << "Player two throws a" << score << std::endl;
		if (score == 11)
		{
			playerOneScore++;
			playerTwoScore--;

		}
		std::cout << "Scores on the doors are: " << "\tPlayer one: " << playerOneScore << "\tPlayer two:" << playerTwoScore << std::endl;

		if (playerOneScore == 0 || playerTwoScore == 0)
		{
			winner = 1;
			std::cout << "\n\nThe total number of throws was: " << numberThrows << "\nWOW that's a lot!" << std::endl;
		}
	}
	return 0;


}

int GenerateThrow() {
	std::random_device rd;

	std::mt19937 gen(rd());


	std::uniform_real_distribution<> dis(1, 6);
	return dis(gen);
}
//Collatz Conjecture
int CalculateCollatz(int n);

int steps{ -1 };
int main() {
	int userNumber{ 0 };

	std::cout << "Please enter a natural number to begin: ";
	std::cin >> userNumber;

	CalculateCollatz(userNumber);

	std::cout << std::endl;

	std::cout << "steps" << steps << std::endl;
	return 0;
}
int main() {
	int number{ 0 };
	int num1, num2, num3, num4, num5;

	std::cout << "Please enter a five- digit number: ";
	std::cin >> number;

	int numCheat = number;

	num1 = number / 10000;
	std::cout << number / 10000 << "";
	number = number % 10000;

	num2 = number / 1000;
	std::cout << number / 1000 << "";
	number = number % 1000;

	num3 = number / 100;
	std::cout << number / 100 << "";
	number = number % 100;

	num4 = number / 10;
	std::cout << number / 10 << "";
	number = number % 10;

	num5 = number;

	std::cout << number << std::endl;

	std::cout << num5 << " " << num4 << " " << num3 << " " << num2 << " " << num1 << " " << std::endl;

	std::string nstr = std::to_string(numCheat);

	for (int i = 4; i >= 0; i--) {
		std::cout << nstr[i] << "   "; // nstr[0] -> 1
	}

}
int main(int argc, const char* argv[]) {
	int size = 9;

	for (int i = 1; i < size; i += 2)

	{
		for (int k = size; k >= i; k -= 2)
		{
			std::cout << " ";
		}
		for (int j = 1; j <= i; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	for (int i = 1; i <= size; i += 2) {
		for (int k = 1; k <= i; k += 2) {
			std::cout << " ";
		}
		for (int j = size; j >= i; j--) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	return 0;
}
