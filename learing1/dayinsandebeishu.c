#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//��ӡ1-100����3�ı���
int main() {
	/*for (int i = 3; i <= 100; i += 3) {
		printf("%d", i);
	}*/
	for (int i =1;i <= 100; i++) {
		if (i % 3 == 0) {
			printf("%d\n", i);
		}
	}
	return 0;

}