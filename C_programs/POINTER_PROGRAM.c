
#include <stdio.h>

    int main()
{

    int customer1, customer2, customer3;

    int *ptr[3];

    ptr[0] = &customer1;
    ptr[1] = &customer2;
    ptr[2] = &customer3;

    customer1 = 100;
    customer2 = 200;
    customer3 = 300;

    printf("Total of customer1: %d, customer2: %d, customer3: %d\n", *ptr[0], *ptr[1], *ptr[2]);

    *ptr[0] = *ptr[0] - (*ptr[0] / 10);
    *ptr[1] = *ptr[1] - (*ptr[1] / 10);
    *ptr[2] = *ptr[2] - (*ptr[2] / 10);
    printf("After giving 10 percent discount \ntotal of customer1: %d, customer2: %d, customer3: %d\n", *ptr[0], *ptr[1], *ptr[2]);

    return 0;
}
