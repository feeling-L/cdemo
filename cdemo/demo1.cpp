#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main() {
//	int b;
//	int a = scanf("%d",&b);
//scanf("%d", &b); ��ȷ�ؽ�����������洢�ڱ��� b �С�scanf �������سɹ���ȡ���������������
// �������Ĳ���������scanf �����ڳ��Զ�ȡһ��������%d ��ʽ˵������ʱ���������⡣
// scanf �᳢�Դ��������ж�ȡ������һ����������������벻ƥ�䣨���磬�����������ĸ�����Ż�հ��ַ�����scanf ���޷��ɹ���ȡ������
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
//		printf("��ȡʧ��\n");
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