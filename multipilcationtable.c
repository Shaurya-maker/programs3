#include<stdio.h>
int main()
{int i,n;
scanf("%d",&n);
i=0;
while(i<=9)
{i++;
printf("%d*%d=%d\n",n,i,n*i);
}
return 0;
}
