#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int k = 0;
	int i = 0;
	std::cin >> n;
	for (i = 1; i <= n; i++) {
		int c = 0;
		int p = 0;
		p = i;
		while (p > 0) {
			c = c * 10 + p % 10;
			p = p / 10;
		}
		if (c == i) {
			k += 1;
		}
	}
	std::cout << k << std::endl;
	return EXIT_SUCCESS;
}