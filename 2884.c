#include<stdio.h>
int main(void) {
    int t, m;
    scanf_s("%d %d", &t, &m);
    if (m < 45) {
        t -= 1;
        m += 15;
            if (t < 0) {
                t = 23;
            }
    }
    else {
        m -= 45;
    }
    printf("%d %d", t, m);

    return 0;
}