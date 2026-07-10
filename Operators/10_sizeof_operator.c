#include <stdio.h>

int main()
{
    int num = 10;
    float marks = 95.5;
    char grade = 'A';
    double salary = 45000.75;

    printf("Size of char         : %zu Byte\n", sizeof(char));
    printf("Size of int          : %zu Bytes\n", sizeof(int));
    printf("Size of float        : %zu Bytes\n", sizeof(float));
    printf("Size of double       : %zu Bytes\n", sizeof(double));

    printf("\nSize of Variables\n");

    printf("num      : %zu Bytes\n", sizeof(num));
    printf("marks    : %zu Bytes\n", sizeof(marks));
    printf("grade    : %zu Byte\n", sizeof(grade));
    printf("salary   : %zu Bytes\n", sizeof(salary));

    return 0;
}
