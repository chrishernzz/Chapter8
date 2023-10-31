//Name: Christian Hernandez
//Date: 10/30/2023
//subscription: CMPR131

//Credit: Christian Hernandez,Bryan Alarcon,Thanh Tran, Joe Bryant,Erik Santana, Saul Merino, Otoniel Torres Bernal, and John Kim

#include<iostream>
#include"input (1).h"
#include"Patient.h"
#include"Costco.h"
#include"WarGame.h"
using namespace std;

//prototype
int menuOption();
void challenge1();
void challenge2();
void challenge3();

int main()
{
	do {
		switch (menuOption()) {
		case 0: exit(1); break;
		case 1: challenge1(); break;
		case 2: challenge2(); break;
		case 3: challenge3(); break;
		default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
		}
		cout << "\n";
		system("pause");
	} while (true);

	return EXIT_SUCCESS;
}
//precondition: making a menu option
//postcondition: it will return an int (the choice of the menu)
int menuOption() {
	system("cls");
	cout << "\n\tCMPR131 Chapter 8: Applications using Queues by Christian Hernandez(10/31/2023)";
	cout << "\n\t" << string(100, char(205));
	cout << "\n\t\t1> Simulation of War (card game) using deque STL";
	cout << "\n\t\t2> Simulation of an emergency room (ER) using priority queue STL";
	cout << "\n\t\t3> Simulation of checkout lines at CostCo using multiple queues STL";
	cout << "\n\t" << string(100, char(205));
	cout << "\n\t\t0> Exit";
	cout << "\n\t" << string(100, char(205));
	//calling the input.h and we are inputting c1 from 0 through 3
	return inputInteger("\n\t\tOption: ", 0, 3);
}

//precondition: 
//postcondition: 
void challenge1() {
	WarGame menu;
	menu.menuInformation();

}
//precondition: going to call my Patient class
//postcondition: going to then call my mainMenuInformation function that will have all the information and the menus as well 
void challenge2() {
	Patient menu;
	menu.menuInformation();
}
//precondition: going to call my Costco class
//postcondition: going to then call my mainMenuInformation function that will have all the information and the menus as well 
void challenge3() {
	Costco menu;
	menu.menuInformation();
}
