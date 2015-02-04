#include <stdio.h>
long long ret(long long n)
{
    if(n==1)
        return 1;
    else if(n&1)
        return ret(3*n+1)+1;
    else
        return ret(n/2)+1;
}
long long mc(long long a,long long b)
{
    if(a>b)
        return mc(b,a);
    long long max=0,c;
      while(a<=b){
        c=ret(a);
        if(max<c)
            max=c;
            a++;
    }
return max;
}
int main()
{
    long long a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF) {
    printf("%lld %lld %lld\n",a,b,mc(a,b));}
    return 0;
}
