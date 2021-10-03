#include <stdio.h>

void  main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    long long int c,sum=0;
	    scanf("%d",&n);
        scanf("%Ld",&c);
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	        sum+=a[i];
	    }
	    if(sum>c)
	    {
	        printf("No\n");
	    }
	    else
	    {
	        printf("Yes\n");
	    }
	}
	
}
