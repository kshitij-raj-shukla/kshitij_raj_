#include <stdio.h>

int main()
{
   int num, sum = 0, lastDigit;

   printf("Enter: ");
   scanf("%d", &num);

   while (num > 0)
   {
      lastDigit = num % 10;
      sum += lastDigit;
      num /= 10;
   }

   printf("Sum of the digits: %d\n", sum);

   return 0;
}
