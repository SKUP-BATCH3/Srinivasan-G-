//program to convert date into years
#include<stdio.h>
int main()
{
int years,weeks,days;
printf("enter the number of days");
scanf("%d",&days);
years=days/365;
weeks=days/7;
printf("\nno.of days=%d",days);
printf("\nno.of weeks=%d",weeks);
printf("\nno.of years=%d",years);

}
