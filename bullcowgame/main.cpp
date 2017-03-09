#include <iostream>
#include <string> 

using namespace std;
void PrintIntro();
string GetGuess();
void PrintGuessMessage(string);
void PlayGame();

int main() {
	
	// Print welcome message 
	PrintIntro();
	
	// Starts the gane 
	PlayGame();
	
	return 0; // Exits game program.
}


void PrintIntro() {

	// Introduces the game 
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, a fun word game." << endl;
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I am thinking of?" << endl;
	return;
}

string GetGuess() {
	// make a variable to hold the value in the input strem.
	string Guess = "";

	// Asks the user for their guess
	cout << endl;
	cout << "Please enter a guess: ";
	getline(cin, Guess);
	return Guess;
}

void PrintGuessMessage(string Message) {
	// Returns player guess to console
	cout << "Your guess word: " << Message << endl;	
}

void PlayGame() {	
	// Sets the number of guesses the player gets
	constexpr int NUMBER_OF_TURNS = 5;

	// Loop through by alotted turns and get and print guess to console
	for (int count = 1; count <= NUMBER_OF_TURNS; count++) {
		PrintGuessMessage(GetGuess());
	}
	cout << endl;
}