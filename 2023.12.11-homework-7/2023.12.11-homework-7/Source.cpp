#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

void CountWords(char* filename, int& k)
{
	FILE* file = fopen(filename, "r");
	int currentLen = 0;
	while (!feof(file))
	{
		char c = 0;
		fscanf_s(file, "%c", &c);
		if (c == ' ') {
			k++;
		}
		if (c == '\n')
		{
			k++;
		}
	}
	k++;
	fclose(file);
}
void LongestSentence(char* filename, int& mx)
{
	FILE* file = fopen(filename, "r");
	int k = 0;
	while (!feof(file))
	{
		char c = 0;
		fscanf_s(file, "%c", &c);
		if (c == '.') {
			k++;
		}
	}
	int t = k;
	std::cout << t;
	std::cout << std::endl;
	int u = 0;
	int* m = new int[k] { 0 };
	k = 0;
	while (!feof(file))
	{
		char c = 0;
		fscanf_s(file, "%c", &c);
		if (c != '.') {
			k++;
		}
		else {
			m[u] = k;
			u++;
		}
	}
	for (int i = 0; i < t; i++) {
		std::cout << m[i] << ' ';
	}
	fclose(file);
}

int main(int argc, char* argv[])
{

	/*
	char a[255] = "Za";
	char b[255] = "wardo";
	char c[255] = "\0";
	char r[255] = "\0";
	char e[255] = "\0";
	char v[255] = "\0";
	int h = 0;
	int u = 0;
	int x = 1;
	int y = 3;
	int t = 4;
	strCat(a,b,c);
	strStr(c, b, h);
	substr(c,r, x, y);
	u = strcmp(a,b);
	strmult(b, v, t);
	printf("%s\n", c);
	printf("%s\n", e);
	printf("%d\n", h);
	printf("%s\n", e);
	printf("%s\n", r);
	printf("%s\n", e);
	printf("%d\n", u);
	printf("%s\n", e);
	printf("%s\n", v);
	*/
	int a = 0;
	int b = 0;
	int d = 0;
	char c[233] = "in.txt";
	char e[233] = "\0";
	CountWords(c, a);
	LongestSentence(c, b);
	return EXIT_SUCCESS;
}
