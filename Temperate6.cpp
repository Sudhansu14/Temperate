#include <stdio.h>
 
main() 
{
  int n,count = 0;
  printf("Enter an integer=");
  scanf("%d", &n);
  do 
  {
    n /= 10;
    ++count;
  } while (n);

  printf("Number of digits: %d", count);
}

