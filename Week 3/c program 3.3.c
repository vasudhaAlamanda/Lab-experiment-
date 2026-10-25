
#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,s,area;
printf("Enter a,b,c");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
if((a+b>c)&&(a+c>b)&&(b+c>a))
printf("%.2f is area",area);
else
printf("No such triangle exists");
}
