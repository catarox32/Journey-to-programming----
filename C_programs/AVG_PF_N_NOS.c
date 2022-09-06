#include <stdio.h>
int main()
{
    int a = 0 , temp = 0 , avg = 0 , sum = 0 ;
    printf("How many numbers you wnat to find avg of");
    scanf("%d" , &a);
    for(int i =0 ; i<a ; i++)
    {
        printf("Enter Your number : ");
        scanf("%d" , &temp);
        sum = sum + temp;
    }
    avg = sum/a;
    printf("The avg of your numbers is %d " , avg);


}