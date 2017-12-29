/*Edwin Y. Melendez Lopez #89139
Raudo E. Columna Manon  #86724

CECS 3212 Sec. 20
15 de agosto de 2017
Profesora Claudia Talavera

Pag. 29 Cap 1 Exercise 4 Classes and Dynamic Memory
Data Abstraction and Problem Solving with C++ Authors: Walls and Mirrors

Using Classes and Dynamic Memory only.
*/

// Ring.h

#pragma once

#include<iostream>
#include<cstring> // Needed for strlen and strcpy

using namespace::std;

class Ring
{
public:
	Ring(); // Constructor
	Ring(int *ringArray, int *ringFront, int *ringRear); // Parameter Constructor
	//Ring(Ring &aRing); // Copy Constructor
	~Ring(); // Destructor

	// Setters
	void setRingArray(int aRingArray);
	void setRingFront(int aRingFront);
	void setRingRear(int aRingRear);

	int *getRingArray() const;
	int *getRingFront() const;
	int *getRingRear() const;

	// Functon for inserting, deleting, advance and print the data.
	void insert(int data);
	void deletion();
	void advance();
	void print();


private:

	// Array of size of 5
	int *ringArray[5];

	// Ring Front
	int *ringFront;

	// Ring Rear
	int *ringRear;

};

