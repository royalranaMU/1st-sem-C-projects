
#include <stdio.h>

int
main ()
{
  int a , sum , i=0;
  printf("Enter the number  :");
  scanf("%d" , &a) ;
  
  for (i = 1 ; i <=a ; i++)
  {
      
      sum  = sum +i ;
  }
  printf("The sum of all numbers is %d " , sum) ;
  return 0;
}
