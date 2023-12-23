
#include <stdio.h>
//counting number of digits 


void
main ()
{
  int x = 1234567890, count = 0;

  while (x != 0)
    {
      x = x / 10;
      count++;
    }
  printf ("%d", count);




}
