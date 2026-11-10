#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int num[10];
	int i = n;
	for(;i>=1;i--)
	{
		scanf("%d",&num[i-1]);
	}
	
	unsigned m;
	scanf("%u",&m);
	
	printf("%d",num[m]);
	
	
	
	return 0;
}
