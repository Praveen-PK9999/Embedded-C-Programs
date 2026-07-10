#include <stdio.h>

int main()
{
    int a = 10, b = 5, c = 2;
    int result;

    // Multiplication has higher precedence than addition
    result = a + b * c;
    printf("a + b * c = %d\n", result);

    // Parentheses change the order
    result = (a + b) * c;
    printf("(a + b) * c = %d\n", result);

    // Division before addition
    result = a + b / c;
    printf("a + b / c = %d\n", result);

    // Multiple operators
    result = a - b + c;
    printf("a - b + c = %d\n", result);

    return 0;
}
