#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int num[n];
	int i = 0;
	for(;i<n;i++)
	{
		scanf("%d",&num[i]);
		
	}
	
	int max = num[0];
	int m = 1;
	int times = 1 ;
	for(;m<n;m++)
	{
		if(max<num[m])
		{
			max = num[m];
		}else if(max==num[m])
		{
			times++;
		}
	}
	
	printf("%d %d\n",max,times);
		
	return 0;
}
