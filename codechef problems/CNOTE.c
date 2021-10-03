#include <stdio.h>
int main(void) 
{
	
	int t,x,y,k,n,i,flag;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d %d %d",&x,&y,&k,&n);
	    flag=0;
	    int a[n][2];
	    for(i=0;i<n;i++)
	    {
	        scanf("%d %d",&a[i][0],&a[i][1]);
	    }
	    flag=0;
	    for(i=0;i<n;i++)
	    {
	        if((x-y)<=a[i][0])
	        {
	            if(k>=a[i][1])
	            {
	                flag=1;
	                printf("LuckyChef\n");
	                break;
	            }
	        }
	    }
	    if(flag==0)
	        printf("UnluckyChef\n");
    }
	return 0;
}