#include<iostream>
#include<fstream>
#include <cstring>
#include <string>
using namespace std;

void polindrom(string word)
{
	string str;
	ifstream f(word);
	while (getline(f, str)) {
		int len = 0;
		while (str[len++] != '\0');
		int k = len - 1;
		for (int i = 0; i < k / 2; i++) {
			if (str[i] != str[k - i - 1])
			{
				std::cout << -1;
			}
		}
		std::cout << 1;
	}
}
int main()
{
	string str = "in2.txt";
	polindrom(str);
	return 0;
}