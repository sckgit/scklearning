#include<stdio.h>

int main() {
	int a = 6;
	printf("%p\n", &a);
	int* p = &a;
	*p = 66;
	printf("%d\n", a);
	//ָ��Ĵ�С��һ����
	return 0;

}