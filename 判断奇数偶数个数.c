#include <stdio.h>
int main(){
	int N,m,a=0,b=0;
	scanf("%d",&N);
	int i=1;
	for(;i<=N;i++){
		scanf("%d ",&m);
		if(i%2==0){
			a++;
		}else{
			b++;
		}
	}
	printf("%d %d",b,a);
	
	return 0;
}
