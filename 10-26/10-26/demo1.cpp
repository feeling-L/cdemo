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
	printf("����������password:");
	scanf("%s", password);

	printf("��ȷ������(Y/N)->");
	int ret = getchar();
	//getchar() ��Ҫһ�ַ�ʽ��ָʾ���������End Of File��EOF����
	//�� C �У�EOF ��һ���꣬ͨ������Ϊ -1���� (unsigned char)-1 ת�����ֵ��
	// ���� char ���Ϳ����޷���ʾ -1���ر����� char ������Ϊ�޷���ʱ������� getchar() ���� int ���ͣ��Ա��ܹ����� EOF��
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