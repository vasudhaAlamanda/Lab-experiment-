#include<stdio.h>
#include<math.h>
void main()
{
float a,r;
printf("Enter a");
scanf("%f",&a);
r=sqrt(a);
if(a<0)
printf("Root is not real");
else
printf("%.2f is square root",r);
}