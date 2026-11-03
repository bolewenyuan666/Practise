#include <stdio.h>
int main(){
	int n,y=0;
	scanf("%d",&n);
	int i=1;
	for (;i<=n;i++){
		int k,m=1,x;
		scanf("%d",&k);
		for(;m<=k;m++){
			scanf("%d",&x);
			y+=x; 
		}
		
	}
	printf("%d\n",y);
	return 0;
	
}
