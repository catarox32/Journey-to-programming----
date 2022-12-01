#include <stdio.h>

float avg();

int main()
{
    char name[100];
    int n, count_Of_Sub = 1;
    printf("Hello ! Dear student , please enter your name : ");
    scanf("%[^\n]c", &name);
    printf("\nPlease enter the number of subjects that you have : ");
    scanf("%d", &n);
    float total = 0.0;
    int marks = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter marks of subject %d : " , i+1);
        scanf("%d", &marks);
        total += marks;
    }
    float avg = marks_avg(n, total);
    printf("The average of your marks = %f ", avg);
}

float avg(int a, int b)
{
    float avg = b / a;
    return avg;
}