#include <stdio.h>

int main()
{
    int x;
    printf("Input a number : \n" );
    scanf("%d" , &x);
    int new = x;
    if(x%2==0)
    printf("The number %d is even \n" , (int)new);
    else
    printf("The number %d is odd \n" , (int)new);

}