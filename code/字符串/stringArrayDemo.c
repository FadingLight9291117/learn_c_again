#include<stdio.h>

/****************/
/*	字符串数组	*/
/****************/

int main() {
	// 第二维必须要有确定的大小
	// 数组指针
	char a[][10] = {
		"Hello",
		"World"
	};

	// 这两种不一样，这个是指针数组，不需要指定大小
	char *b[] = {
		"Hello",
		"World"
	};

	char (*c)[10] = a; // 数组指针
	char **d = b;	// 指针数组

	printf("%s\n");

	return 0;
}