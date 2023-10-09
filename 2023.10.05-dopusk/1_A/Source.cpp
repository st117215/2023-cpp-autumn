#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	std::cin >> n;
	for (int i = 0; i < 32; ++i)
	{
		if ((n >> (31 - i) & 1) == 1) {
			k++;
		}
	}
	std::cout << k;

	return 0;
}