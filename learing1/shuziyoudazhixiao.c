#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//�����������ɴ���С���
	int main() {
    int tmp, a, b, c = 1;
	scanf("%d %d %d", &a, &b, &c);
	//�����Ƚϴ�С����λ��
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