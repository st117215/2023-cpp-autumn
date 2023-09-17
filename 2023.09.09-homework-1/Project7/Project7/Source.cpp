#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int s = 0;
	std::cin >> a;
	std::cin >> b;
	std::cout << (a * (a / b) + b * (b / a)) / ((a / b) + (b / a)) << std::endl;

	return EXIT_SUCCESS;

}