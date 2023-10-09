#include<iostream>
#include<cstdlib>

int main(int argc, char**)
{
	int n = 0;
	int k = 0;
	int kn = 0;
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
	int t = *(*(c + 0));
	int tn = 0;
	for (int i = 0; i < n; i++) {
		if (k <= *(*(b + i))) {
			k = *(*(b + i));
			kn = i;
		}
	}
	for (int i = 0; i < n; i++) {
		if (t >= *(*(c + i))) {
			t = *(*(c + i));
			tn = n - 1 - i;
		}
	}
	*(*(b + tn)) = k;
	*(*(b + kn)) = t;
	for (int i = 0; i < n; i++) {
		std::cout << *(*(b + i)) << ' ';
	}
	std::cout << std::endl;
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


