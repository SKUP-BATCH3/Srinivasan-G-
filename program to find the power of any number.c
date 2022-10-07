//write a program to find power of any number
#include<stdio.h>
int main(){
int base,exponent,value;
printf("enter a base value:");
scanf("%d",&base);
printf("enter a exponent value:");
scanf("%d",&exponent);
value=power(base,exponent);
printf("the %dnd power of %d is%d",exponent,base,value);

}
