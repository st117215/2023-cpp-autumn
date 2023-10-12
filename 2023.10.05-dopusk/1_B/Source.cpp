#include<iostream>
#include<algorithm>

int main(int argc, char* argv[])
{
	int n = 0;
	int g = 0;
	int a = 0;
	std::cin >> n;
	std::cin >> g;
	int x[32]{ 0 };
	int y[32]{ 0 };
	int z[32]{ 0 };
	int w[32]{ 0 };
	for (int i = 0; i < 32; ++i) 
	{
		x[i] = (n >> (31 - i) & 1);
		y[i] = (g >> (31 - i) & 1);
	}
	a = 32;
	while (a > 0) {
		if (w[a] + x[a] + y[a] == 2) {
			z[a] = 0;
			w[a - 1] = 1;
		}
		if (w[a] + x[a] + y[a] == 3) {
			z[a] = 1;
			w[a - 1] = 1;
		}
		if (w[a] + x[a] + y[a] == 1) {
			z[a] = 1;
		}
		if (w[a] + x[a] + y[a] == 0) {
			z[a] = 0;
		}
		a--;
	}
	for (int i = 0; i < 32; ++i) {
		std::cout << z[i];
	}
	return 0;
}