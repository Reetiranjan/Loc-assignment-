#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter the number\n");
scanf("%d",&n);
switch(n>0)
{
case 1:
printf(" %d is possitive \n",n);
break;
case 0:
switch(n<0)
{
case 1:
printf(" %d is negetive \n",n);
break;
case 0:
printf(" You entered 0\n ");
break;
}
break;
}
getch();
}