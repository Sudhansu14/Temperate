#include<stdio.h>

main()

{
	int n,a=1,fact=1;
	printf("enter value of n");
	scanf("%d",&n);
	
    while(a<=n)
	{	fact=fact*a;
		a++;
	} 
	   
	   printf("factorial value=%d",fact);
}
