#include<stdio.h>

main()

{
	int num, sum=0,firstdigist,lastdigist;
	
	printf("enter any number to find first and lastdigist");
	scanf("%d",&num);
	lastdigist=num%10;
	while(num>=10)
	{
		num=num/10;
	}
	firstdigist=num;
    sum = firstdigist+lastdigist;
    
     printf("sum of firstdigist and lastdigdist=%d",sum);
     
}

