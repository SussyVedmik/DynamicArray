#pragma once
#include <iostream>
#include <algorithm>
using namespace std;

class DynamicArray
{
	int * ptr; // ��������� �� �����. ������
	int size;  // ������ ������� 
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

	// ����������� ��������� ������:
	//void ReSize(int size);// ��������� ������� �������
	//void Sort();// ����������(����� �������� ����������)
	//int Search(int a); // ����� �������� � �������, ���������� ������ ���������� ��., ���� -1.
	//void Reverse(); // �������������� ������������������ ��������� � �������� �������, ������� 12345 -> 54321



};

