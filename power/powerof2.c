#include <stdio.h>
#include <stdint.h>

int main()
{
   int num = 25;


   if(num & (num-1) == 0)
   {
     printf("Given num is Power of 2\n");
   }
   else
   {
      printf("Given num is not a Power of 2\n");
   }

}
