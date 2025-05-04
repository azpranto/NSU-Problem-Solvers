#include <stdio.h>

int main() {
    int h1, m1, h2, m2;
    scanf("%d:%d", &h1, &m1);
    scanf("%d:%d", &h2, &m2);
    int t1 = h1 * 60 + m1;
    int t2 = h2 * 60 + m2;
    int t3 = (t1 + t2)/2;
    int h3 = t3 / 60;
    int m3 = t3 % 60;
    printf("%02d:%02d\n", h3, m3);
    return 0;
}