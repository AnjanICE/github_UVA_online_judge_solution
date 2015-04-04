#include <stdio.h>
#include <math.h>
int main()
{
    double f,l,v,volume;
    while(scanf("%lf %lf",&l,&f)==2){
    if(l==0 || f==0)
        break;
    v=sqrt(2*f*l);
    volume=(f/v)*3600;/*1/(v/(2*f)+l/v)*3600;*//*f is the declaration due to break*/
    printf("%.8lf %.8lf\n",v,volume);
    }
    return 0;
}
