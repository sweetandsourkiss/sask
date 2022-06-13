#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int rgst_book(char* title, char* author, char* publisher, char* borrowed);
int srch_book(char* title, char* author, char* publisher);
int brrw_book(char* title, char* borrowed);
int rtrn_book(char* title, char* borrowed);

int main() {
	char title[100], author[100], publisher[100], borrowed[100];
	int n;

	while (1) {
		printf("========================= \n");
		printf("May I help you? \n");
		printf("1. book-registering\n");
		printf("2. book-searching\n");
		printf("3. book-borrowing\n");
		printf("4. book-returning\n");
		printf("(if you wanna get out of here, put 0!!!) \n");
		printf("========================= \n");

		scanf("%d", &n);

		if (n == 0) {
			printf("goodbye!!!");
			break;
		}
		
		switch (n) {
			case 1:
				rgst_book(title, author, publisher, borrowed);
				break;

			case 2:
				srch_book(title, author, publisher);
				break;

			case 3:
				brrw_book(title, borrowed);
				break;

			case 4:
				rtrn_book(title, borrowed);
				break;

			default:
				printf("Put a number between 1 and 4 Plz :( \n");
				break;
		}

	}
	return 0;
}

int rgst_book(char* title, char* author, char* publisher, char* borrowed) {
	char ttl, auth, publ;

	printf("Title : ");
	scanf("%s", &ttl);
	printf("Author : ");
	scanf("%s", &auth);
	printf("Publisher : ");
	scanf("%s", &publ);

	*title = ttl;
	*author = auth;
	*publisher = publ;
	*borrowed = 0;

	title++;
	author++;
	publisher++;
	borrowed++;

	return 0;
}

int srch_book(char* title, char* author, char* publisher) {
	char tap;
	int n = 0;
	printf("put a title or author or publisher\n");
	scanf("%s", &tap);

	while (title[n]) {
		if (tap == title[n] || tap == author[n] || tap == publisher[n]) {
			printf("========================= \n");
			printf("title = %s \n", title[n]);
			printf("author = %s \n", author[n]);
			printf("publisher = %s \n", publisher[n]);
			printf("========================= \n");
		}
		else n++;
	}
	if (title[n] == '\0') {
		printf("wrong info!!! check again Plz :( \n");
	}
	return 0;
}

int brrw_book(char* title, char* borrowed) {
	char ttl;
	int m = 0;

	printf("put a title of book \n");
	scanf("%s", &ttl);

	while (title[m]) {
		if (ttl == title[m] && borrowed[m] == 0) {
			printf("borrowed successfully!!! \n");
			borrowed[m] = 1;
			break;
		}
		else m++;
	}
	if (title[m] == '\0') {
		printf("check book title or already borrowed :( \n");
	}
	return 0;
}

int rtrn_book(char* title, char* borrowed) {
	char ttl;
	int m=0;

	printf("put a title of book \n");
	scanf("%S", &ttl);

	while (title[m]) {
		if (ttl == title[m] && borrowed[m] == 1) {
			printf("returned successfully!!! \n");
			borrowed[m] = 0;
			break;
		}
		else m++;
	}
	if (title[m] == '\0') {
		printf("check book title or already returned :( \n");
	}

	return 0;
}