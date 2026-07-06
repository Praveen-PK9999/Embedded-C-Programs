#include <stdio.h>

int main()
{
    long int population = 1400000000;
    long int distance = 384400;
    long int accountNumber = 1234567890;

    printf("Population     : %ld\n", population);
    printf("Distance       : %ld km\n", distance);
    printf("Account Number : %ld\n", accountNumber);

    printf("\nSize of long int : %zu Bytes\n", sizeof(long int));

    return 0;
}
