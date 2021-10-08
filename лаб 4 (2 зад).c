#include<stdio.h>


int main(){
    unsigned int b;
    scanf("%d",&b);
    b=b>>15;
    b=(b&1);
    if(b==1)
        printf("15 bit=1");
    else
        printf("15 bit=0");





}
