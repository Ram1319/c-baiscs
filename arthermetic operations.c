// printing all arthemtic operations
#include<stdio.h>
void main()
{
	int  a, b, s, d, p, q, r;
	a=12;
	b=8;
	
	s=a+b;
	d=a-b; 
	p=a*b; 
	q=a/b; 
	r=a%b;
	
	printf("sum of %d and %d is %d \n", a,b,s);
	printf("differnce of %d and %d is %d\n", a,b,d);
	printf("product of %d and %d is %d\n", a,b,p);
	printf("Quotient of %d and %d is %d\n", a,b,q);
	printf("reminder of %d and %d is %d", a,b,r);
}
