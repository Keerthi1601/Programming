#include <stdio.h>
#include <stdint.h>


int main()
{
  int num = 24;

  int result;
  int index;
  for(index=31;index<0;index++)
  {
    result = (num >> index)&1;
    printf("%d",result);
  

  }

  return 0;


}
