#include<stdio.h>

main()
{
	int n,s,prime=1;
	
	printf("enter number=");
	scanf("%d",&n);
	
	if(n==0 && n==1)
	prime=1;
	
	for(s=2; s<=n / 2; ++s)
	{
	
	if (n%s==0)
    {
    	prime=1;
	}
}
    
  	if(prime=1)
	  printf("%d is prime number");
     
    else
    
    	printf("%d is not prime number");
	








}
