//Name: Christian Hernandez
//Date: 10/16/2023
//subscription: CMPR131

#include<iostream>
#include"input (1).h"
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
	//SimpleCalculator menu;
	//menu.calculatorMenu();
}
//precondition: 
//postcondition: 
void challenge2() {
	//TranslationArithmetic menu;
	//menu.menuInformation();
}
//precondition:
//postcondition: 
void challenge3() {
	//n_Queens menu;
	//menu.n_QueensMenu();
}
