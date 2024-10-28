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
//	//scanf("n的值是>%d", &n);
//	scanf("%d", &n);
//	for (i; i <= n; i++) {
//		res *= i;
//	}
//	printf("%d的阶乘是%d", n, res);
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
//	printf("由1到%d的阶乘的和是%d", n, num);
//	return 0;
//}


//int main() {
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int aim = 0;
//	int left = 0;
//	int right = 0;
//	right = (sizeof(arr) / sizeof(arr[0]))-1;
//	int mid = (left + right) / 2;
//	printf("请输入目标值aim>");
//	scanf("%d", &aim);
//	while (left <= right) {
//		if (arr[mid] > aim)
//			right = mid--;
//		else if (arr[mid] < aim)
//			left = mid++;
//		else {
//			printf("目标值%d的下标是%d", aim, mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("没有目标值%d", aim);
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
//		Sleep(1000);//单位毫秒
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
		printf("请输入密码password>");
		scanf("%s" , password);
		if (strcmp(password, "lilinze")==0) {
			//其它功能
			printf("密码正确");
			break;
		}
		i++;
	}
	if (i == 3) {
		printf("三次密码均错误！！！");
	}
	return 0;
}