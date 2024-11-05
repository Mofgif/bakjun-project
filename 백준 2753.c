#include<stdio.h>
int main(void) {
	int y;
	scanf_s("%d", &y);

	if (y % 4 == 0) {
		if (y % 100 != 0) {
			printf("%d", 1);
		}
		else if (y % 400 == 0) {
			printf("%d", 1);
		}
		else {
			printf("%d", 0);
		}

	}
	else {
		printf("%d", 0);
	}
	return 0;
}