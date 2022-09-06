#include <stdio.h>

int main()
{
    int fd = 0 ;
    float interest_amt = 0.0;
    float interest_r = 0.0;
    printf("Enter the valude of the FD");
    scanf("%d" , &fd);
    printf("Enter the value of the rate of interest");
    scanf("%f"  , &interest_r);
    interest_amt = (fd*interest_r)/100;
    printf("The interest for %d is %f" , fd , interest_amt);


}