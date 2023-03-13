#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i, j, k;
  int a[100];

  // Taking input for the length of the array
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  // Taking input for the elements of the array
  printf("Enter the elements of the array: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  // Bringing the last two elements to the front
  i = n - 2;
  j = n - 1;
  while (i >= 0) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    i--;
    j--;
  }

  // Printing the updated array
  printf("The updated array is: ");
  for (k = 0; k < n; k++) {
    printf("%d", a[k]);
  }

  return 0;
}
