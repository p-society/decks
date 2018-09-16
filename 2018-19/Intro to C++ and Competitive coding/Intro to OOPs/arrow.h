/* This is an integer based library containing the class "arrow" with the following features:

1. push_back();
2. clear();
3. size();
4. empty();
5. at();
6. back();
7. front();

*/
#include <iostream>

using namespace std;

class arrow {
	
private:
	// This variable stores the length of the array "arr".
	int length;

	// This is a dynamic array which we use to simulate vector.
	int *arr;

public:
	// Default constructor.
	arrow() {
		length = 0;
	}

	/*
	 This function is used to append an integer to our container.
	 @param - int
	 @return - void
	*/
	void push_back(int i);

	/*
	 This function is used to clear the arrow container.
	 @param - void
	 @return - void
	*/
	void clear() {
		if(length)
			delete[] arr;

		length = 0;
	}

	/*
	 This function is used to get the number of elements currently stored in our container.
	 @param - void
	 @return - int
	*/
	int size() {
		return length;
	}

	/*
	 This function is used to tell if our container is empty.
	 @param - void
	 @return - bool
	*/
	bool empty() {
		if(length)
			return false;

		return true;
	}

	/*
	 This function is used to return a value at the queried position (if valid).
	 @param - int
	 @return - int
	*/
	int at(int i) {
		if(i >= length) {
			cout<<"Out of bounds"<<endl;
			return -1;
		}

		return arr[i];
	}

	/*
	 This function returns the last value of our container (if valid).
	 @param - void
	 @return - int
	*/
	int back() {
		if(length)
			return arr[length - 1];
		else
			return -1;
	}

	/*
	 This function returns the first value of our container (if valid).
	 @param - void
	 @return - int
	*/
	int front() {
		if(length)
			return arr[0];
		else
			return -1;
	}
};

void arrow::push_back(int i) {
	int *temp = new int[length + 1];

	for(int i = 0; i < length; i++) {
		temp[i] = arr[i];
	}

	temp[length] = i;

	if(length)
		delete[] arr;

	length++;

	arr = new int[length];

	for(int i = 0; i < length; i++) {
		arr[i] = temp[i];
	}

	delete[] temp;
}
