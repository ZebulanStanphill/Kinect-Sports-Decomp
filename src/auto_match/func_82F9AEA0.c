#include <math.h>

void fn_82F9AEA0(void *self, unsigned int *value)
{
    int limit;
    int divisor;
    unsigned char composite;

    if ((*value & 1) == 0) {
        (*value)++;
    }
    limit = (int)sqrt((double)*value) + 1;
    for (;;) {
        composite = 0;
        for (divisor = 3; divisor < limit; divisor += 2) {
            if (*value % divisor == 0) {
                composite = 1;
                break;
            }
        }
        if (!composite) {
            return;
        }
        *value += 2;
    }
}
