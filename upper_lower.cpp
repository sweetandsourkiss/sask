#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int upper_lower(char* str);

int main() {
	char str[100];

	printf("���ڿ��� �Է��Ͻÿ� : ");
	scanf("%s", str);

	printf("���� ���ڿ� %s \n", str);

	upper_lower(str);

	printf("���� ���ڿ� %s \n", str);

	return 0;
}

int upper_lower(char* str) {
	while (*str) {
		if (*str <= 96) {
			*str += 32;
		}
		else {
			*str -= 32;
		}
		str++;
	}
	return 0;
}