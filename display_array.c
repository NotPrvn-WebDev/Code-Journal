//Accessing the elements and displaying the elements by using array

#include <stdio.h>
int main()
{
    int arr[100], n, i;
    printf("\n enter array size:");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        printf("\n enter value at position arr[%d]:", i);
        scanf("%d", &arr[i]);
    }

    printf("\n The array values are :");

    for (i = 0; i < n; i++)
    {
        printf("\t %d", arr[i]);
    }

   return 0;
}