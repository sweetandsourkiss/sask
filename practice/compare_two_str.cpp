#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int compare_two_str(char* str1, char* str2);

int main() {
	char str1[100];
	char str2[100];

	printf("�� ���ڿ��� �Է��ϼ���.\nù��° ");
	scanf("%s", str1);
	printf("�ι�° ");
	scanf("%s", str2);

	printf("�� ���ڿ��� �����Ѱ�?\n");

	if (compare_two_str(str1, str2)) {
		printf("����!!!");
	}
	else {
		printf("�ٸ���!!!");
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