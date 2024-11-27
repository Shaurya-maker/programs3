#include<stdio.h>
int main()
{int s,i,n,j;
scanf("%d",&n);
i=0;
j=n;
while(n!=0)
{s=n%10;
i=i*10+s;
n=n/10;
}
if(i==j)
printf("palindrome");
else
printf("not palindrome");
return 0;
}
