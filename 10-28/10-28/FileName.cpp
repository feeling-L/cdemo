#define _CRT_SECURE_NO_WARNINGS 



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

//int main()
//{
//	int i = 1;
//	int n;
//	int res = 1;
//	//scanf("n��ֵ��>%d", &n);
//	scanf("%d", &n);
//	for (i; i <= n; i++) {
//		res *= i;
//	}
//	printf("%d�Ľ׳���%d", n, res);
//	return 0;
//}


//int main() {
//	int i = 1;
//	int n;
//	int res = 1;
//	int num = 0;
//	scanf("%d", &n);
//	for (i; i <= n; i++) {
//		res *= i;
//		num += res;
//	}
//	printf("��1��%d�Ľ׳˵ĺ���%d", n, num);
//	return 0;
//}


//int main() {
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int aim = 0;
//	int left = 0;
//	int right = 0;
//	right = (sizeof(arr) / sizeof(arr[0]))-1;
//	int mid = (left + right) / 2;
//	printf("������Ŀ��ֵaim>");
//	scanf("%d", &aim);
//	while (left <= right) {
//		if (arr[mid] > aim)
//			right = mid--;
//		else if (arr[mid] < aim)
//			left = mid++;
//		else {
//			printf("Ŀ��ֵ%d���±���%d", aim, mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("û��Ŀ��ֵ%d", aim);
//	}
//	return 0;
//}


//int main() {
//	char arr1[] = "hello world!";
//	char arr2[] = "############";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//
//	while (left <= right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		Sleep(1000);//��λ����
//		printf("%s\n", arr2);
//		//system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


int main() {
	char password[20] = { 0 };
	int i=0;
	while (i < 3) {
		printf("����������password>");
		scanf("%s" , password);
		if (strcmp(password, "lilinze")==0) {
			//��������
			printf("������ȷ");
			break;
		}
		i++;
	}
	if (i == 3) {
		printf("������������󣡣���");
	}
	return 0;
}