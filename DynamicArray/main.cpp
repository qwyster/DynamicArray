// DynamicArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "DynArray.h"
#include<iostream>

int main()
{
	DynArray da;
	da[10] = 10;
	for (int i = 0; i < da.size(); i++)
		std::cout << da[i] << " ";
	std::cout << std::endl;
	system("pause");
    return 0;
}

