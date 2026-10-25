
#include<stdio.h>
void main()
{
int units;
float bill;
printf("Enter units");
scanf("%d",&units);
if(units<0)
{
printf("Invalid Units");
}
else if(units<=100)
{
bill=units*1.50;
printf("%.2f",bill);
}
else if(units<=200)
{
bill=units*2.50;
printf("%.2f", bill);
}
else if(units<=500)
{
bill=units*4.0;
printf("%.2f",bill);
}
else if(units>500)
{
bill=units*6.0;
printf("%.2f",bill);
}
}
    