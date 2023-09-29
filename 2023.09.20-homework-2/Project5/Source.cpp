#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;
	int p = 0;
	int t = 0;
	int time = 0;
	std::cin >> k;
	std::cin >> m;
	std::cin >> n;
	p = n / k;
	t = n % k;
	time = p * m * 2;
	if (t % 10 != 0) {
		time +=  (m * 2);
	}
	std::cout << time << std::endl;
	return EXIT_SUCCESS;
}