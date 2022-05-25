#include<stdio.h>

int sieve(int n);

int main() {
	int n;
	printf("Put a number : ");
	scanf_s("%d", &n); // n <=100

	printf("%d 이하의 소수\n", n);
	printf("---------------------------\n");

	sieve(n);

	return 0;
}

int sieve(int n) {
	int arr[4] = { 3,5,7,11 };
	printf("2 3 5 7 11");

	for (int i = 13; i <= n; i += 2) {
		int k = 0;
		for (int j = 0; j < 4; j++) {
			if (i % arr[j] == 0) {
				k++;
			}
		}
		if (k == 0) {
			printf(" %d", i);
		}
	}
	return 0;
}