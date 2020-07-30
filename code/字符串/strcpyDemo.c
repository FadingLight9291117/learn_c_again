#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* mycpy(char* dst, char* src) {
	// int idx = 0;
	// while(src[idx] != '\0') {
	// 	dst[idx] = src[idx];
	// 	idx++;
	// }
	// dst[idx] = '\0';
	// return dst;

	char* rtn = dst;
	while(*src) {
		*dst++ = *src++;
	}
	*dst = '\0';
	return rtn;
}

int main(int argc, char const *argv[])
{
	char a[] = "123";
	char b[3];
	mycpy(b, a);
	return 0;
}