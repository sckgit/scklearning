#include<stdio.h>
int Max(int b, int c) {
	return b > c ? b : c;
}
int main() {
	int a = 0;
	//0��ʾ�ٷ�0��ʾ��
	if(!a)
		printf("%d\n", !a);
	a = -a;
	printf("%d\n", a);
	//sizeof��һ������������������ſ���ʡ��
	int arr[10] = { 1 };
	printf("%d\n", sizeof(arr));
	//���������ܴ�С��ʮ��intԪ��ÿ���ĸ��ֽڣ��ܴ�С��ʮ���ֽ�
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	//��������Ԫ�ظ���
	printf("%d\n", ~a);
	//��������λȡ�� �������ж�����λ������0���1 1���0
	//������ԭ�롢���루������λȡ���������루�����һ���ڴ��д洢���ǲ���
	//������ԭ�벹�뷴����ͬ��
	int b = 0;
	int c = 3;
	printf("%d\n", b && c);   //���
	printf("%d\n", b || c);
	printf("%d\n",Max(b, c));
	int d = 0;
	int e = 1;
	int f = 3;
	int g = (d = a + 2, e = b + 4, f = e + 2);
	printf("%d\n", g);
	//���ű��ʽ�������ҿ�ʼ���㣬���Ϊ���һ�����ʽ�Ľ��
	return 0;
}