#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//将三个整数由大至小输出
	int main() {
    int tmp, a, b, c = 1;
	scanf("%d %d %d", &a, &b, &c);
	//连续比较大小交换位置
	if (a < b) {
		int tmp =a;
		a = b;
		b = tmp;
	}if (a < c) {
		int tmp = a;
		a = c;
		c = tmp;
	}if (b < c) {
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d", a, b, c);
	return 0;

}