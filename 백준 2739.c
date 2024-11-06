#include<stdio.h>
int main(void) {
	int t;
	int i;
	scanf_s("%d", &t);
	for (i = 1; i < 10; i++) {
		printf("%d * %d = %d\n",t,i, t*i);
	}
	return 0;
}