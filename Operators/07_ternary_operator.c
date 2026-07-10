#include <stdio.h>

int main()
{
    int a = 20, b = 10;
    int largest;

    largest = (a > b) ? a : b;

    printf("First Number  : %d\n", a);
    printf("Second Number : %d\n", b);
    printf("Largest Number: %d\n", largest);

    return 0;
}
