#include<stdio.h>
int main()
{int n,i,j;
j=0;
scanf("%d",&n);
while(n!=0)
{i=n%10;
j=j*10+i;
n=n/10;
}
printf("%d",j);
return 0;
}
