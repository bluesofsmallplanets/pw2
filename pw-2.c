#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    bool ready = a, fault = b;

    printf("MODULE_READY: %d\nFAULT_STATE: %d\nBOOL_SIZE: %zu\nFLAGS_SUM: %d\n",
           ready, fault, sizeof(bool), ready + fault);
    return 0;
}
