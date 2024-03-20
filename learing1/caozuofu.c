#include<stdio.h>
int Max(int b, int c) {
	return b > c ? b : c;
}
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
	printf("%d\n", ~a);
	//按二进制位取反 ：把所有二进制位中数字0变成1 1变成0
	//负数：原码、反码（除符号位取反）、补码（反码加一）内存中存储的是补码
	//正数：原码补码反码相同。
	int b = 0;
	int c = 3;
	printf("%d\n", b && c);   //与或
	printf("%d\n", b || c);
	printf("%d\n",Max(b, c));
	int d = 0;
	int e = 1;
	int f = 3;
	int g = (d = a + 2, e = b + 4, f = e + 2);
	printf("%d\n", g);
	//逗号表达式从左至右开始计算，结果为最后一个表达式的结果
	return 0;
}