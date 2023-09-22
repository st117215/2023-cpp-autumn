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
	if (y == 11) {
		std::cout << n << " bochek" << std::endl;
	}
	else if (y == 12) {
		std::cout << n << " bochek" << std::endl;
	}
	else if (y == 13) {
		std::cout << n << " bochek" << std::endl;
	}
	else if (y == 14) {
		std::cout << n << " bochek" << std::endl;
	}
	else if (x == 1) {
		std::cout << n << " bochka" << std::endl;
	}
	else if (x == 5) {
		std::cout << n << " bochek" << std::endl;
	}
	else if (x == 6) {
		std::cout << n << " bochek" << std::endl;
	}
	else if (x == 7) {
		std::cout << n << " bochek" << std::endl;
	
}
	else if (x == 8) {
		std::cout << n << " bochek" << std::endl;
	}
	else if (x == 9) {
		std::cout << n << " bochek" << std::endl;
	}
	else if (x == 0) {
		std::cout << n << " bochek" << std::endl;
	}
	else if (x == 2) {
		std::cout << n << " bochki" << std::endl;
	}
	else if (x == 3) {
		std::cout << n << " bochki" << std::endl;
	}
	else if (x == 4) {
		std::cout << n << " bochki" << std::endl;
	}

	return EXIT_SUCCESS;
}