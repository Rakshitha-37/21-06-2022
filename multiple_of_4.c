#include <stdio.h>

int main()
{
   int num;
   printf("Enter number: ");
   scanf("%d", &num);
  
   if((num & 3) == 0)
   {
       printf("Number is multiple of 4\n");
   }
   else
   {
       printf("Number is not multiple of 4\n");
   }

    return 0;
}


