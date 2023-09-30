#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	std::cin >> a;
	std::cin >> b;
	while (a >= b) {
		if ((a % 2 == 0) && (a / 2 > b)) {
			a = a / 2;
			std::cout << ":2" << std::endl;
		}
		else if (a - 1 >= b) {
			a = a - 1;
			std::cout << "-1" << std::endl;
		}
	}
	std::cout << a << std::endl;
	return EXIT_SUCCESS;
}