#include <stdio.h>

int recursive(int n,int m);

int main() {
	int n;
	int m = 1;

	printf("Put a number : ");
	scanf_s("%d", &n);

	printf("%d", recursive(n, 1));

	return 0;
}

int recursive(int n, int m) {
	if (n == 0) {
		return m;
	}
	else {
		m *= n;
		recursive(n - 1, m);
	}
}
