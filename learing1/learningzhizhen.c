#include<stdio.h>

int main() {
	int a = 6;
	printf("%p\n", &a);
	int* p = &a;
	*p = 66;
	printf("%d\n", a);
	//指针的大小是一样的
	return 0;

}