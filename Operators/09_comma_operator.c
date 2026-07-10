#include <stdio.h>

int main()
{
    int a, b, c;

    // Multiple assignments using comma operator
    a = 10, b = 20, c = 30;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n\n", c);

    // Comma operator in an expression
    int result;

    result = (a += 5, b += 5, a + b);

    printf("After Modification:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("Result = %d\n", result);

    return 0;
}
