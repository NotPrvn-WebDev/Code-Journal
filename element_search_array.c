//To search an element in an array(Linear Search)

#include <stdio.h>

int main() {
    int arr[100], n, i, j, found = 0;

    printf("\nEnter n value: ");
    scanf("%d", &n);

    printf("\nEnter %d values:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    return 0;
}