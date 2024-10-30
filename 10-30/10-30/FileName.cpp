#define _CRT_SECURE_NO_WARNINGS 

int* Add(int x, int y) {
	int c = x + y;
	return &c;
}

void Swap(int* x, int* y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}


#include <stdio.h>

//int main() {
//	int a = 0;
//	int b = 0;
//	int p =scanf("%d %d", &a, &b);
//	int *c= Add(a, b);
//	printf("%d与%d的和是%d\n",a,b,*c);
//	printf("交换前a=%d,b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后a=%d,b=%d\n", a, b);
//
//	return 0;
//}

#include <math.h>
int Sushu(int i){
	int j = 0;
	static int count = 0;
	int flag = 1;//1表示是素数
	for (j = 2; j <= sqrt(i); j++) {
		if (i % j == 0) {
			flag = 0;
			break;
		}
	}
	if (flag == 1) {
		printf("%d是素数\n", i);
		count++;
	}
	return count;
}

int is_prime(int i) {
	int j = 0;
	for (j = 2; j <= sqrt(i); j++) {
		if (i % j == 0) {
			return 0;
		}
	}
	return 1;
}


int main() {
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2) {
		count=Sushu(i);
		/*if (is_prime(i)) {
			printf("%d是素数\n", i);
			count++;
		}*/
	}
	printf("一共%d个素数\n", count);
	return 0;
}
