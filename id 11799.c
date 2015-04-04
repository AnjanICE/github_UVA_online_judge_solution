#include <stdio.h>
int main() {
    int t,i=0,j;
    int a,result,b;
    scanf("%d",&t);
    while(t--){
        result=0;
        scanf("%d",&a);
    for (j=0;j<a;j++) {
        scanf("%d",&b);
    if (b>result)
        result=b;
        }
    printf("Case %d: %d\n",++i,result);
    }
    return 0;
    }
