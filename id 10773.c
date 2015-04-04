#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    double d,v,u,t1,t2;
    int T,i=0;
    scanf("%d",&T);
    while(T--){
        scanf("%lf %lf %lf",&d,&v,&u);
        if(v>=u||u==0||v==0){
            printf("Case %d: can't determine\n",++i);
            continue;
        }
        t1=d/u;
        t2=d/sqrt(u*u-v*v);
        printf("Case %d: %.3lf\n",++i,fabs(t2-t1));
    }
    return 0;
}
