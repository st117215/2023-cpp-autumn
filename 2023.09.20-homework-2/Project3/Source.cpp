#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	if ((b == 0) and (d != 0)){
		std::cout << "INF" << std::endl;
	}
	else if ((b == 0) and (d == 0)) {
		std::cout << "NO" << std::endl;
	}
	else if ((b == 0) and (a == 0)) {
		std::cout << "NO" << std::endl;
	}
	else if (d / c == b / a)  {
		std::cout << "NO" << std::endl;
	}
	else if ((a != 0) and (b != 0)) {
		std::cout << b * (-1) / a << std::endl;
	}
	return EXIT_SUCCESS;
}