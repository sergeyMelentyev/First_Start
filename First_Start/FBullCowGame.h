// Created by Melentyev 25.07.16

#pragma once
#include <string>

using FString = std::string;									// unreal standard api
using int32 = int;

struct BullCowCount {
	int32 Bull;
	int32 Cow;
};

class FBullCowGame {
public:
	FBullCowGame();												// constructor declaration
	BullCowCount SubmitGuess(FString);
	void Reset();
	int32 GetMaxTries();
	int32 GetCurrentTry();
	bool IsGameWon();
	bool CheckGuessValidity(FString);

private:
	int32 MyCurrentTry;
	int32 MyMaxTries;
};
