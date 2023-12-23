
#include <stdio.h>

int main()
{
    int a , b , count=0 ; 
    printf("Enter the number : ") ;
    scanf("%d" , &a) ;
    
    for ( b = 1 ; b<= a ; b++)
    {
        if(a%b==0)
        {
            count++ ; 
        }
    }
    if (count==2)
    printf(" is a Prime number");
    else
    printf("is Not a prime number"  , a ) ;
    return 0;

}
 