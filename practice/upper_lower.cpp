#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int upper_lower(char* str);

int main() {
	char str[100];

	printf("문자열을 입력하시오 : ");
	scanf("%s", str);

	printf("원래 문자열 %s \n", str);

	upper_lower(str);

	printf("나중 문자열 %s \n", str);

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
