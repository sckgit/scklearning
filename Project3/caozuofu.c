#include<stdio.h>
int main() {
	int a = 0;
	//0表示假非0表示真
	if(!a)
		printf("%d\n", !a);
	a = -a;
	printf("%d\n", a);
	//sizeof是一个操作符，后面的括号可以省略
	int arr[10] = { 1 };
	printf("%d\n", sizeof(arr));
	//计算数组总大小；十个int元素每个四个字节；总大小四十个字节
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	//计算数组元素个数
	return 0;
}