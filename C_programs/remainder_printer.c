#include <stdio.h>
 
int main()
{
    int n = 0 , divi = 0 ; double remainder;
    printf("Enter a Number : ");
    scanf("%d", &n);
    printf("Enter a divisor : ");
    scanf("%d" , &divi);
    remainder = n%divi;
    printf("The remainder of the operation is %d \n" , remainder);
    return 0;
}