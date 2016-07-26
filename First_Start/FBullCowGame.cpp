// Created by Melentyev 25.07.16

#include "FBullCowGame.h"

FBullCowGame::FBullCowGame() {									// constructor definition
	Reset();
}

BullCowCount FBullCowGame::SubmitGuess(FString) {
	return 0;
}

void FBullCowGame::Reset(){
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

bool FBullCowGame::CheckGuessValidity(FString) {
	return false;
}