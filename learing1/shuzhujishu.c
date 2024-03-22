#include<stdio.h>
//打印100以内的奇数
int main() {
	/*for (int i = 1; i < 100; i++) {
		if (i % 2 == 1) {
			printf("%d\n", i);
		}*/
	for(int i=1;i<100;i+=2){
		printf("%d\n", i);
	}
	return 0;
}