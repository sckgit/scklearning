#include<stdio.h>
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
	return 0;
}