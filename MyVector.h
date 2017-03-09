#pragma once

class MyVector
{
private:
	int const SIZE = 0;
	int const MIN_CAP = 2;
	int _size;
	int _capacity;
	int* _data;
public:

	
	MyVector();
	//A parameterized constructor that creates a vector of capacity n
	MyVector(int n);



	//function name: size
	//Purpose: returns the size of your vector.
	int size() const;

	//Function name:capacity
	//Pirpose: returns the capacity of the vector
	int capacity() const;

	//Function Name:clear
	//Purpose: deletes all of the elements from the vector and resets its size to zero and its capacity to two.
	void clear();

	//Function Name:push_back
	//Purpose: adds n to the end of a vector if too large vector must grow. gro should double current capacity
	//Parameters:One Int
	void push_back(int n);

	//Function Name:at
	//Purpose: returns the value of the element at position n in the vector. 
	//Parameters:One Int
	int at(int n) const;

	//Function Name:MyVector
	//Purpose:Copy one class object
	//Parameters:Class object
	MyVector(const  MyVector&);

	// Overloaded assignment operator
	// Purpose: to do assignment from one vector to another
	// Parameters: a MyVector object
	// Returns: A MyVector object
const MyVector& operator=(const  MyVector&);

	//void freeVector();

	//void copy(const MyVector& b);
	
	//Destructor
	~MyVector();
};

