#include <stdio.h>
int main()
{
    long long int x,a,b;
    while(scanf("%lld %lld",&a,&b)==2)
{
if(a>b)
    x=a-b;
else
    x=b-a;
printf("%lld\n",x);
}
return 0;
}
