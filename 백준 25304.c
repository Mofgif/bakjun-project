#include<stdio.h>
int main(void) {
	int a, b, t, total;
	scanf_s("%d\n %d", &total, &t);
	int sum = 0;
	for (int i = 0; i < t; i++) {
		scanf_s("%d %d", &a, &b);
		sum += (a * b);
	}
	if (sum == total) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	return 0;
}