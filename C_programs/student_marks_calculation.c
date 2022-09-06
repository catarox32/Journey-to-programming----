#include <stdio.h>

int main()
{
    int subjects=  0; float marks = 0 , sum_of_marks = 0 , avg_marks = 0;
    printf("Enter how many subjects do you want to take the avergae of : \n");
    scanf("%d" , &subjects);
    printf("Enter marks of %d subjects /n" , subjects);
    for(int i = 0 ; i<subjects ; i++)
    {
        scanf("%f" , &marks);
        sum_of_marks+=marks;
    }
    avg_marks = sum_of_marks/subjects;
    printf("Dear student , your average marks is = %f /n " , avg_marks);


}