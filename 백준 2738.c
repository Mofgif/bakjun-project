#include<stdio.h>
int main(void) {
	int a[100][100];
	int b[100][100];
	int n, m;
	scanf_s("%d %d", &n,&m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf_s("%d",&a[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf_s("%d", &b[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ",a[i][j] + b[i][j]);
		}
		printf("\n");
	}
	return 0;
}