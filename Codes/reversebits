#include <stdio.h>
#include <stdint.h>

int main()
{
  uint8_t byte = 0xab;
  int size;
  int num;

  size = sizeof(byte)*8;

  for(int index=0;index<size;index++)
  {
    num = (byte &(1<<index))?1:0;
    /*if(index%4 == 0)
    {
      printf(" ");
    }*/
      printf("%d",num);
  }

printf("\n");
}
