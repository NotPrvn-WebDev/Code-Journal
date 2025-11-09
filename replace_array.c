//To replace an element from array with other element

#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int i, index_value, new_value;

    printf("\nOriginal array:\n");
    for (i = 0; i < 5; i++)
    {
        printf("\t%d", a[i]);
    }

    printf("\n\nEnter index value from (0 to 4): ");
    scanf("%d", &index_value);

    printf("Enter new value: ");
    scanf("%d", &new_value);

    a[index_value] = new_value;

    printf("\nArray after modification:\n");
    for (i = 0; i < 5; i++)
{
        printf("\t%d", a[i]);
    }

    return 0;
}