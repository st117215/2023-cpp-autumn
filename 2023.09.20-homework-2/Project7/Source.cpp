#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int y = 0;
	int x = 0;
	std::cin >> n;
	y = n % 100;
	x = y % 10;
	if ((y == 11) || (y == 12) || (y == 13) || (y == 14) || (x == 5) || (x == 6) || (x == 7) || (x == 8) || (x == 9) || (x == 0)) {
		std::cout << n << " bochek" << std::endl;
	}
	else if (x == 1) {
		std::cout << n << " bochka" << std::endl;
	}
	else if ((x == 2) || (x == 3) || (x == 4)) {
		std::cout << n << " bochki" << std::endl;
	}
	return EXIT_SUCCESS;
}