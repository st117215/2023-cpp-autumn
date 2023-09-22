#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	std::cin >> a;
	std::cin >> b;
	if ((a == 1) and (b == 1)) {
		std::cout << "YES" << std::endl;
	}
	else if ((a == 1) and (b != 1)) {
		std::cout << "NO" << std::endl;
	}
	else if ((a != 1) and (b == 1)) {
		std::cout << "NO" << std::endl;
	}
	else if ((a != 1) and (b != 1)) {
		std::cout << "YES" << std::endl;
	}
	return EXIT_SUCCESS;
}