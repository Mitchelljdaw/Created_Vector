// Author: Mitchell J Daw
// Assignment: Proj04
// Instructor: Dallas Harken
// Class: CS 1410 Section: 003 
// Date Written: 10/7/2016
// Description: Dynamically alocated memory and pointers
//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
#include "stdafx.h"
#include <string>
#include <iostream>
#include "MyVector.h"
#include "Driver.h"
    
using namespace std;

// the printV function
// used to test the copy constructor
// parameter: a MyVector object
void printV(MyVector);

ostream& operator<<(ostream& out, const MyVector& vector) {
	for (int i = 0; i < vector.size(); i++) {
		out << vector.at(i);
	}
	return out;
}

int main()
{
	cout << "\nCreating a vector Sam of size 4.";
	MyVector sam(4);

	cout << "\nPush 12 values into the vector.";
	for (int i = 0; i < 12; i++)
		sam.push_back(i);

	cout << "\nHere is sam: ";
	cout << sam;
	cout << "\n---------------\n";

	cout << "\nCreating a vector Joe of size 4.";
	MyVector joe(4);
	cout << "\nPush 6 values into the vector.";
	for (int i = 0; i < 6; i++)
		joe.push_back(i * 3);

	cout << "\nHere is joe: ";
	cout << joe;
	cout << "\n---------------\n";

	cout << "\nTest the overloaded assignment operator \"joe = sam\": ";
	joe = sam;

	cout << "\nHere is sam: ";
	cout << sam;
	cout << "\n---------------\n";

	cout << "\nHere is joe: ";
	cout << joe;
	cout << "\n---------------\n";

	// pass a copy of sam by value
	printV(sam);


	cout << endl;
	system("PAUSE");
	return 0;
}


void printV(MyVector v)
{
	cout << "\n--------------------\n";
	cout << "Printing a copy of a vector\n";
	cout << v;
}



