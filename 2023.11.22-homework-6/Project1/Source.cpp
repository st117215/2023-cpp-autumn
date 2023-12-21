#include<iostream>

void hanoi(int n, int from, int to)
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

void hanoi_remont(int n, int from, int to) {
	if (n > 0) {
		int res = 6 - from - to;
		if (res == 2) {
			hanoi_remont(n - 1, from, to);
			std::cout << n << ' ' << from << ' ' << res << ' ' << std::endl;
			hanoi_remont(n - 1, res, to);
			std::cout << n << ' ' << res << ' ' << to << ' ' << std::endl;
			hanoi_remont(n - 1, from, to);

		}
		else {
			hanoi_remont(n - 1, from, res);
			std::cout << n << ' ' << to << ' ' << from << ' ' << std::endl;
			std::cout << n << ' ' << from << ' ' << res << ' ' << std::endl;
			hanoi_remont(n - 1, res, to);
		}
	}

}
void hanoi_cycle(int n, int from, int to) {
	if (n > 0) {
		int res = 6 - from - to;
		if (((to - from) % 3) == 1) {
			hanoi_cycle(n - 1, from, res);
			std::cout << n << ' ' << to << ' ' << res << ' ' << std::endl;
			hanoi_cycle(n - 1, res, to);
		}
		else {
			hanoi_cycle(n - 1, from, to);
			std::cout << n << ' ' << from << ' ' << res << ' ' << std::endl;
			hanoi_cycle(n - 1, res, to);
			std::cout << n << ' ' << res << ' ' << to << ' ' << std::endl;
			hanoi_cycle(n - 1, from, to);

		}
	}

}
void hanoi_injustice(int n, int from, int to) {
	if (n < 0) {
		return;
	}
	else if (n == 1) {
		std::cout << n << ' ' << from << ' ' << to << ' ' << std::endl;
	}
	else {
		int res = 6 - from - to;
		hanoi_injustice(n - 1, from, to);
		std::cout << n << ' ' << from << ' ' << res << ' ' << std::endl;
		hanoi_injustice(n - 1, to, from);
		std::cout << n << ' ' << res << ' ' << to << ' ' << std::endl;
		hanoi_injustice(n - 1, from, to);
	}
}

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 1;
	int c = 3;
	std::cin >> a;
	hanoi_injustice(a, b, c);
	return EXIT_SUCCESS;
}

