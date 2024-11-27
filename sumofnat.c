#include<stdio.h>
int main()
{int i,s,n;
s=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
s=s+i;
printf("%d is sum of first %d natural nubers",s,n);
return 0;
}
