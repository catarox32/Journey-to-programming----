#include <stdio.h>

int main()
{
    int x=0 ; int y=0 ;int z=0;
    printf("Enter your marks in 3 subjects");
    scanf("%d%d%d" , &x , &y , &z);
    float avg = (x+y+z)/3.0;
    printf("The average of your marks is %f\n",(int)avg);
    return 0;
}