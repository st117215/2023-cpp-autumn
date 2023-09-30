#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int c = 0;
	std::cin >> n;
	while (n > 0) {
		c = c * 10 + n % 10;
		n = n / 10;
	}
	std::cout << c << std::endl;
	return EXIT_SUCCESS;
}