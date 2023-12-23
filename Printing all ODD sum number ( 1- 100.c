
#include <stdio.h>
//printing all odd sum of number ( 1- 100)

void
main ()
{
  int x = 1 , sum = 0;

  while (x<=100)
    {

      sum = sum + x;

      printf ("%d\n", sum);
      
      x = x + 2;

    }




}
