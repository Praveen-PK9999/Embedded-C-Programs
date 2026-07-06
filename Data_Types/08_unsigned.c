#include <stdio.h>

int main()
{
    unsigned int students = 120;
    unsigned int adcValue = 4095;
    unsigned int counter = 50000;

    printf("Students : %u\n", students);
    printf("ADC Value: %u\n", adcValue);
    printf("Counter  : %u\n", counter);

    printf("\nSize of unsigned int : %zu Bytes\n", sizeof(unsigned int));

    return 0;
}
