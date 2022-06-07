#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int str_comp(char* s1, char* s2);

int main() {
	char s1[30];
	char s2[30];

	printf("put a sentence : ");
	scanf("%s", s1);
	printf("put the other sentence : ");
	scanf("%s", s2);

	str_comp(s1, s2);

	return 0;
}

int str_comp(char* s1, char* s2) {
	for (int i = 0; i < 30; i++) {
		if ((s1[i] == 0)|| (s2[i] == 0)) break;

		else if (s1[i] == s2[i]) {
			printf("1");
		}
		else { 
			printf("0");
		}
	}
	return 0;
}
