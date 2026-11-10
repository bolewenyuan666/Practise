#include <stdio.h>
int main()
{
	long long n,x;
	scanf("%lld %lld",&n,&x);
	
	long long i = 1,times = 0;
	for(;i<=n;i++)
	{
		long long t = i;
		while(t>=10)
		{
			if(t%10==x)
			{
				times++;
			}
			t/=10;	
		
	    }
	    
	
	    if(t==x)
	    {
	    		times++;
		}		
	}
	 
	 printf("%lld\n",times);
	
	return 0;
}
