#include<stdio.h>
void main()
{

int a,b,c,d,e,f,g;

printf("enter the value a");
scanf("%d",&a);

printf("enter the value b");
scanf("%d",&b);

c=a+b;
d=a-b;
e=a*b;
f=a/b;
g=a%b;

printf("addition of a+b=%d\n",c);
printf("substraction of a-b=%d\n",d);
printf("multliplication of a*b=%d\n",e);
printf("division of a/b=%d\n",f);
printf("reminder of a%b=%d",g);
}
