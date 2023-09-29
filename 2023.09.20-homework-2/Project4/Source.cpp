#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int b1 = 1;
	int b5 = 5;
	int b10 = 10;
	int b20 = 20;
	int b60 = 60;
	int k = 0;
	int k1 = 0;
	int k5 = 0;
	int k10 = 0;
	int k20 = 0;
	int k60 = 0;
	std::cin >> n;
	if (n / b60 > 0){
		k60 = n / b60;
		n = n % b60;
	}
	if (n / b20 > 0) {
		k20 = n / b20;
		n = n % b20;
	}
	if (n / b10 > 0) {
		k10 = n / b10;
		n = n % b10;
	}
	if (n / b5 > 0) {
		k5 = n / b5;
		n = n % b5;
	}
	if (n / b1 > 0) {
		k1 = n / b1;
		n = n % b1;
	}
	std::cout << k1 << ' ' << k5 << ' ' << k10 << ' ' << k20 << ' ' << k60 << ' ' << std::endl;
	return EXIT_SUCCESS;
}

