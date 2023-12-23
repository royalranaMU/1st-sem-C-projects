
#include <stdio.h>

int
main ()
{
 int a ;
 printf("Enter the number : ") ;
 scanf("%d" , &a) ;
 
 if( a%2==0)
 {
     printf("The nuber is an Even number \n") ;
 }
else
{
    printf("The number is an odd number ") ;
}
  return 0;
}
