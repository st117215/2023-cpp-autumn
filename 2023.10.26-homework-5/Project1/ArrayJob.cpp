#include "ArrayJob.h"
#include<ctime>
#include<cstdlib>
#include<iostream>

void printMenu()
{
	std::cout << "0 - Exit" << std::endl;
	std::cout << "1 - Print array" << std::endl;
	std::cout << "2 - Append element to array" << std::endl;
	std::cout << "3 - Extract element from array" << std::endl;
	std::cout << "4 - Sort the array in ascending order" << std::endl;
	std::cout << "5 - Turn around array" << std::endl;
	std::cout << "6 - Swap the maximum and minimum elements of the array" << std::endl;
	std::cout << "7 - Remove all duplicates from the array" << std::endl;
}
int* initArray(int len)
{
	srand(time(0));
	int* res = new int[len] { 0 };
	int min = -99;
	int max = 99;
	for (int i = 0; i < len - 1; ++i)
	{
		res[i] = rand() % (max - min + 1) + min;;
	}
	return res;
}
void printArray(int* a, int len)
{
	if (a == nullptr)
	{
		std::cout << "EMPTY";
	}
	else
	{
		for (int i = 0; i < len; ++i)
		{
			std::cout << a[i] << " ";
		}
	}
	std::cout << std::endl;
}
void expandArray(int*& a, int& len)
{
	int* newA = new int[len + 1] { 0 };
	if (a != nullptr)
	{
		for (int i = 0; i < len; ++i)
		{
			newA[i] = a[i];
		}
		delete[] a;
	}
	a = newA;
	++len;
}

void addElement(int*& a, int& len, int element)
{
	expandArray(a, len);
	a[len - 1] = element;
}

void contractArray(int*& a, int& len)
{
	if (a != nullptr)
	{
		int* newA = new int[len - 1];
		for (int i = 0; i < len - 1; ++i)
		{
			newA[i] = a[i];
		}
		delete[] a;
		a = newA;
		--len;
	}
}

bool indexValid(int index, int len)
{
	return (index >= 0 && index < len);
}

int extractElement(int*& a, int& len, int index)
{
	int res = -1;
	if (indexValid(index, len))
	{
		res = a[index];
		for (int i = index; i < len - 1; ++i)
		{
			a[i] = a[i + 1];
		}
		contractArray(a, len);
	}
	return res;
}

void printReverseArray(int*& a, int& len)
{
	if (a == nullptr)
	{
		std::cout << "EMPTY";
	}
	else
	{
		for (int i = 0; i < len; ++i)
		{
			std::cout << a[len - i - 1] << " ";
		}
	}
	std::cout << std::endl;
}
void sortArray(int*& a, int& len) {
	if (a == nullptr)
	{
		std::cout << "EMPTY";
	}
	else
	{
		int b = 0;
		for (int i = 0; i < len; ++i) {
			for (int j = 0; j < (len - 1); j++) {
				if (a[j] > a[j + 1]) {
					b = a[j];
					a[j] = a[j + 1];
					a[j + 1] = b;
				}
			}
		}
	}

}
void changeArrayMnMx(int*& a, int& len) {
	if (a == nullptr)
	{
		std::cout << "EMPTY";
	}
	else
	{
		int mn = 0;
		int mx = 0;
		int x = 0;
		int y = 0;
		for (int i = 0; i < len; ++i) {
			if (a[i] > mx) {
				mx = i;
				mn = i;
			}
		}
		for (int i = 0; i < len; ++i) {
			if (a[i] < a[mn]) {
				mn = i;
			}
		}
		x = a[mx];
		y = a[mn];
		a[mn] = x;
		a[mx] = y;
	}

}
int* extractAllDuplicates(int*& a, int& len) {
	if (a == nullptr)
	{
		std::cout << "EMPTY";
	}
	else
	{
		int b = 0;
		for (int i = 0; i < len; ++i) {
			for (int j = 0; j < (len - 1); j++) {
				if (a[j] > a[j + 1]) {
					b = a[j];
					a[j] = a[j + 1];
					a[j + 1] = b;
				}
			}
		}
		int k = 0;
		for (int i = 0; i < len - 1;i++) {
			if (a[i] != a[i + 1]) {
				k++;
			}
		}
		int* c = new int[k + 1] {0};
		int t = k + 1;
		k = 0;
		for (int i = 0; i < len - 1;i++) {
			if (a[i] != a[i + 1]) {
				c[k] = a[i];
				k++;
				if ((t - k) == 1) {
					c[t - 1] = a[i + 1];
				}
			}
		}
		return c;
	}
}
int sizeOfArray(int*& a, int& len) {
	if (a == nullptr)
	{
		std::cout << "EMPTY";
	}
	else
	{
		int b = 0;
		for (int i = 0; i < len; ++i) {
			for (int j = 0; j < (len - 1); j++) {
				if (a[j] > a[j + 1]) {
					b = a[j];
					a[j] = a[j + 1];
					a[j + 1] = b;
				}
			}
		}
		int k = 0;
		for (int i = 0; i < len - 1;i++) {
			if (a[i] != a[i + 1]) {
				k++;
			}
		}
		int* c = new int[k + 1] {0};
		int t = k + 1;
		k = 0;
		for (int i = 0; i < len - 1;i++) {
			if (a[i] != a[i + 1]) {
				c[k] = a[i];
				k++;
				if ((t - k) == 1) {
					c[t - 1] = a[i + 1];
				}
			}
		}
		return t;
	}
}
