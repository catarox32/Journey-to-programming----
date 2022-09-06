#include <stdio.h>
#define pi 3.14
int main()
{
    float r = 0 , area = 0;
    printf("ENter the radius of the circle : \n ");
    scanf("%f" , &r );
    area = pi*r*r;
    printf("The area of the circle is = %f \n " , area);
}