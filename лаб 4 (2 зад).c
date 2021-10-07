#include <stdio.h>

int main (){
    int a;
    scanf ("%d", &a);
    int b=1;
    b = b>>15;
    if (a&b)
        printf ("1\n");
    else
        printf ("0\n");
    return 0;
}
