#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int find_loca(char* str, char* word);

int main() {
	char str[100];
	char word[100];

	printf("put a sentence \n");
	scanf("%s", str);

	printf("put a word \n");
	scanf("%s", word);

	find_loca(str, word);

	return 0;
}

int find_loca(char* str, char* word) {
	int loca=0, temp=0;
	while (*str) {
		if (*str == *word) {
			while (*str) {
				if (*str == *word) {
					str++;
					word++;
					temp++;
				}
				else if(*word == '\0') {
					printf("location is %d.", loca);
					return 0;
					
				}
				else {
					loca = loca + temp;
					word = word - temp;
					temp = 0;
					break;
				}
			}
		}
		else
		str++;
		loca++;
	}

	if (*str == '\0') {
		printf("Error!!! check your word RIGHT NOW!!!");
		return 0;
	}
}
