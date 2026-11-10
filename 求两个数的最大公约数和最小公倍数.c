#include <stdio.h>
int main(){
	int M,N;
	scanf("%d %d",&M,&N);
	
	int MIN,MAX;
	if(M>=N) MAX=M,MIN=N;
	else MAX=N,MIN=M;
	
	while(M%MIN!=0||N%MIN!=0){
		MIN--; 
	} 
	
	int m=MAX;
	while(m%M!=0||m%N!=0){
		m++;
	}
	printf("%d %d\n",MIN,m);
	return 0;
} 
