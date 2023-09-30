#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int i = 1;
	std::cin >> n;
	while (n > 0) {
		if (n / i > 0) {
			int t = 0;
			t = i;
			while (t > 0) {
				std::cout << i << ' ' << std::endl;
				t -= 1;
			}
		}
		else {
			int t = 0;
			t = n % i;
			while (t > 0) {
				std::cout << i << ' ' << std::endl;
				t -= 1;
			}
		}
		n = n - i;
		i += 1;
	}
	return EXIT_SUCCESS;
}