#include<iostream>
#include<cstdlib>

int main(int argc, char**)
{
	int n = 0;
	int a = 0;
	std::cin >> n;
	int** b = (int**)malloc(sizeof(int*) * n);
	int m = n - 1;
	for (int i = 0; i < n; i++) {
		*(b + i) = (int*)malloc(sizeof(int) * m);
	}
	for (int i = 0; i < n; i++) {
		std::cin >> a;
		*(*(b + i)) = a;
	}
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (*(*(b + i)) > 0) {
			k++;
		}
	}
	int** c = (int**)malloc(sizeof(int*) * k);
	int u = k - 1;
	for (int i = 0; i < k; i++) {
		*(c + i) = (int*)malloc(sizeof(int) * u);
	}
	for (int i = 0; i < k; i++) {
		*(*(c + i)) = 0;
	}
	k = 0;
	for (int i = 0; i < n; i++) {
		if (*(*(b + i)) > 0) {
			*(*(c + k)) = *(*(b + i));
			k++;
		}
	}
	for (int i = 0; i < k; i++) {
		std::cout << *(*(c + i)) << ' ';
	}
	for (int i = 0; i < n; ++i)
	{
		free(*(b + i)); 
	}
	free(b);
	for (int i = 0; i < k; ++i)
	{
		free(*(c + i));
	}
	free(c);
	return 0;
}


