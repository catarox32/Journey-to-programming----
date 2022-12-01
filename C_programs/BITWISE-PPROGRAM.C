#include <stdio.h>
int main()
{
    int choice, a, b;
    char ch; 
cont:
    printf("Dear user, please enter your choice :- \n1 for AND\n2 for OR\n3 for XOR\n4 for compliment\n5 for left shift\n6 for right shift\n\t:");
    scanf("%d", &choice);
    printf("\n\nIn case of compliment, right shift and left shift only your first number will be taken.");
    printf("\n\n\nEnter number 1st number : ");
    scanf("%d", &a);
    printf("\n\n\nEnter 2nd number : ");
    scanf("%d", &b);
    switch(choice)
    {
        case 1:
            printf("\nThe AND df %d and %d is = %d", a, b, a & b);
            break;
        case 2:
            printf("\nThe OR of %d and %d is = %d", a, b, a | b);
            break;
        case 3:
            printf("\nThe XOR. of %d and %d is = %d", a, b, a ^ b);
        case 4:
            printf("\nThe compliment of %d is = %d", a, ~a);
            break;
        case 5:
            printf("\nThe left-shift of %d is = %d", a, a<<b);
            break;
        case 6:
            printf("\nThe right-shift of %d is = %d", a, a>>b);
            break;
        default:
            printf("\nWRONG INPUT");
            break;
    }
    printf("\n\n\nPress Q to exit or C to continue : ");
    scanf("%c", &ch);
    ch = getchar();
    if(ch=='C')
        goto cont;
    return 0;
}