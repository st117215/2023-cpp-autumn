#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	int n = 0;
	int s = 0;
	std::cin >> n;
	s = 9 - n;
	std::string t = std::to_string(n);
	std::string k = std::to_string(s);
	std::cout << t << "9" << k 	<< std::endl;

	return EXIT_SUCCESS;
}