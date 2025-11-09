//Insert an element into Array

#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50}, i, index_value, new_value;

    printf("\nOriginal array: ");
    for (i = 0; i < 5; i++)
    {
        printf("\t%d", arr[i]);
    }

    printf("\nEnter index value from (0 to 4): ");
    scanf("%d", &index_value);

    printf("\nEnter new value: ");
    scanf("%d", &new_value);

    arr[index_value] = new_value;

    printf("\nAfter modification: ");
    for (i = 0; i < 5; i++)
    {
        printf("\t%d", arr[i]);
    }
     return 0;
}