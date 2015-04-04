#include <stdio.h>
int main()
{
	int n;
	printf("PERFECTION OUTPUT\n");
	while(scanf("%d",&n)) {
		if(n==0)
            break;
		int sum=0,i;
		for(i=1;i<=n/2;i++)
        {
			if(n%i==0)
            sum=sum+i;
		}
		printf("%5d  ",n);
		if (sum==n)
			printf("PERFECT");
		else if(sum<n)
			printf("DEFICIENT");
		else
			printf("ABUNDANT");
			printf("\n");
	}
	printf("END OF OUTPUT\n");
	return 0;
}
