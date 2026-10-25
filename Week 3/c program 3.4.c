
#include<stdio.h>
void main()
{
float u,t,a,distance;
printf("Enter u,t,a");
//u=initial velocity,t=time,a=acceleration//
scanf("%f%f%f",&u,&t,&a);
distance=(u*t)+(0.5*a*t*t);
printf("%.2f is distance travelled by object",distance);
}