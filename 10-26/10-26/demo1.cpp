#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main() {
//	int i = 0;
//	int j = 1;
//	int num[4] = {};
//	while (i < 4) {
//		scanf("%d", &num[i]);
//		i++;
//	}
//	int max = num[j];
//	while (j < 4) {
//
//		if (num[j] > max)
//			max = num[j];
//		j++;
//	}
//	printf("%d", max);
//	return 0;
//}

int main() {
	char password[20] = {};
	printf("请输入密码password:");
	scanf("%s", password);

	printf("请确认密码(Y/N)->");
	int ret = getchar();
	//getchar() 需要一种方式来指示输入结束（End Of File，EOF）。
	//在 C 中，EOF 是一个宏，通常定义为 -1（即 (unsigned char)-1 转换后的值）
	// 由于 char 类型可能无法表示 -1（特别是在 char 被定义为无符号时），因此 getchar() 返回 int 类型，以便能够返回 EOF。
	//char ret = getchar();
	if (ret == 'Y') {
		printf("YES\n");

	}
	else {
		printf("NO\n");
		printf("%d", ret);
	}

	return 0;
}