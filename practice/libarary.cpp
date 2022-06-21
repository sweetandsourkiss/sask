#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int rgst(char(*title)[30], char(*author)[30], char(*publisher)[30], int* borrowed, int* num_total_book); // 책 등록 함수
int srch(char(*title)[30], char(*author)[30], char(*publisher)[30], int num_total_book); // 책 검색 함수
int brrw(int* borrowed); // 책 대출 함수
int rtrn(int* borrowed); // 책 반납 함수
int find(char* all, char* part);//문자열  함수

int main() {
	char title[100][30], author[100][30], publisher[100][30]; //제목, 작가, 출판사. 길이 30자 
	int borrowed[100];//대출 여부
	int input, num_total_book = 0;

	while (1) {
		printf("=========================\n");
		printf("Welcome to the DS Library!!!\n");
		printf("May I help you?(choose 1~5)\n");
		printf("1. Registering\n");
		printf("2. Searching\n");
		printf("3. Borrowing\n");
		printf("4. Returning\n");
		printf("5. Exit\n");
		printf("(Existing number of book = %d)\n", num_total_book);
		printf("=========================\n");

		scanf("%d", &input);

		if (input == 1 || input == 2 || input == 3 || input == 4) {
			switch (input) {
			case 1:
				rgst(title, author, publisher, borrowed, &num_total_book);
				break;

			case 2:
				srch(title, author, publisher, num_total_book);
				break;

			case 3:
				brrw(borrowed);
				break;

			case 4:
				rtrn(borrowed);
				break;
			}
		}
		else if (input == 5) {
			printf("Good Bye!!! :)");
			break;
		}
	}
	return 0;
}

//책 등록 함수
int rgst(char(*title)[30], char(*author)[30], char(*publisher)[30], int* borrowed, int* num_total_book) {
	printf("&Title : ");
	scanf("%s", title[*num_total_book]);
	printf("&Author : ");
	scanf("%s", author[*num_total_book]);
	printf("&Publisher : ");
	scanf("%s", publisher[*num_total_book]);

	borrowed[*num_total_book] = 0;
	(*num_total_book)++;

	printf("Registered successfully!!!\n");

	return 0;
}

//문자열  함수
int find(char* all, char* part) {
	int temp = 0;

	while (*all) {
		if (*all == *part) {
			while (*all) {
				if (*all == *part) {
					all++;
					part++;
					temp++;
				}
				else if (*part == '\0') {
					return 1;
				}
				else {
					all++;
					part = part - temp;
					temp = 0;
					break;
				}
			}
		}
		else {
			all++;
		}
	}
	return 0;
}

// 책 검색 함수
int srch(char(*title)[30], char(*author)[30], char(*publisher)[30], int num_total_book) {
	char user_input[30];

	printf("Input any part of title, author or publisher\n");
	scanf("%s", user_input);

	for (int i = 0; i < num_total_book; i++) {
		if (find(title[i], user_input)||find(author[i], user_input)||find(publisher[i], user_input)) {
			printf("Title : %s\n", title[i]);
			printf("Author : %s\n", author[i]);
			printf("Publisher : %s\n\n", publisher[i]);
		}
	}
	return 0;
}
// 책 대출 함수
int brrw(int* borrowed) {
	int user_input;

	printf("Book number Plz\n");
	scanf("%d", &user_input);

	if (borrowed[user_input] == 0) {
		borrowed[user_input] = 1;
		printf("Borrowed successfully!!!\n");
	}
	else if (borrowed[user_input] == 1) {
		printf("Already borrowed :(\n");
	}
	return 0;
}

// 책 반납 함수
int rtrn(int* borrowed) {
	int user_input;

	printf("Book number Plz\n");
	scanf("%d", &user_input);

	if (borrowed[user_input] == 1) {
		borrowed[user_input] = 0;
		printf("Returned successfully!!!\n");
	}
	else if (borrowed[user_input] == 0) {
		printf("Already returned :(\n");
	}
	return 0;
}
