#include <stdio.h>

int main()
{
    int a = 20;
    int b = 10;

    printf("a = %d\n", a);
    printf("b = %d\n\n", b);

    // Logical AND
    printf("(a > 10 && b < 20) : %d\n", (a > 10 && b < 20));

    // Logical OR
    printf("(a < 10 || b < 20) : %d\n", (a < 10 || b < 20));

    // Logical NOT
    printf("!(a > b) : %d\n", !(a > b));

    return 0;
}
