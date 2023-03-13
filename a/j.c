#include <stdio.h>

int main() {
   int countPositive = 0, countNegative = 0, countZero = 0;
   int i, input;

   for (i = 0; i < 5; i++) {
      printf("Enter an integer: ");
      scanf("%d", &input);
      if (input > 0) {
         countPositive++;
      } else if (input < 0) {
         countNegative++;
      } else {
         countZero++;
      }
   }

   printf("Number of positive integers: %d\n", countPositive);
   printf("Number of negative integers: %d\n", countNegative);
   printf("Number of zeros: %d\n", countZero);

   return 0;
}
