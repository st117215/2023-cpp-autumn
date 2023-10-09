#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int c = 0;
	std::cin >> n;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			c += 1;
		}
	}
	for (int i = sqrt(n) + 1; i <= n; i++) {
		if (n % i == 0) {
			c += 1;
		}
	}
	std::cout << c << std::endl;
	return EXIT_SUCCESS;
}