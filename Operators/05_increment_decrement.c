#include <stdio.h>

int main()
{
    int a = 10;

    printf("Initial Value : %d\n\n", a);

    // Post Increment
    printf("a++ : %d\n", a++);
    printf("Value after a++ : %d\n\n", a);

    // Pre Increment
    printf("++a : %d\n", ++a);
    printf("Value after ++a : %d\n\n", a);

    // Post Decrement
    printf("a-- : %d\n", a--);
    printf("Value after a-- : %d\n\n", a);

    // Pre Decrement
    printf("--a : %d\n", --a);
    printf("Value after --a : %d\n", a);

    return 0;
}
