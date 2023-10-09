#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a = 1;
	int k = 0;
	std::cin >> n;
	while (a <= n) {
		a *= 2;
		k += 1;
	}
	for (int i = 0; i < k; ++i)
	{
		if (i == 0) {
			std::cout << ((n >> (k - 1 - i) & 1));
		}
		else if (i == k - 1) {
			std::cout << ((n >> (k - 1 - i) & 1));
		}
		else{
			if ((n >> (k - 1 - i) & 1) == 1) {
				std::cout << 0;
			}
			else {
				std::cout << 1;
			}
		}
	}

	return 0;
}