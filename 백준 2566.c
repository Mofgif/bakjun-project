#include<stdio.h>
int main(void) {
	int n[2][2];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			scanf_s("%d", &n[i][j]);
		}
	}
	int a, b;
	int M = n[0][0];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (M <= n[i][j]) {
				M = n[i][j];
				a = i+1;
				b = j+1;
			}
		}
	}
	printf("%d\n%d %d", M, a, b);
	return 0;
}