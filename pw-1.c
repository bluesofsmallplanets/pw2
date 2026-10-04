#include <stdio.h>

int main(void)
{
    int id;
    unsigned ver, st;

    scanf("%d %x %o", &id, &ver, &st);
    printf("UNIT_ID: %d\nUNIT_VERSION: %u\nUNIT_STATUS: %u\nSUM: %u\n",
           id, ver, st, id + ver + st);
    return 0;
}
