#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//���������������Լ��
int main() {
	int m, n, t = 0;
	scanf("%d %d", &m, &n);
	/*�ⷨһ
	while (1) {
		if ((m % k ==0)&& (n % k == 0)) {
			printf("���Լ���ǣ�%d", k);
			break;
		}
		k--;
	}*/

	//�ⷨ��:շת�����
	while (t = m % n) {
		m = n;
		n = t;
	}
	printf("���Լ��Ϊ:%d\n", n);
	return 0;
}



