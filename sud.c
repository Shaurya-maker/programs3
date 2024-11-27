#include<stdio.h>
int main()
{int s,i,n;
scanf("%d",&n);
s=0;
while(n%10!=0)
{i=n%10;
n=n/10;
s=s+i;
}
printf("%d",s);
return 0;
}
