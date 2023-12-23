
#include <stdio.h>

int
main ()
{
 int salary ;
float  tax ; 



printf("ENter the salry of the person : ") ; 
scanf("%d" , &salary ) ;

if( salary < 10000)
{
    printf("Your Salary is TAX free !!" ) ;
}
else if ( salary > 10000 && salary<100000 )
{
    tax = salary  * 0.10 ;
    printf("Your tax is %f" , tax) ;
}
else if ( salary > 100000 && salary < 1000000 )
{
    tax = salary * 0.25 ;
    printf("Your tax is %f" , tax) ;
    
}

else 
{
    tax = salary *0.40 ;
    printf("Your tax is %f" , tax) ;
}
  return 0;
}
