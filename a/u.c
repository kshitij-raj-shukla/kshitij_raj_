#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // count the number of digits in the number
    for (; originalNum != 0; originalNum /= 10, ++n);

    originalNum = num;

    // calculate the sum of the nth powers of each digit
    for (; originalNum != 0; originalNum /= 10) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
    }

    // check if the result is equal to the original number
    if (result == num){
        printf("%d is an Armstrong number.", num);
    }
    else{
        printf("%d is not an Armstrong number.", num);
    }
    return 0;
}