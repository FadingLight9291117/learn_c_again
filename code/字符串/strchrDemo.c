#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	char s1[] = "hello";
	char *dst = strchr(s1, 'l'); // 寻找第一个出现l的地方
	printf("%s\n", dst);

	/* 拷贝出第一个l之前的内容，而原字符串不变 */
	dst = strchr(s1, 'l');
	*dst = '\0';	// 先将该位置赋值为\0，后面再恢复
	char *s2 = (char *)malloc(sizeof(s1) + 1);
	strcpy(s2, s1);
	*dst = 'l';
	printf("%s\n", s2);
	printf("%s\n", s1);

	return 0;
}