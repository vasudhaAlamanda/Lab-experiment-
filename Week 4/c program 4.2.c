#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter a,b,c values");
scanf("%d%d%d",&a,&b,&c);
(a>b&&a>c)?printf("a is max"):((b>c)?printf("b is max"):printf("c is max"));
}