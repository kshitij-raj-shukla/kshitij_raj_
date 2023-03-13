#include <stdio.h>

int main() {
    int n, i;
    long long sum = 0;
    int base = 9;
    int multiplier = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += base * multiplier;
        base *= 10;
        multiplier++;
    }

    printf("The sum of the first %d numbers is %lld\n", n, sum);

    return 0;
}

