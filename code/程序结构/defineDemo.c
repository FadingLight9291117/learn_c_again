#include<stdio.h>

/*
	宏的使用
*/
#define PI 3.14159
#define FORMAT "%f\n"
#define PI2 2*PI
#define PRT printf("%f ", PI); \
			printf("%f\n", PI2)

int main(int argc, char const *argv[])
{
	printf(FORMAT, 2*PI2);
	PRT;

	// 预定义的宏
	printf("%s; %d\n", __FILE__, __LINE__);
	printf("%s, %s\n", __DATE__, __TIME__);
	return 0;
}