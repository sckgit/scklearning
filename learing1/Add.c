#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int Add(int x, int y) {
	int sum = 0;
	sum = x + y;
	return sum;
}
int main() {
	int x = 0;
	int y = 0;
	scanf("%d%d", &x, &y);
	int sum=Add(x, y);
	printf("%d", sum);
}