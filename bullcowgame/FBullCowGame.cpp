#include "FBullCowGame.h"

void FBullCowGame::Reset()
{
	return;
}

int FBullCowGame::GetMaxTries()
{
	return MyMaxTries;
}

bool FBullCowGame::CheckGuessValidity(std::string)
{
	return false;
}

int FBullCowGame::GetRemainingTries()
{
	MyRemainingTries--;
	return MyRemainingTries;
}

int FBullCowGame::GetIsogramLength()
{
	return 0;
}

bool FBullCowGame::QuitGame()
{
	return false;
}

bool FBullCowGame::IsGameWon()
{
	return false;
}
