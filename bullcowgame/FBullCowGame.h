#pragma once
#include <string>

class FBullCowGame {

public:
	void Reset(); // TODO write a more complete return.
	int GetMaxTries();
	bool CheckGuessValidity(std::string); // TODO write a more complete return.
	int GetRemainingTries();
	int GetIsogramLength();
	bool QuitGame();
	bool IsGameWon();

// Just focus on the public section temporarily
private:
	int MyRemainingTries = 5;
	int MyMaxTries = 5;
};