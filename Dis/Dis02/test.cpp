#include<iostream>
using namespace std;

int foo(int *arr, size_t n) {
	return n ? arr[0] + foo(arr + 1, n - 1) : 0;
}

void print_arr(int* arr, size_t n){
	for(int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << endl;
}

int bar(int *arr, size_t n) {
	int sum = 0, i;
	for (i = n; i > 0; i--)
		sum += !arr[i - 1];
	//相当于取负数，如果有0的话
	return ~sum + 1;
 }

void baz(int* x, int* y){
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}

int mystrlen(char* strs){
	int len = 0;
	while(*strs){
		len++;
		strs++;	
	}
	return len;
}

int main(){
	const int arr_size = 6;
	int arr[arr_size] = {1,2,3, 0, 0, 0};
	//cout << foo(arr, arr_size) << endl;
	//print_arr(arr, arr_size);
//	cout << bar(arr, arr_size) << endl;
//	int a = 1, b = 2;
//	cout << "before switch " << a << " " << b << endl;
	//baz(&a, &b);
	//cout << "after switch " << a << " " << b << endl;
	char str[] = "abcdef";
	cout << mystrlen(str) << endl;
	return 0;
}
