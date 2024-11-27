#include<stdio.h>
int main()
{int n,i,j;
scanf("%d",&n);
i=n%10;
while(n/10!=0)
{n=n/10;
}
j=n;
printf("%d",i+j);
return 0;
}
