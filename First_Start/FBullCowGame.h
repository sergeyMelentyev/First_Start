// Created by Melentyev 25.07.16

#pragma once
#include <string>
#include <map>
#define TMap std::map											// unreal standard api

using FString = std::string;									// unreal standard api
using int32 = int;

struct FBullCowCount {											// struct declaration
	int32 Bull;
	int32 Cow;
};

enum EWordStatus {												// enum declaration with global scope variables
	OK,
	Not_Isogram
};
enum class ECancelStatus {										// enum declaration with local scope variables
	OK,
	Not_Isograme
};

class FBullCowGame {
public:
	FBullCowGame();												// constructor declaration
	FBullCowCount SubmitGuess(FString);
	void Reset();
	int32 GetMaxTries();
	int32 GetCurrentTry();
	bool IsGameWon();
	EWordStatus CheckGuessValidity(FString) const;

private:
	int32 MyCurrentTry;
	int32 MyMaxTries;
	FString MyHiddenWord;

	bool IsIsogram(FString) const;
};
