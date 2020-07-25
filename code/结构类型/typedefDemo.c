#include<stdio.h>

/****************************************/
/*	typedef用来声明一个已有类型的新名字	*/
/****************************************/

typedef int Length;
typedef struct ADate {
	int year;
	int month;
	int day;
} Date;

int main() {
	Length a = 1;
	printf("%d\n", a);

	Date today = {2020, 7, 24};
	printf("%i-%i-%i\n", today.year, today.month, today.day);
	return 0;
}