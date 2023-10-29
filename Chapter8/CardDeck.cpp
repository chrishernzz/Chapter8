#include "CardDeck.h"

//precondition: going to call the default constructor class
//postcondition: going to then intialize the privates 
CardDeck::CardDeck() : suit(" "), value(0) {}

//precondition: going to get the suit 
//postcondition: going to return the private suit
string CardDeck::getCardSuit() const{
	return suit;
}
//precondition: going to get the new suit
//postcondition: going to set the private suit with the new suit member
void CardDeck::setCardSuit(string newSuit){
	suit = newSuit;
}

//precondition: going to get the value 
//postcondition: going to return the private value
int CardDeck::getCardValue() const{
	return value;
}
//precondition: going to get the new value
//postcondition: going to set the private value with the new value member
void CardDeck::setCardValue(int newCardValue){
	value = newCardValue;
}


