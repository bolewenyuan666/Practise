#include <stdio.h>
int main(){
	 int N;
	 scanf("%d",&N);
	 
	 int i=0,sum=0;
	 for(;i<N;i++){
	 	int a;
	 	scanf("%d",&a);
	 	sum+=a;
	 }
	 int num;
	 scanf("%d",&num);
	 
	 int b;
	 if(sum%num==0){
	 	b=sum/num;
	 }else{
	 	b=sum/num+1;
	 }
	 printf("%d\n",b);
	
	 
	
	 return 0;
}
