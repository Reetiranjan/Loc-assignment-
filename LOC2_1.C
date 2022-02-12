#include<stdio.h>
#include<conio.h>
void main()
{
int f,c;
clrscr();
printf("enter the temperature in farenheit\n");
scanf("%d",&f);
c=(f-32)*5/9;
printf("%d farenheit = %d celcius",f,c);
getch();
}