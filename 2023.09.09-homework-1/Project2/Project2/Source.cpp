#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int s = 0;
	std::cin >> n;
	s = (1 + n) / 2 * n;
	std::cout << "summ from 1 to " << n << " = " << s << std::endl;

	return EXIT_SUCCESS;
}