
#include <stdio.h>

int main()
{
    int arr[100];
    int sum, product, i;
    int n = 0;

    printf("Enter the number of elements to be in the array : ");
    scanf("%d", &n);
    printf("\nEnter elements : \n");
    for (i = 0; i < n; i++)
    {
        printf("Enter value %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    sum = 0;
    product = 1;
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        product = product * arr[i];
    }
    printf("\nSum of array is     : %d", sum);
    printf("\nProduct of array is : %d\n", product);

    return 0;
}d