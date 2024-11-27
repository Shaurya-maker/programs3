#include<stdio.h>
int main()
{int s,n;
s=1;
scanf("%d",&n);
while(n/10!=0)
{s++;
n=n/10;
}
printf("%d",s);
return 0;
}
