#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include "my_strlen.h"

int main() {
	char arr[] = "abc";//[a,b,c,\0]
	int ret = my_strlen(arr);
	printf("%d", ret);

	return 0;
}