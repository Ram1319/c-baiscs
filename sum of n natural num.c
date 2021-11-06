// sum of first n natural numbers
#include<stdio.h>
void main()
{
	int n, sum, even, odd;
	
    n = 10;
	sum= n*(n+1)/2;
	even = n*(n+1);
	odd = n*n;

	printf("sum of first %d natural numbers is %d\n", n,sum);
	printf("sum of first %d even natural numbers is %d\n", n,even);
	printf("sum of first %d odd natural numbers is %d\n", n,odd);
	
}
