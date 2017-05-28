#include <iostream>
#include <string> 
#include "FBullCowGame.h"

void PrintIntro();
std::string GetGuess();
void PrintGuessMessage(std::string);
void PlayGame();
bool AskToPLayAgain();
FBullCowGame BCGame;
const int NUMBER_OF_TURNS = 5;


int main() {	

	bool bPlayAgain = false;

	do {
		// Print welcome message 
		PrintIntro();

		// Starts the gane 
		PlayGame();

		// Asks player if they choose to play again
		bPlayAgain = AskToPLayAgain();

	} while (bPlayAgain);	

	return 0; // Exits game program.
}


void PrintIntro() {

	// Introduces the game 
	constexpr int WORD_LENGTH = 5;
	std::cout << "Welcome to Bulls and Cows, a fun word game." << std::endl;
	std::cout << "Can you guess the " << WORD_LENGTH;
	std::cout << " letter isogram I am thinking of?" << std::endl;
	return;
}

std::string GetGuess() {
	// make a variable to hold the value in the input strem.
	std::string Guess = "";

	// Asks the user for their guess
	std::cout << std::endl;
	std::cout << "Please enter a guess: ";
	std::getline(std::cin, Guess);
	return Guess;
}

void PrintGuessMessage(std::string Message) {
	// Returns player guess to console
	std::cout << "Your guess word: " << Message << std::endl;	
}

void PlayGame() {	

	// Sets the number of guesses the player gets	
	int Max_turns = BCGame.GetMaxTries();
	std::cout << "Your number of guesses: " << Max_turns << std::endl;
	
	// Loop through by alotted turns and get and print guess to console
	for (int count = 1; count <= NUMBER_OF_TURNS; count++) {
		PrintGuessMessage(GetGuess());
		int Tries_left = BCGame.GetRemainingTries();
		std::cout << "Your number of remaining guesses: " << Tries_left << std::endl;		
	}		
}

bool AskToPLayAgain() {

	std::string Response = "";
	// Gets player response and inputs from user entry	
	std::cout << "\nDo you want to play again? (y/n) ";		
	std::getline(std::cin, Response);	

	// Checks the first char in the Response std::string and then returns true or false if not found		
	if (Response[0] == 'y' || Response[0] == 'Y') {

		system("cls");
		return true;
	}
	else {
		std::cout << "\nNow exiting game.\n";
		return false;
	}	
}
