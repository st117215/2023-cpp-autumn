#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a = 1;
	int k = 0;
	std::cin >> n;
	int m = n;
	while (m != 0) {
		a *= 2;
		k += 1;
		m /= 2;
	}
	int y = 0;
	int z = 0;
	if (a / 2 == n) {
		for (int i = 0; i < k; i++) {
			std::cout << (n >> (k - 1 - i) & 1); 
		}
	}
	else {
		while (z < k) {
			if ((n >> z & 1) != 1) {
				z++;
			}
			else {
				y = z;
				break;
			}
		}
		std::cout << (n >> (k - 1) & 1);
		int u = k - 2;
		while (u > y) {
			if ((n >> u & 1) == 1) {
				std::cout << 0;
			}
			else {
				std::cout << 1;
			}
			u--;
		}
		std::cout << (n >> y & 1);
		for (int i = y - 1; i >= 0; i--) {
			std::cout << (n >> i & 1);
		}
	}

	return 0;
}