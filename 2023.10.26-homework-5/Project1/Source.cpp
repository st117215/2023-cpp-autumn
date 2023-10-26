#include<iostream>
#include"ArrayJob.h"

int main(int argc, char* argv[])
{
	std::cout << "Enter the size of the array : ";
	int n = 0;
	std::cin >> n;
	int* a = initArray(n);
	bool exit = false;
	while (!exit)
	{
		{
			system("cls");
			printMenu();
			printArray(a, n);
		}
		std::cout << "Choose the option : ";
		int choice = 0;
		{
			std::cin >> choice;
		}
		{
			if (choice == 0) {
				exit = true;
				break;
			}
			else if (choice == 1) {
				printArray(a, n);
				system("pause");
				break;
			}
			else if (choice == 2) {
				int element = 0;
				std::cout << "Input element to add : ";
				std::cin >> element;
				addElement(a, n, element);
				printArray(a, n);
				break;
			}
			else if (choice == 3) {
				int index = 0;
				std::cout << "Input index to extract : ";
				std::cin >> index;
				std::cout << "Extracted  " << extractElement(a, n, index) << std::endl;
				printArray(a, n);
				break;
			}
			else if (choice == 4) {
				sortArray(a, n);
				printArray(a, n);
				break;
			}
			else if (choice == 5) {
				printReverseArray(a, n);
				break;
			}
			else if (choice == 6) {
				changeArrayMnMx(a, n);
				printArray(a, n);
				break;
			}
			else if (choice == 7) {
				int* c = extractAllDuplicates(a, n);
				printArray(c, sizeOfArray(a, n));
				break;
			}
			else {
				std::cout << "Unknown command" << std::endl;
				break;
			}
		}
	}



	return EXIT_SUCCESS;
}

