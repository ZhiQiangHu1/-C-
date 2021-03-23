# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
    int a, b;
    a = 0;
    b = 0;
    // sum=a+b;
    scanf("%d%d", &a, &b);
    if (a >= 0 && b <= 10)
        printf("%d", a + b);
    return 0;
}