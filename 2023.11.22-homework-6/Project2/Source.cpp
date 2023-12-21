#include<iostream>

void hanoi(int n, int from = 1, int to = 3)
{
	if (n <= 0)
	{
		return;
	}
	int res = 6 - from - to;
	hanoi(n - 1, from, res);
	std::cout << n << ' ' << from << ' ' << to << ' ' << std::endl;
	hanoi(n - 1, res, to);
}
void hanoi_sortTowers(int n, int from = 1, int to = 2)
{
	int res = 6 - from - to;
	if (n > 1) {
		hanoi(n - 1, from, res);
	}
	std::cout << n << ' ' << from << ' ' << to << ' ' << std::endl;
	if (n > 3) {
		hanoi(n - 3, res, from);
	}
	if (n > 2) {
		std::cout << n - 2 << ' ' << res << ' ' << to << ' ' << std::endl;
	}
	if (n > 3) {
		hanoi_sortTowers(n - 3, from, res);
	}
}
int main(int argc, char* argv[])
{
	int a = 0;
	std::cin >> a;
	hanoi_sortTowers(a);
	return EXIT_SUCCESS;
}
