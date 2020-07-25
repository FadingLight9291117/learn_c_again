#include<stdio.h>

/****************/
/*	 程序参数	*/
/****************/
int main(int argc, char const *argv[]) // argc 是参数个数
{
	int i;
	for (i = 0; i < argc; i++) {
		printf("%d:%s\n", i, argv[i]);	// argv[0]是参数本身
	}
	return 0;
}