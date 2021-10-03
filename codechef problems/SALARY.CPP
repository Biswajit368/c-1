#include <iostream>
using namespace std;
int find_small(int N,int a[])
{
    int min=a[0];
    for(int i=0;i<N;i++)
    {
       if(a[i]<min)
       {
           min=a[i];
       }
    }
    return min;
}

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N,sum=0,count;
	    cin>>N;
	    int a[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>a[i];
	    }
	    count=find_small(N,a);
	     for(int i=0;i<N;i++)
	    {
	       sum+=a[i]-count;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
