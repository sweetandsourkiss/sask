#include<stdio.h>

int euclidean(int a, int b);

int main() {
	int a, b, c;
	printf("Put numbers : ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	printf("두 수의 최대공약수는 : %d", euclidean(a, b));

	return 0;
}

int euclidean(int a, int b) {
	int r = a % b;
	if (r == 0)
		return b;
	else
		return euclidean(b, r);
}
