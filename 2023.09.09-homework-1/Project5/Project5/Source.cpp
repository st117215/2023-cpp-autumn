#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int s = 0;
	std::cin >> n;
	std::cin >> m;
	s = (m * n) % 109;
	std::cout << " speed = " << n << "," << " time = " << m << "," << " km = " << s << std::endl;

	return EXIT_SUCCESS;
}