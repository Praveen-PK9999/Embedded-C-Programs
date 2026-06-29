#include <stdio.h>

int main()
{
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Result = %d\n", a + b);
            break;

        case 2:
            printf("Result = %d\n", a - b);
            break;

        case 3:
            printf("Result = %d\n", a * b);
            break;

        case 4:
            if(b != 0)
                printf("Result = %.2f\n", (float)a / b);
            else
                printf("Division by zero is not allowed.\n");
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}
