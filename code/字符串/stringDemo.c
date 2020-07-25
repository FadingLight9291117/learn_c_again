#include<stdio.h>

int main() {
	/*	putchar和getchar	*/
	char c = 'c';
	putchar(c);
	printf("\n");

	while((c = getchar()) != EOF) {
		putchar(c);
	}
	printf("输入结束!\n");

	return 0;
}