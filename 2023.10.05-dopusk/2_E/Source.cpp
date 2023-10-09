#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	for (int i = 1; i <= n/2; i ++) {
		for (int j = 1; j <= n; j++) {
			std::cout << j;
		}
		std::cout << std::endl;
		for (int j = n; j > 0; j--) {
			std::cout << j;
		}
		std::cout << std::endl;
	}
	for (int i = 1; i <= n % 2; i++ ) {
		for (int j = 1; j <= n; j++) {
			std::cout << j;
		}
		std::cout << std::endl;
	}
	return 0;
}