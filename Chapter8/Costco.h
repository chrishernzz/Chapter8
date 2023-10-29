#pragma once
#include<iostream>
#include<queue>
#include<string>
#include<chrono>
#include<thread>
#include<vector>
#include<algorithm>
using namespace std;

//input (1) header files inputs validation
int inputInteger(string prompt, int startRange, int endRange);

//precondition: going to create a class called Patient and gets the information
//postcondition: going to have privates, in public are creating defualt constructor, getters and setters, amd member functions
class Costco{
private:
	int time;
	int registers;
	int served;
public:
	//defualt constructor
	Costco();

	//getters(accesors)
	int getTime() const;
	int getRegisters() const;
	int getServed() const;
	
	//setters(mutators)
	void setTime(int newTime);
	void setRegisters(int newRegisters);
	void setServed(int newServed);
	
	void menuInformation();
	void simulateLine();
	void displayCarts(queue<int> line, int& chance);
	int longestLine(queue<int>& line1, queue<int>& line2, queue<int>& line3, queue<int>& line4, queue<int>& line5, queue<int>& line6, queue<int>& line7, queue<int>& line8, queue<int>& line9, queue<int>& line10, int size);
};

