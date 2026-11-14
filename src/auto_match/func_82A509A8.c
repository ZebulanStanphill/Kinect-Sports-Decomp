#include <string.h>

typedef struct Self_82A509A8 {
    char pad0[4];
    unsigned int columns;       /* 0x04 */
    unsigned int rows;          /* 0x08 */
    char pad0c[8];
    float *values;              /* 0x14 */
} Self_82A509A8;

extern int fn_82A43408(Self_82A509A8 *self, int arg);

int fn_82A509A8(Self_82A509A8 *self, int a1, int a2, const float *values, int arg)
{
    if (memcmp(self->values, values, self->rows * self->columns * 4) != 0) {
        memcpy(self->values, values, self->rows * self->columns * 4);
        return fn_82A43408(self, arg);
    }
    return 0;
}
