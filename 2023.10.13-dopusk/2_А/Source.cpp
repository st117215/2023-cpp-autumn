#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a = 1;
	int k = 0; 
	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			std::cout << j;
		}
		std::cout << std::endl;
	}
	return 0;
}