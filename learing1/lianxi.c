#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.���n�Ľ׳�
int jiecheng(int n) {
	int sum = 1;
	for (int i = 1; i <=n; i++) {
		sum *= i;
	}
	printf("%d\n", sum);
}

// ���� 1!+2!+3!+����+10!
void jiechenghe(int n) {
	int sum = 1, suma = 0;
	for (int i = 1; i <= n; i++) {
		sum *= i;
		suma += sum;
	}
	
	printf("%d\n", suma);
}

//���ֲ���
int main() {
	int a = 1;
	int k = 3;
	//scanf("%d", &k);
	int arr[] = { 1,2,4,5,6,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] < k) {
			left = mid + 1;
		}
		else if (arr[mid] > k) {
			right = mid - 1;
		}
		else if (arr[mid] == k) {
			printf("�����������ҵ��ڵ�%d��", mid + 1);
			break;
		}
	}
	if (left > right) {
		printf("�Ҳ���");
	}
}