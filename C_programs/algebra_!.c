#include <stdio.h>

int main()
{
    int a = 0 , b= 0 , c = 0;
    printf("Enter three values : \n");
    scanf("%d" , &a);
    scanf("%d" , &b);
    scanf("%d" , &c);

    float x = a/(b+c);

    printf("The vlaue of %d/%d+%d is %f" , a , b , c , x);
    
}