#include<stdio.h>
int Max(int b, int c) {
	return b > c ? b : c;
}

void test() {
	//int a = 1;
	static int a = 1;
	a++;
	printf("%d\n", a);
}
int main() {
	int i = 0;
	while (i < 10) {
		i++;
		test();
	}
	//static修饰局部变量，改变了局部变量的生命周期(本质上是改变了变量的存储类型
	/*static修饰全局变量，使得这个全局变量只能在自己所在的源文件(.c)内部可以使用
	static修饰全局变量，其他源文件不能使用!
	全局变量，在其他源文件内部可以被使用，是因为全局变量具有外部链接属性
	但是被static修饰之后，就变成了内部链接属性，其他源文件就不能链接到这个静态的全局变量了!*/
	return 0;

}