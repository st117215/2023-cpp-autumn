#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int s = 0;
	std::cin >> n;
	s = n * 100 + 90 + (9 - n);
	std::cout << s << std::endl;

	return EXIT_SUCCESS;
}
