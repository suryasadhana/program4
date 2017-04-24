#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char c;
printf("enter an character");
scanf("%c",&c);
if((c>='a' && c<='z') || (c>='A' && c<='Z'))
{
printf("alphabet");
}
else
{
printf("not an alphabet");
}
getch();
}
