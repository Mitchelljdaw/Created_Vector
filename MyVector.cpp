
#include "stdafx.h"
#include "MyVector.h"
#include <iostream>
#include <string>
using namespace std;


MyVector::MyVector()
{
	_capacity = MIN_CAP; //Sets capacity at two
	_data = new int[_capacity]; //creates new vector and sets default size at two
	_size = SIZE; //Sets size at zero.
}

MyVector::MyVector(int n) {
	_capacity = n; // sets capacity to n
	_data = new int[_capacity]; //Creates vector with capacity of n
	_size = SIZE; //starts size at zero
}

int MyVector::size() const {
	return _size;
}

int MyVector::capacity() const {
	return _capacity;
}

void MyVector::clear() {
	delete[]_data;
	_size = SIZE;
	_capacity = MIN_CAP;

}

void MyVector::push_back(int n) {
	if (_size < _capacity) {
		_data[_size] = n;
		_size++;
	}
	else if (_size == _capacity) {
		int* _vTemp = new int[_capacity * MIN_CAP];//Dynamically allocate a new array of integers 
		_capacity = _capacity * MIN_CAP;//Change capacity to be the capacity of the new array.
		for (int i = 0; i < _size; i++) {
			_vTemp[i] = _data[i];//Copy all of the numbers from the first array into the second
		}
		_data[_size] = n;//Add the new element at the next open slot in the new array.
		_size++;//Increment _size
		_data = _vTemp; //Point to new array;
		delete[] _data; //Delete Old Array;
	}
}

int MyVector::at(int n) const
{
	if (n < 0) {
		throw n;
	}
	return n;
}


MyVector::~MyVector()
{
	if (_data != nullptr) //Checks to see if the _data pointer is at null.
	{
		delete[] _data; //Deletes the data from this memory location
		_data = nullptr; //Sets the pointer _data to null
	}
}


//Function Name:MyVector
//Purpose:Copies data from vector object to new vector object
//Parameters:Class object
MyVector::MyVector(const  MyVector& b) {
	_size = b._size;
	_data = new int[_size];
	for (int i = 0; i < _size; i++) {
		this->_data[i] = b._data[i];
	}
}

const MyVector& MyVector::operator=(const  MyVector& rho) {
	
	// test for self assignment
	if (this != &rho) {
		// clean up array in left hand object
		if (_data != nullptr) //Checks to see if the _data pointer is at null.
		{
			delete[] _data; //Deletes the data from this memory location
			_data = nullptr; //Sets the pointer _data to null
		}
		// create a new array big enough to hold right hand object's data
		_size = rho._size;
		_data = new int[_size];
		// copy the data
		for (int i = 0; i < _size; i++) {
			this->_data[i] = rho._data[i];
		}
	}
	//return this object
	return *this;		
}

//void MyVector::freeVector() {
//
//}
//
//void MyVector::copy(const MyVector& b) {
//
//}
