#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int s = 0;
	std::cin >> a;
	std::cin >> b;
	s = (a * (a / b) + b * (b / a)) / ((a / b) + (b / a));
	std::cout << s << std::endl;

	return EXIT_SUCCESS;

}