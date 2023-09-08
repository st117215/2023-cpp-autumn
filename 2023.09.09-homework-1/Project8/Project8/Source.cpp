#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int s = 0;
	std::cin >> n;
	std::cin >> m;
	s = (n * (n / m) + m * (m / n)) / ((n / m) + (m / n));
	std::cout << s << std::endl;

	return EXIT_SUCCESS;

}