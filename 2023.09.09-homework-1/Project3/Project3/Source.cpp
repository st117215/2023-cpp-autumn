#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	int n = 0;
	int s = 0;
	std::cin >> n;
	s = ((n / 10) * ((n / 10) + 1));
	std::string t = std::to_string(s);
	std::cout << t << "25" << std::endl;

	return EXIT_SUCCESS;
}