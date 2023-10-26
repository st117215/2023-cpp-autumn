#include<iostream>
#include<cstdlib>

int main(int argc, char**)
{
	int n = 0;
	int a = 0;
	std::cin >> n;
	int m = n - 1;
	int** b = (int**)malloc(sizeof(int*) * n);
	int** c = (int**)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++) {
		*(b + i) = (int*)malloc(sizeof(int) * m);
	}
	for (int i = 0; i < n; i++) {
		*(c + i) = (int*)malloc(sizeof(int) * m);
	}
	for (int i = 0; i < n; i++) {
		std::cin >> a;
		*(*(b + i)) = a;
		*(*(c + n - 1 - i)) = a;
	}
	for (int i = 0; i < n; i++) {
		std::cout << *(*(c + i)) << ' ';
	}
	for (int i = 0; i < n; ++i)
	{
		free(*(b + i));
	}
	free(b);
	for (int i = 0; i < n; ++i)
	{
		free(*(c + i));
	}
	free(c);
	return 0;
}

