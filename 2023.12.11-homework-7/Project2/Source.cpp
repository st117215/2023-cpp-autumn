#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

void CountWords(char* filename, int& k)
{
	FILE* file = fopen(filename, "r"); 
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
	FILE* f = fopen("out.txt", "w");
	fprintf(f, "%d", k);
	fclose(file);
} 
int main(int argc, char* argv[])
{ 
	int a = 0;
	char c[233] = "in.txt";
	CountWords(c, a);
	return EXIT_SUCCESS;
}
