#include <stdio.h>

void main()
{
    int a=-4;
    int b=-1;
    int x;
    scanf("%d", &x);
    int result = a <= x && x <= b;


    printf("Number %d %d...%d :  %s  \n", x, a, b, result ? "yes":"no");
}