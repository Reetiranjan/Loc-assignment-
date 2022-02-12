#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf(" Enter the year \n");
scanf("%d",&a);
if(a%1000==0)
printf(" Entered year is not a leap year");
else
{
if(a%4==0)
printf(" %d is a leap year\n");
else
printf("%d is not a leap year\n");
}
getch();
}