#include <stdio.h>

int main()
{
    int a = 10;   // Binary: 1010
    int b = 6;    // Binary: 0110

    printf("a = %d\n", a);
    printf("b = %d\n\n", b);

    printf("Bitwise AND (&)  : %d\n", a & b);
    printf("Bitwise OR (|)   : %d\n", a | b);
    printf("Bitwise XOR (^)  : %d\n", a ^ b);
    printf("Bitwise NOT (~a) : %d\n", ~a);
    printf("Left Shift (a<<1): %d\n", a << 1);
    printf("Right Shift(a>>1): %d\n", a >> 1);

    return 0;
}
