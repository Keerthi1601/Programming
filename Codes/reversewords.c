#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void Reverse(char *start,char *end)
{ 
  while(start<end)
  { 
    char temp;

    temp = *start;
    *start++ = *end;
    *end-- = temp;
  }
}

char* Fun(char *ptr, int len)
{
  Reverse(ptr,ptr+len);

  char *start = ptr;
  char *end = ptr;

  while(*end !='\0')
  {
    if(*end == ' ')
    {
      Reverse(start,(end-1));
      start = end + 1;

    }
    end++;
  }

  Reverse(start,(end-1));
  return ptr;
}

int main()
{
  char str[] = "My name is";
  char *res;

  int len = strlen(str);
  
  res = Fun(str,len-1);
  printf("%s\n",res);

return 0;

}
