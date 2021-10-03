#include<stdio.h>
void main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,a,count=0;
        scanf("%d %d",&n,&k);
        while(n--)
        {
            scanf("%d",&a);
            if((a+k)%7==0)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
}