#include <stdio.h>
int main()
{
    int t,i=0,n,k,p;
    scanf("%d",&t);
    while(t-- &&scanf("%d %d %d",&n,&k,&p)==3)
    {
        while(p--)
            {
                k++;
                if(k>n)
                k=1;
            }
        printf("Case %d: %d\n",++i,k);
        }
    return 0;
}
