#include<stdio.h>

int notation(int l, int n, int m);

int main() {
	int l, n, m;

	printf("Put a number \n");
	scanf_s("%d", &l);

	printf("Put two numbers \n");
	scanf_s("%d", &n);
	scanf_s("%d", &m);

	notation(l, n, m);

	return 0;
}

int notation(int l, int m, int n) {
	int num = l;
	int arr_m[16];
	int arr_n[16];

	for (int i = 0; i < 16; i++) {
		if (num == 0) { arr_m[i] = 0; }
		else if (num / m > 0 && num / m < 1) { arr_m[i] = num % m;	}
		else {
			arr_m[i] = num % m;
			num /= m;
		}
	}
	
	num = l;

	for (int i = 0; i < 16; i++) {
		if (num == 0) {
			arr_n[i] = 0;
		} else if (num / n > 0 && num / n < 1) {
			arr_n[i] = num % n;
		} else {
			arr_n[i] = num % n;
			num /= n;
		}
	}
	
	num = l;
	int j = 15;
	
	printf("%d(%d柳过) : ", num, m);
	
	while (1) {
		printf("%d", arr_m[j]);
		if (j == 0) break;
		j--;
	}
	
	j = 15;
	
	printf("\n%d(%d柳过) : ", num, n);
	
	while (1) {
		
		printf("%d", arr_n[j]);
		if (j == 0) break;
		j--;
	}

	return 0;
}
