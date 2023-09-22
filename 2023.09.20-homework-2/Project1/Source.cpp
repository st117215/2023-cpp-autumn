#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	std::cin >> a;
	if ((a % 400 == 0) or ((a % 4 == 0) and (a % 100 != 0))) {
		std::cout << "YES" << std::endl;
	}
	else {
		std::cout << "NO" << std::endl;
	}
	return EXIT_SUCCESS;
}