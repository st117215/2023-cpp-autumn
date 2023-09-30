#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int c = 0;
	int v0 = 0;
	int v1 = 1;
	int vi = 0;
	std::cin >> n;
	for (int i = 2; i <= n; i++) {
		vi = v1 + v0;
		v0 = v1;
		v1 = vi;
	}
	std::cout << vi << std::endl;
	return EXIT_SUCCESS;
}