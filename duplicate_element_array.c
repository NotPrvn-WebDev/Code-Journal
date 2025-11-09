//To eliminate duplicate elements from Array.

#include <stdio.h>

int main() {
    int arr[100], n, i, j, found = 0;

    printf("\nEnter n size: ");
    scanf("%d", &n);

    printf("\nEnter %d values:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nDuplicate values are: ");
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("\t%d", arr[i]);
                found = 1;
                break;
            }
        }
    }

    if (found == 0) {
        printf("\nNo duplicate values.");
    }

    return 0;
}