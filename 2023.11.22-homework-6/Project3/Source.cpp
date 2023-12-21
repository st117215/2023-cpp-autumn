#include<iostream>
void hanoi_obmen(int n, int from = 1, int to = 3)
{
	if (n <= 0)
	{
		return;
	}
	int res = 6 - from - to;
	if (n == 1) {
		std::cout << 1 << ' ' << from << ' ' << to << std::endl;
	}
	else {
		hanoi_obmen(n - 1, from, to);
		hanoi_obmen(n - 2, to, res);
		std::cout << 0 << ' ' << from << ' ' << to << std::endl;
		hanoi_obmen(n - 2, res, from);
		hanoi_obmen(n - 1, from, to);
	}
}
int main(int argc, char* argv[])
{
	int a = 0;
	std::cin >> a;
	hanoi_obmen(a);
	return EXIT_SUCCESS;
}