#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int str_reverse(char* str);

int main() {
	char str[100];

	printf("���ڿ��� �Է��Ͻÿ� : ");
	scanf("%s", &str);
	

	printf("\n ���� ���ڿ��� %s \n", str);

	printf("------���ڿ��� ������!--------- \n");

	printf("���� ���ڿ��� ");

	str_reverse(str);

	return 0;
}

int str_reverse(char* str) {
	int n=0;

	while (*str) {
		str++;
		n++;
	}
	str--;
	
	for (int i = n - 1; i>=0 ; i--) {
		printf("%c", *str);
		str--;
	}

	return 1;
}