#include <stdio.h>
#include <math.h>
main()
{
     int a,b,i,count;
     while(scanf("%d %d",&a,&b)==2)
     {
     count=0;
     for(i=1;pow(i,2)<=b;i++)
        count++;
     for(i=1;pow(i,2)<a;i++)
        count--;
     if(a==0 && b==0)
        break;
    printf("%d\n",count);
     }
    return 0;
    }
