#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//´òÓ¡×Ö·û
int main() {
	char arr1[] = "taikulawoshizhendehaokai";
	char arr2[] = "####################";
	int left = 0;
	int right = strlen(arr2) - 1;
	while (left <= right) {
		arr2[left] = arr1[left];
		left++;
		arr2[right] = arr1[right];
		right--;
		printf("%s\n", arr2);
	}
	return 0;

}