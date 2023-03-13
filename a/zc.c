#include <stdio.h>

int main() {
    
    printf("Enter array:\n");
    
    int arr[5];
    int sum;
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    
    
    
    for(int l=0; l<5; l++)
    {
        sum = 0;
        for(int m=l; m<5;m++)
        {
            sum += arr[m];
            printf("%d\n", sum);
        }
        printf("\n");
    }
    
    return 0;
}