#include<stdio.h>
void main()
{
int s1,s2,s3,s4,s5;
float total,avg;
printf("Enter s1,s2,s3,s4,s5");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
total=s1+s2+s3+s4+s5;
printf("%.2f is total marks",total);
avg=total/5;
printf("\n%.2f is avg",avg);
}