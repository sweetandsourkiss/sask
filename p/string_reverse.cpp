#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int str_reverse(char* str);

int main() {
	char str[100];

	printf("문자열을 입력하시오 : ");
	scanf("%s", &str);
	

	printf("\n 원래 문자열은 %s \n", str);

	printf("------문자열을 뒤집자!--------- \n");

	printf("나중 문자열은 ");

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