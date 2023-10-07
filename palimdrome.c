#include<stdio.h>
int main()
{
int n,temp,rev=0,r;
printf("enter the number\n");
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
rev=(rev*10)+r;
n=n/10;
}
if(temp==rev)
printf("It is palimdrome number\n");
else
printf("It is not palimdrome number\n");
return 0;
}

