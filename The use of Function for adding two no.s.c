
#include <stdio.h>

int sum ()
{
    int c;
    int a = 0 ;
    int b = 0 ;
    printf("Input the two new number\n") ;
    scanf("%d%d" ,&a, &b ) ;
    c = a + b ;
    return c ;
   
}
void main ()
{
    int n ;
    n = sum ();
    printf("The Addition of new number = %d\n" , n);
}