
#include <stdio.h>

int
main ()
{
  int a , b ;
 printf("Enter the Number of the Table you want \n") ;
 scanf("%d", &a) ;
 for(b= 1;b <= 10 ; b++ )
 {
     printf("%d x %d = %d\n",a, b,  a*b) ;
    
 }
  return 0;

}
