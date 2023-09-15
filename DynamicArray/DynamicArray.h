#pragma once
#include <iostream>
#include <algorithm>
using namespace std;

class DynamicArray
{
	int * ptr; // указатель на динам. массив
	int size;  // размер массива 
public:
	DynamicArray();
	DynamicArray(int);
	DynamicArray(const DynamicArray&); 
	~DynamicArray();
	void Input();
	void Output()const;
	int * GetPointer()const;
	int GetSize()const;
	void Reverse();
	void Sort(); 
	int Search(int a);
	void ReSize(int size);

	// реилизовать следующие методы:
	//void ReSize(int size);// изменение размера массива
	//void Sort();// сортировка(любой алгоритм сортировки)
	//int Search(int a); // поиск элемента в массиве, возвращает индекс наиденного эл., либо -1.
	//void Reverse(); // перезаписывает последовательность элементов в обратном порядке, напрмер 12345 -> 54321



};

