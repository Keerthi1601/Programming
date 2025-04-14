#include <stdio.h>

int main(){

int x = 0x12345678;

char *ptr = (char*)&x;

if(*ptr == 0x78)
  
{
  printf("Little Endian\n");
}
 else {
 
 printf("big endian");
 } 

int y=0x1;

if((char)y&1)
{
  printf("Little\n");
}
else
{
  printf("Big\n");
}
 return 0;

}
