#include <stdio.h>
#include <math.h>
int main(){
	long long n;
	scanf("%lld",&n);
	printf("0   ");
	printf("1   ");
	long long i=1;
	for(;i<n;i++){
		long long m=1,n=0;
		while(m<i){
			m*=10;
			n++;
		}
		int a=pow(10,n); 
		if(i*i%a==i){
			printf("%lld   ",i);
		}
	}
	printf("\n");
	return 0;
} 
