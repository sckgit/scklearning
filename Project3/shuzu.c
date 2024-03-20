#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int Add(int x, int y) {
	int sum = 0;
	sum = x + y;
	return sum;
}
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
}