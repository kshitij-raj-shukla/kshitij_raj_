#include <stdio.h>
int main()
{
    int n, i = 0;
    printf("enter the no.:");
    scanf("%d", &n);

    do
    {
        printf("\n%d", i);
        i = i + 1;
    } while (i < n);
    return 0;
}