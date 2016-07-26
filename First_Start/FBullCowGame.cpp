// Created by Melentyev 25.07.16

#include "FBullCowGame.h"

FBullCowGame::FBullCowGame() {									// constructor definition
	Reset();
}

FBullCowCount FBullCowGame::SubmitGuess(FString) {
	MyCurrentTry++;
	
	FBullCowCount BullCowCount;									// initialize a struct
	BullCowCount.Bull = 0;
	BullCowCount.Cow = 0;

	return BullCowCount;
}

void FBullCowGame::Reset(){
	const FString HIDDEN_WORD = "cpp";
	MyHiddenWord = HIDDEN_WORD;
	MyCurrentTry = 1;
	MyMaxTries = 5;
}

int32 FBullCowGame::GetMaxTries(){
	return 0;
}

int32 FBullCowGame::GetCurrentTry(){
	return 0;
}

bool FBullCowGame::IsGameWon(){
	return false;
}

EWordStatus FBullCowGame::CheckGuessValidity(FString) const{
	return EWordStatus::OK;
}

bool FBullCowGame::IsIsogram(FString Word) const {
	if (Word.length() <= 1) { return true;  }
	TMap<char, bool> LetterSeen;									// initialize a map
	for (char Letter : Word) {										// for-in loop
		Letter = tolower(Letter);									// convert to lower case
		if (LetterSeen[Letter]) {
			return false;
		}
		else {
			LetterSeen[Letter] = true;								// add value to the map
		}
	}
}
