#include <math.h>

static __forceinline unsigned char IsPrime(int value)
{
    int limit;
    int divisor;

    if (value == 2) {
        return 1;
    }
    if (value & 1) {
        limit = (int)sqrtf((float)value) + 1;
        for (divisor = 3; divisor < limit; divisor += 2) {
            if (value % divisor == 0) {
                return 0;
            }
        }
        return 1;
    }
    return 0;
}

unsigned int fn_82FC9910(unsigned int value)
{
    if ((value & 1) == 0) {
        value++;
    }
    while (!IsPrime(value)) {
        value += 2;
    }
    return value;
}
