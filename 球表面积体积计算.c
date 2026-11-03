#include <stdio.h>
#include <math.h>
int main()
{
	double S,C,M=3.14159,R;
	scanf("%lf",&R);
	S=4*M*pow(R,2);
	
	C=4.0/3*M*pow(R,3);
    printf("S=%.2f\nC=%.2f\n",S,C); 
	
	
	
	return 0;
 } 
