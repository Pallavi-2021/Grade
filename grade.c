#include <stdio.h>
int main (void)
{
    int marks;
    printf("Enter the mark:");
    scanf("%d", &marks);
    if(marks<0 || marks>100)
    {
        printf("Invalid Input");
    }
    else if(marks<40)
    {
        printf("Grade F");
    }
    else if(marks>=40 && marks<54)
    {
        printf("Grade D");
    }
    else if(marks>=55 && marks<69)
    {
        printf("Grade C");
    }
    else if(marks>=70 && marks<84)
    {
        printf("Grade B");
    }
    else if(marks>=84 && marks<100)
    {
        printf("Grade A");
    }
    else
    {
        printf("Invalid!!");
    }
    return 0;



}
