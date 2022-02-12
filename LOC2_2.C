#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf(" Enter three numbers\n");
scanf("%d%d%d",&a,&b,&c);
if(a>=b)
{
if(a>=c)
printf(" %d is your greatest number",a);
else
printf(" %d is your greatest number",c);
}
else
{
if(b>=c)
printf(" %d is your greatest number",b);
else
printf(" % is yours greatest number",c);
}
getch();
}