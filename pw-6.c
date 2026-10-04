#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t x;

    scanf("%hhu", &x);

    uint8_t add = x + 10, mul2 = x * 2, sqr = x * x;

    printf("ADD: %u\nMUL2: %u\nSQR: %u\n",
           (unsigned)add, (unsigned)mul2, (unsigned)sqr);
    return 0;
}
