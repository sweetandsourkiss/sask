#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int compare_two_str(char* str1, char* str2);

int main() {
	char str1[100];
	char str2[100];

	printf("두 문자열을 입력하세요.\n첫번째 ");
	scanf("%s", str1);
	printf("두번째 ");
	scanf("%s", str2);

	printf("두 문자열은 동일한가?\n");

	if (compare_two_str(str1, str2)) {
		printf("같다!!!");
	}
	else {
		printf("다르다!!!");
	}

	return 0;
}

int compare_two_str(char* str1, char* str2) {
	while (*str1) {
		if (*str1 != *str2) {
			return 0;
		}
		else {
			str1++;
			str2++;
		}
	}
	if (*str2) return 0;
	else return 1;
}