//swapping of 2 numbers without using temporary
#include<stdio.h>
int main()
{
int a=1,b=2;
printf("\nbefore swapping a=%d b=%d",a,b);
a=a-b;
b=a+b;
a=b-a;
printf("\nafter swapping a=%d b=%d",a,b);




}
