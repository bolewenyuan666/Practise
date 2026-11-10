#include <stdio.h>
int main(void)
{
	long long m;
	scanf("%lld",&m);
	long long n = m/2;
	
	int i = 2;
	while(n<m){
		for(;i<n;i++){
		if(n%i==0){
			n++;
			i=2;
		}
	} 
	long long s=m-n; 
	long long a=2;
	while(a<s){
		if(s%a==0){
			break;
		}else{
			a++;
		}
	}
	if(a==s){
		printf("%lld %lld\n",s,n);
		return 0; 
	}
	n++;
	i=2;
	}
	return 0;
	}
	
	
	
