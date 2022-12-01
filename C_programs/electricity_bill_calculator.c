#include <stdio.h>
#include <math.h>

int main()
{
    int i = 1;
    char input;

    while (i > 0)
    {
        float bill_amt = 0.0;
        int units = 0;
        printf("Enter the units consumed - \n");
        scanf("%d", &units);
        if (units <= 50)
            bill_amt = 4.15 * units;
        else if (units > 50 && units <= 100)
            bill_amt = 4.15 * 50 + 5.60 * (units - 50);
        else if (units > 100 && units <= 200)
            bill_amt = 4.15 * 50 + 5.60 * 50 + 7.15 * (units - 100);
        else if (units > 200)
            bill_amt = 4.15 * 50 + 5.60 * 50 + 7.15 * 100 + 8.20 * (units - 200); //rates taken from a beliveable source

        printf("Your base electricty bill without tax and other charges is = %f \n", bill_amt);
        printf("Do you want to calculate again ? \n");
        printf(" Press 'y' for yes and  'n' for no : \n");
        scanf("%c", &input);
        input = getchar();

        if (input == 'n')
        {
            printf("Thansks for using my program! -ayush(bca-a)\n");
            i = -1;
        }
        else if (input =='y')
        {
            i++;
        }
        
    }
}