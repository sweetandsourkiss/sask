#include<stdio.h>

int euclidean(int a, int b);

int main() {
	int a, b, c;
	printf("�� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", & c);

	printf("�� ���� �ִ������� : %d", euclidean(c, euclidean(a, b)));

	return 0;
}

int euclidean(int a, int b) {
	int r = a % b;
	if (r == 0)
		return b;
	else
		return euclidean(b, r);
}