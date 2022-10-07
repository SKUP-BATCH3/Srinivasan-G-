//swapping of 2 numbers  without using temporary variable (USER DEFINED)
#include<stdio.h>
int main()
{
int a,b;
printf("enter the numbers a and b=:");
scanf("%d %d",&a,&b);
printf("before swapping a=%d and b=%d",a,b);
a=a-b;
b=a+b;
a=b-a;
printf("after swapping a=%d and b=%d",a,b);
}
