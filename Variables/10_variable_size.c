#include <stdio.h>

int main()
{
    int age = 23;
    float cgpa = 7.60;
    char grade = 'A';
    double percentage = 89.75;
    long long mobile = 9876543210;

    printf("Size of int        : %zu Bytes\n", sizeof(age));
    printf("Size of float      : %zu Bytes\n", sizeof(cgpa));
    printf("Size of char       : %zu Byte\n", sizeof(grade));
    printf("Size of double     : %zu Bytes\n", sizeof(percentage));
    printf("Size of long long  : %zu Bytes\n", sizeof(mobile));

    return 0;
}
