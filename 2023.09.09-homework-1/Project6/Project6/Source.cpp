#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int s = 0;
	std::cin >> n;
	s = n + 1;
	m = n - 1;
	std::cout << "The next number for the number " << n << " is " << s << std::endl;
	std::cout << "The previous number for the number " << n << " is " << m << std::endl;
	return EXIT_SUCCESS;
}