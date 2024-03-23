#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//给定两个数求最大公约数
int main() {
	int m, n, t = 0;
	scanf("%d %d", &m, &n);
	/*解法一
	while (1) {
		if ((m % k ==0)&& (n % k == 0)) {
			printf("最大公约数是：%d", k);
			break;
		}
		k--;
	}*/

	//解法二:辗转相除法
	while (t = m % n) {
		m = n;
		n = t;
	}
	printf("最大公约数为:%d\n", n);
	return 0;
}



