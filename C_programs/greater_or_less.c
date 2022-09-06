#include <stdio.h>

int main(_)
{
    int a = 0;
    printf("Enter a number : \n");
    scanf("%d" , &a);
    if(a>=100)
    printf("The number %d is greater than or equal to 100" , a);
    else if(a<100)
    printf("The number %d is lesser than 100  " , a);
}
