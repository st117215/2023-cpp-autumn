
#include<iostream>


void bubblesort(int*& a, int& len);
int* initArray(int& len);
void swap(int& a, int& b);
void insert_sort(int*& a, int& len);
void mixarr(int*& a, int& len);
bool is_sorted(int*& a, int& len);
void monkey_sort(int*& a, int& len);
void gnome_sort(int*& a, int& len);
void count_sort(int*& a, int& len);

int* initArray(int& len){
	srand(time(0));
	int* res = new int[len] { 0 };
	for (int i = 0; i < len; ++i){
		res[i] = rand() % 100;
	}
	return res;
}
void swap(int& a, int& b) {
	int c = a;
	a = b;
	b = c;
}
void bubblesort(int*& a, int& len) {
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len - 1 - i; j++){
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
}
void insert_sort(int*& a, int& len) {
	for (int i = 1; i < len; i++) {
		int t = i;
		while (t > 0 && a[t] <= a[t - 1]) {
			swap(a[t], a[t - 1]);
			t--;
		}
	}
}
void select_sort(int*& a, int& len) {
	for (int i = 0; i < len; i++) {
		int min = i;
		for (int j = i + 1; j < len; j++){
			min = (a[min] < a[j] ? min : j);
		}
		swap(a[min], a[i]);
	}
}
void mixarr(int*& a, int& len) {
	for (int i = 0; i < len; i++) {
		swap(a[i], a[rand() % len]);
	}
		
}
bool is_sorted(int*& a, int& len) {
	for (int i = 0; i < len-1; i++) {
		if (a[i] > a[i + 1]) {
			return false;
		}
	}
	return true;
}
void monkey_sort(int*& a, int& len) {
	while (is_sorted(a, len) != 1) {
		mixarr(a, len);
	}
}
void gnome_sort(int*& a, int& len) {
	int ind = 0;
	while (ind < len) {
		if (ind == 0) {
			ind++;
		}
		if (a[ind] >= a[ind - 1]) {
			ind++;
		}
		else {
			swap(a[ind], a[ind - 1]);
			ind--;
		}
	}
}
void count_sort(int*& a, int& len) {
	int mx = a[0];
	for (int i = 0; i < len; i++) {
		if (a[i] > mx) {
			mx = a[i];
		}
	}
	int* c = new int[mx + 1] { 0 };
	int* b = new int[len] { 0 };
	for (int i = 0; i < len; i++) {
		c[a[i]]++;
	}
	for (int i = 1; i < mx + 1; i++) {
		c[i] += c[i-1];
	}
	for (int i = len - 1; i >= 0; i--) {
		b[c[a[i]] - 1] = a[i];
		c[a[i]]--;
	}
	for (int i = 0; i < len ; i++) {
		a[i] = b[i];
	}
}
void printArray(int*& a, int& len) {
	for (int i = 0; i < len; ++i){
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
}


int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	std::cout << "Bubble:" << std::endl;
	int* a = initArray(n);
	printArray(a, n);
	bubblesort(a, n);
	printArray(a, n);
	delete[] a;
	std::cout << std::endl;
	std::cout << "Selection:" << std::endl;
	int* b = initArray(n);
	printArray(b, n);
	select_sort(b, n);
	printArray(b, n);
	delete[] b;
	std::cout << std::endl;
	std::cout << "Insertion:" << std::endl;
	int* c = initArray(n);
	printArray(c, n);
	insert_sort(c, n);
	printArray(c, n);
	delete[] c;
	std::cout << std::endl;
	std::cout << "Monkey:" << std::endl;
	int* f = initArray(n);
	printArray(f, n);
	monkey_sort(f, n);
	printArray(f, n);
	delete[] f;
	std::cout << std::endl;
	std::cout << "Count:" << std::endl;
	int* e = initArray(n);
	printArray(e, n);
	count_sort(e, n);
	printArray(e, n);
	delete[] e;
	std::cout << std::endl;
	std::cout << "Gnome:" << std::endl;
	int* d = initArray(n);
	printArray(d, n);
	gnome_sort(d, n);
	printArray(d, n);
	delete[] d;
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
