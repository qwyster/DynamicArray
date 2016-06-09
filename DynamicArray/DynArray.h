#pragma once
class DynArray
{
private:
	int* pa;
	int length;
	int nextIndex;
	void doubleSizeArray();	// double the size of the array
public:
	const static int MAX_LENGTH = 10;
	DynArray();
	~DynArray();
	int& operator[](int index);	// overload the [] operator so that an element can be used both as a left-side and a right-side value
	void add(int value);
	int size() { return length; };
};

