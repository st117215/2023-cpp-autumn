#pragma once

void printMenu();
int* initArray(int);
void printArray(int* a, int len);
void expandArray(int*& a, int& len);
void addElement(int*& a, int& len, int element);
void contractArray(int*& a, int& len);
bool indexValid(int index, int len);
int extractElement(int*& a, int& len, int index);
void sortArray(int*& a, int& len);
void printReverseArray(int*& a, int& len);
void changeArrayMnMx(int*& a, int& len);
int* extractAllDuplicates(int*& a, int& len);
int sizeOfArray(int*& a, int& len);




