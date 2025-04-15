#include <stdio.h>

int Calculator(int option,int n1,int n2);

int Calculator(int option,int n1,int n2)
{
  if(option == 1)
  {
    return n1+n2;
  }

  if(option == 2)
     {
       return n1-n2;
  }     

  if(option == 3)
     {
       return n1*n2;
    }     

  if(option == 4)
  {
       return n1/n2;
   }     
}

int main()
{
  int num1,num2,ch;

  printf("Enter num1,num2:");
  scanf("%d %d",&num1,&num2);

   printf("Enter Choice(1 to 4):");
   scanf("%d",&ch);

   int(*fptr)(int option,int n1,int n2);
   fptr = Calculator;

   int res = fptr(ch,num1,num2);
   printf("Result = %d",res);

   return 0;
}


