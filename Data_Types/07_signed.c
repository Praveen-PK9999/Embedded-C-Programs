#include <stdio.h>

int main()
{
    signed int temperature = -20;
    signed int profit = 5000;
    signed int altitude = -150;

    printf("Temperature : %d °C\n", temperature);
    printf("Profit      : %d\n", profit);
    printf("Altitude    : %d m\n", altitude);

    printf("\nSize of signed int : %zu Bytes\n", sizeof(signed int));

    return 0;
}
