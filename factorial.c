#include<stdio.h>
int main()
{int s,i,n;
scanf("%d",&n);
s=1;
for(i=1;i<=n;i++)
s=s*i;
printf("%d",s);
return 0;
}
