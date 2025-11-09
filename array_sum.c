//Sum of Array Elementss

#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter value at position arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("Sum of array elements = %d\n", sum);
  return 0
 ;
}