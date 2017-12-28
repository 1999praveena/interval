#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,i;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
while(a<b)
{
c=0;
for(i=2;i<=a/2;i++)
{
if(a%i==0)
{
c=1;
break;
}
}
if(c==0)
{
c=0;
printf("\n\t %d",a);
a++;
}
getch();
return 0;
}
