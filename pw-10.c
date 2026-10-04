#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int id;
    unsigned st;
    float v;

    scanf("%x %o %f", (unsigned *)&id, &st, &v);

    uint8_t code = (uint8_t)st;
    uint16_t checksum = (uint16_t)(id + code);

    printf("PACKET_ID: %d\nSTATUS_CODE: %u\nSTATUS_CHAR: %c\n"
           "VOLTAGE: %.2f\nCHECKSUM: %u\n",
           id, (unsigned)code, code, v, (unsigned)checksum);
    return 0;
}
