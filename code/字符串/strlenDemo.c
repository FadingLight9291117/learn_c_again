#include<stdio.h>
#include<string.h>


/* 自己实现strlen() */
int mylen(const char *s) { 
	int idx = 0;
	while(s[idx] != '\0') {
		idx++;
	}
	return idx;
}

int main(int argc, const char *argv[]) {
	char line[] = "Hello";
	printf("strlen(line)=%lu\n", strlen(line)); // 5，不包括结尾的0
	printf("sizeof(line)=%lu\n", sizeof(line)); // 6，包括结尾的0

	printf("mylen(line)=%lu\n", mylen(line));
	return 1;
}