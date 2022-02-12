#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter the number\n");
scanf("%d",&n);
if(n%5==0 && n%11==0)
printf(" %d is divisible by both 5 and 11\n",n);
else
printf(" %d is not divisible by both 5 and 11\n",n);
getch();
}