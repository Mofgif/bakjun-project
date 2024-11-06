#include<stdio.h>
int main(void) {
	int n;
	scanf_s("%d", &n);
	int t = n / 4;
	for (int i = 0; i < t; i++) {
		printf("long ");
	}
	printf("int");
	return 0;
}