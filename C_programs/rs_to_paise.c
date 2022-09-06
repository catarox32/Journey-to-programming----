#include <stdio.h>
 
int main()
{
    float rs = 0.00, paise = 0.00;
    printf("Enter the price of the product in rupees :  \n");
    scanf("%f",&rs);
    paise = rs*100.00;
    printf("The price of the vlaue in pasie is = %f " , paise);
    return 0 ;

}