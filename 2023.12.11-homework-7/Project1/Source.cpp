#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
int strLen(char* str)
{
	int len = 0;
	while (str[len++] != '\0');
	return len - 1;
}
void strCat(char* str1, char* str2, char* str3)
{
	int a = strLen(str1);
	int b = strLen(str2);
	int k = 0;
	for (int i = 0; i < a; i++) {
		str3[i] = str1[k];
		k++;
	}
	k = 0;
	for (int i = a; i < a + b; i++) {
		str3[i] = str2[k];
		k++;
	}
	return;
}
void strStr(char* str1, char* str2, int& y)
{
	int a = strLen(str1);
	int b = strLen(str2);
	int k = 0;
	int mn = 10000;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (str1[i + j] == str2[j]) {
				k = i;
				if (k < mn) {
					mn = k;
				}
			}
			else {
				break;
			}
		}
	}
	y = k;
}
void substr(char* str1, char* str2, int& x, int& y)
{
	char u[255] = "Wrong!";
	int a = strLen(str1);
	int k = y + x - 1;
	if (y > a) {
		y = a;
	}
	if (y + x > a) {
	}
	else {
		for (int i = 0; i < k; i++) {
			str2[i] = str1[x + i];
		}
	}
}
int strcmp(char* str1, char* str2)
{
	int a = strLen(str1);
	int b = strLen(str2);
	int k = 123;
	if (a > b) {
		k = 1;
	}
	else if (a == b) {
		k = 0;
	}
	else {
		k = -1;
	}
	return k;
}
void strmult(char* str1, char* str2, int& y)
{
	int a = strLen(str1);
	int k = a * y;
	int u = 0;
	while (u < a) {
		for (int i = u; i < k; i += a) {
			str2[i] = str1[u];
		}
		u++;
	}
}
int main(int argc, char* argv[])
{
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
	return EXIT_SUCCESS;
}