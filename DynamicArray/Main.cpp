#pragma once
#include "DynamicArray.h"
#include <algorithm>

DynamicArray GetObj() //возврат по значению
{
	DynamicArray obj(3);
	obj.Input();

	return obj;
}
void main()
{
	DynamicArray a(5); // constructor 1 param
	a.Input();
	a.Output();
	DynamicArray b = a; // copy constructor
	b.Output();

	DynamicArray rezult = GetObj();
	rezult.Output();

	DynamicArray r(5);
	r.Input(); 
	r.Output(); 
	r.Sort(); 
	r.Output(); 
	int index = r.Search(3); 
	if (index != -1)
	{
		cout << "3-d element found" << index << endl;
	}
	else
	{
		cout << "3-d element not found" << endl;
	}	
	r.Reverse(); 
	r.Output(); 

	system("pause");
}