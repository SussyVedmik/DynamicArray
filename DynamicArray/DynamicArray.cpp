#include "DynamicArray.h"
#include<Windows.h>
#include <algorithm>

DynamicArray::DynamicArray():ptr(nullptr),size(0)
{}
DynamicArray::DynamicArray(int S)
{
	cout << "Construct by 1 param\n";
	size = S;
	ptr = new int[S] {0};
}

DynamicArray::DynamicArray(const DynamicArray & a)// copy constructor
{
	cout << "Copy construct\n";
	size = a.size;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		ptr[i] = a.ptr[i];
	}
}
DynamicArray::~DynamicArray()
{
	cout << "Destruct\n";
	delete[] ptr;   
	//Sleep(1000);
}
void DynamicArray::Input()
{
	for (int i = 0; i < size; i++)
	{
		ptr[i] = rand() % 20;
	}
}
void DynamicArray::Output()const
{
	for (int i = 0; i < size; i++)
	{
		cout<<ptr[i] <<"\t";
	}
	cout << "\n---------------------------------\n";
}

void DynamicArray::Reverse()
{
	int* temp = new int[size];
	for (int i = 0; i < size; i++)
		temp[i] = ptr[size - 1 - i];
	for (int i = 0; i < size; i++)
		ptr[i] = temp[i];
	delete[] temp;
}

void DynamicArray::Sort()
{
	std::sort(ptr, ptr + size);
}

int DynamicArray::Search(int a)
{
	for (int i = 0; i < size; i++)
	{
		if (ptr[i] == a)
			return i; 
	}
	return -1; 
}

void DynamicArray::ReSize(int newSize)
{
	int* newPtr = new int[newSize];
	for (int i = 0; i < min(size, newSize); i++)
		newPtr[i] = ptr[i];
	delete[] ptr;
	ptr = newPtr;
	size = newSize;
}

int * DynamicArray::GetPointer() const
{
	return ptr;
}
int DynamicArray::GetSize()const
{
	return size;
}