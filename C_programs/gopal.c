#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0 , sum = -1  , t = 0; 
    printf(" Enter the number of days : ");
    scanf("%d" , &n);
    printf(" Enter the time taken for each problem : ");
    scanf("%d" , &t);
    for(int i = 0 ; i<n ; i++)
    sum+=2;
    int total_time = sum*t;
    float hours_taken = total_time/60.0;
    printf("The total number of hours taken %f" , hours_taken);  
    return 0 ;
}