#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int a1 = 0;
	int b1 = 0;
	int c1 = 0;
	int a2 = 0;
	int b2 = 0;
	int b3 = 0;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	if (a >= b) {
		b1 = a;
		a1 = b;
	}
	else {
		b1 = b;
		a1 = a;
	}
	if (b1 >= c) {
		b3 = c;
		c1 = b1;
	}
	else {
		b3 = b1;
		c1 = c;
	}
	if (a1 >= b3) {
		a2 = b3;
		b3 = a1;
		std::cout << a2 << " " << b3 << " " << c1 << " " << std::endl;
	}
	else {
		std::cout << a1 << " " << b1 << " " << c1 << " " << std::endl;
	}
	return EXIT_SUCCESS;
}