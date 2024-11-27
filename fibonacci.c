#include<stdio.h>
int main()
{int x,y,n,s,i;
printf("enter the term you want in fibonacci series\n");
scanf("%d",&n);
s=0;
y=0;
x=0;
for(i=0;i<2;i++)
{s=x+y;
y=0;
y++;
s=0;
}
for(i;i<=n-1;i++)
{s=x+y;
x=y;
y=s;
}
printf("%d",s);
return 0;
}

