#include <cstdio>
#include<iostream>
using namespace std;

/*&arr取出的是整个数组的地址，而一个数组名是这个数组首元素的地址所以对他们进行加法操作会得到不一样的结果*/
void test(){
	int arr[3] = {1, 2, 3};
	printf("arr = %p\n", arr);
	printf("&arr = %p\n", &arr);
	printf("arr + 1 = %p\n", arr + 1);
	printf("&arr + 1 = %p\n", &arr + 1);
}

int x10(int n){    return 10*n;    }
int x2(int n){    return 2*n;    }

void mutate_map(int A[], int n, int(*fp)(int)){
	for(int i = 0; i < n; i++)
		A[i] = fp(A[i]);
}

void print_array(int A[], int n){
	for(int i = 0; i < n; i++){
		printf("%d ", A[i]);
	}
	printf("\n");
}

int main(){
	const int n = 3;
	int A[n] = {3, 1, 4};
	print_array(A, n);
	mutate_map(A, n, &x2);
	print_array(A, n);
	mutate_map(A, n, &x10);
	print_array(A, n);
	return 0;
}
