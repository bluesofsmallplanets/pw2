#include <stdio.h>
#include <stdint.h>

#define ROW(name, T, mn, mx)                                              \
    printf(name ": size=%zu, min=%lld, max=%lld, values=%lld\n",          \
           sizeof(T), (long long)(mn), (long long)(mx),                   \
           (long long)(mx) - (long long)(mn) + 1)

int main(void)
{
    ROW("INT8",   int8_t,   INT8_MIN,  INT8_MAX);
    ROW("UINT8",  uint8_t,  0,         UINT8_MAX);
    ROW("INT16",  int16_t,  INT16_MIN, INT16_MAX);
    ROW("UINT16", uint16_t, 0,         UINT16_MAX);
    ROW("INT32",  int32_t,  INT32_MIN, INT32_MAX);
    ROW("UINT32", uint32_t, 0,         UINT32_MAX);
    return 0;
}
