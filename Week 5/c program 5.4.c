
#include<stdio.h>
void main()
{
float a,b;
int symbol;
printf("Enter a,b values");
scanf("%f%f",&a,&b);
printf("\nEnter Symbol");
scanf("%d",&symbol);
switch(symbol)
{
case 1:1;
       printf("%.2f",a+b);
       break;
 case 2:2;
       printf("%.2f",a-b);      
       break;
case 3:3;
       printf("%.2f",a*b);       
       break;
 case 4:4;
        if(b==0)
       printf("\nDivision by zero is not possible");
       else
        printf("%.2f",a/b);
        break;
default :
         printf("\nInvalid option");       
}
}         
       
    