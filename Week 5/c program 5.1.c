
#include<stdio.h>
void main()
{
int a,b,c,d;
printf("Enter a,b,c,d values");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b&&a>c&&a>d)
{
printf("\na is max");
}
else if(b>a&&b>c&&b>d)
{
printf("\nb is max");
}
else if(c>a&&c>b&&c>d)
{
printf("\nc is max");
}
else
{
printf("\nd is max");
}
if(a<b&&a<c&&a<d)
{
printf("\na is min");
}
else if(b<c&&b<a&&b<d)
{
printf("\nb is min");
}
else if(c<a&&c<b&&c<d)
{
printf("\nc is min");
}
else
{
printf("\nd is min");
}
}
       
    