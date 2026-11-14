#include <string.h>

typedef struct Self_82A43F70 {
    char pad0[0xc];
    unsigned int *values;       /* 0x0c */
} Self_82A43F70;

extern int fn_82A43408(Self_82A43F70 *self, int arg);

int fn_82A43F70(Self_82A43F70 *self, unsigned int count, const unsigned int *values, int arg)
{
    if (memcmp(self->values, values, count * 4) != 0) {
        memcpy(self->values, values, count * 4);
        return fn_82A43408(self, arg);
    }
    return 0;
}
