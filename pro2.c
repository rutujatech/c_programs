#include<stdio.h>
void main()
{

float a,b,c,d,e,f,g;

printf("enter the value a");
scanf("%f",&a);

printf("enter the value b");
scanf("%f",&b);

c=a+b;
d=a-b;
e=a*b;
f=a/b;


printf("addition of a+b=%.3lf\n",c);
printf("substraction of a-b=%f\n",d);
printf("multiplication of a*b=%f\n",e);
printf("division of a/b=%f\n",f);
}
