#include <stdio.h>
#include <stdint.h>

int main()
{
   int num = 25;


   if(num & (num-1) == 0)
   {
       int cnt =0;
       while(num&1 == 0)
       {
         cnt++;
         num >>=1;
       }
       if(cnt%2 == 0)
       {
         printf("Given num is Power of 4\n");
       }
   }
   else
   {
      printf("Given num is not a Power of 4\n");    
   }

}
