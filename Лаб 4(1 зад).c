#include <stdio.h>

void main()
{
    int left=-4;
    int right=-1;
    int number;
    scanf("%d", &number);
    int result = left <= number && number <= right;


    printf("Number %d %d...%d :  %s  \n", number, left, right, result ? "yes":"no");
}
