#include <stdio.h>
#include <string.h>

void check_name()
{
    // the reason the size of string / char[] needs to be 9 but we take
    // input of size 8 is because strings in c use a null byte to signify their ending
    // so we need to leave 1 empty space for that (scanf will add it) if you don't do this and take input of same size and
    // then if you print it for example your printf may not find the null byte to stop at in time and
    // start reading other parts of memory after it
    char name[9];
    printf("Enter your name: ");
    scanf("%8s", name);

    // even though for booleans in c we use 1 for true and 0 for false the return of `strcmp` and
    // other functions signifies success / failure instead of true / false similar to
    // process exit codes which means 0 being success and anything else being failure
    if (strcmp("Ayush", name) == 0)
    {
        printf("Hello %s\n", name);
    }
    else if (strcmp("Davinder", name) == 0)
    {
        printf("Hello %s\n", name);
    }
    else
    {
        printf("I don't know you\n");
    }
}

// search number throughout the array and return index if found else -1
int binary_search(int arr[], int size, int search)
{
    int low = 0;
    int high = size - 1;
    int mid;

    while (high - low > 1)
    {
        mid = (int)((high + low) / 2);
        if (arr[mid] > search)
        {
            high = mid - 1;
        }
        else
        {
            low = mid;
        }
    }

    if (arr[mid] == search)
    {
        return mid;
    }
    else if (arr[low] == search)
    {
        return low;
    }
    else if (arr[high] == search)
    {
        return high;
    }
    else
    {
        return -1;
    }
}

void fizz_buzz(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("FizzBuzz\n");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz\n");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n", i);
        }
    }
}

int main()
{
    // taking input and using if/else if/else
    // check_name();



    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // // use binary search to search items through an array
    // int index = binary_search(arr, 10, 4);
    // if (index == -1)
    // {
    //     printf("Item not found");
    // }
    // else
    // {
    //     printf("%d found at index %d\n", 4, index);
    // }



    // fizz buzz
    // fizz_buzz(1, 100);

    return 0;
}
