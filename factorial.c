#include<stdio.h>
void main()
{
int n,i=1,f=1;//declaration and initialize i and f 
clrscr();
printf("enter the number:");
scanf("%d",&n);//get the number for factorial
while(i<=n)
{
f=f*i;//
i++;//increment i
}
printf("factorial is %d",f);
}
