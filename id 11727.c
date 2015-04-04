#include <stdio.h>
main()
{
    int a,b,c,t,i=0,res;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&a,&b,&c);
        {
            if((a>b && a<c)||(a<b&&a>c))
                res=a;
            else if((b>a&&b<c)||(b<a&&b>c))
                res=b;
            else if((c>b && c<a)||(c<b)&&c>a)
                res=c;
        }
    printf("Case %d: %d\n",++i,res);}
return 0;
}
