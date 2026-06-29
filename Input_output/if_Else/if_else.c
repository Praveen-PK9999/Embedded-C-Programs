#include <stdio.h>

int main()
{
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks >= 35)
    {
        printf("Congratulations! You Passed.\n");
    }
    else
    {
        printf("Sorry! You Failed.\n");
    }

    return 0;
}
