#pragma once
#include<iostream>
#include <queue>
#include "CardDeck.h"
#include <algorithm>
#include <random>
using namespace std;

//input (1) header files inputs validation
char inputChar(string prompt, string lookup);
char inputChar(string prompt, char yes, char no);
int inputInteger(string prompt, bool posNeg);
int inputInteger(string prompt, int startRange, int endRange);
double inputDouble(string prompt);

//precondition:
//postcondition: 
class WarGame{
private:
	queue <CardDeck> p1Cards;
	queue <CardDeck> p2Cards;
	queue <CardDeck> warCards;
	int numCardsPerSuite;
	vector <CardDeck> deck;
public:
	//defualt constructor 
	WarGame();
	WarGame(int newNumCardsPerSuite);

	//member functions
	void fillDeck();
	void randomizeDeck();
	void distributeCards();
	void playGame();

	//memnber function to get the whole menu
	void menuInformation();
};

