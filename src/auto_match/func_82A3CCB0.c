#include <string.h>

typedef struct Analyzer_82A3CCB0 {
    char pad0[0x24];
    unsigned int *values; /* 0x24 */
    char pad28[0x42de - 0x28];
    unsigned short counts[16]; /* 0x42de */
} Analyzer_82A3CCB0;

int fn_82A3CCB0(Analyzer_82A3CCB0 *self, unsigned int count)
{
    unsigned int total = 0;
    unsigned int largest = 0;
    unsigned int *values;
    unsigned int i;
    unsigned char bucket;
    unsigned int value;

    memset(self->counts, 0, sizeof(self->counts));
    values = self->values;
    for (i = 0; i < count; i++) {
        value = *values++;
        if (value >= 16) {
            self->counts[value & 7]++;
        }
    }
    for (bucket = 0; bucket < 8; bucket++) {
        value = self->counts[bucket];
        if (value > largest) {
            largest = value;
        }
        total += value;
    }
    if (largest > total / 5 && count >= 100) {
        return 2;
    }
    return 1;
}
