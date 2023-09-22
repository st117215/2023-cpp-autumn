
#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int s = 0;
	std::cin >> n;
	s = ((n / 10) * ((n / 10) + 1)) * 100 + 25;
	std::cout << s << std::endl;

	return EXIT_SUCCESS;
}

