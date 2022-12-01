#include <stdio.h>
int main()
{
    int subjectCode;
    printf("Subject Codes are:\n\tBCA134\n\tBCA131\n\tBCA132\n\tBCA171\n\tBCA121\n\tBCA133\n\tBCA111\n");
    printf("*Do not mention BCA in the code*\nEnter Subject Code:");
    scanf("%d", &subjectCode);
    switch (subjectCode)
    {
    case 134:
        printf("Subject is C Programming");
        break;
    case 131:
        printf("Subject is Foundational Mathematics");
        break;
    case 132:
        printf("Subject is Statistics");
        break;
    case 171:
        printf("Subject is Python Programming");
        break;
    case 121:
        printf("Subject is Professional English");
        break;
    case 133:
        printf("Subject is Digital Computer Fundamentals");
        break;
    case 111:
        printf("Subject is Holistic Development");
        break;
    default:
        printf("Invalid Subject Code");
        break;
    }
}