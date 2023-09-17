#include <iostream>

int main()
{
	int n = 0;
	int m = 0;
	int s = 0;
	int y = 0;
	std::cin >> n;
	std::cin >> m;
	s = (m * n) % 109 - (109 / (m * n));
	y = abs(s) + 1;
	std::cout << y << std::endl;

	return EXIT_SUCCESS;
}
