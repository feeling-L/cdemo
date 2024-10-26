#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main() {
//	int b;
//	int a = scanf("%d",&b);
//scanf("%d", &b); 正确地将输入的整数存储在变量 b 中。scanf 函数返回成功读取的输入项的数量。
// 如果输入的不是整数，scanf 函数在尝试读取一个整数（%d 格式说明符）时会遇到问题。
// scanf 会尝试从输入流中读取并解析一个整数，但如果输入不匹配（例如，如果输入是字母、符号或空白字符），scanf 将无法成功读取整数。
//	printf("%d", a);
//
//	return 0;
//}


//int main() {
//	int b;
//	int result = scanf("%d", &b);
//	if (result) {
//		printf("%d\n", b);
//	}
//	else {
//		printf("读取失败\n");
//	}
//	int* p = &result;
//	printf("%p\n", p);
//	printf("%zu\n", sizeof(p));
//	printf("%d\n", *p);
//
//	*p = 2;
//	printf("%d", result);
//	return 0;
//}


int main() {
	int i = 1;
	while (i <= 100) {
		if (i % 2 == 1) {
			printf("%d\t", i);
			i += 2;
		}
	}
}