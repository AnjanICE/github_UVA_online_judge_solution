#include<stdio.h>
int main() {
  long n,k,res;
  while(scanf("%ld%ld",&n,&k)==2)
   {
    res=n+(n-1)/(k-1);
    printf("%ld\n",res);
  }
  return 0;
}
