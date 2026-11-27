#include "xdk/vectorintrinsics.h"

typedef struct Self_823E8D20 {
    char pad0[4];
    void *world;            /* 0x04 */
    char pad8[8];
    __vector4 pos;          /* 0x10 */
} Self_823E8D20;

typedef struct Other_823E8D20 {
    char pad0[0x2c];
    int id;                 /* 0x2c */
} Other_823E8D20;

extern unsigned int fn_823E8AC0(void *world, int id, __vector4 pos, const __vector4 *points,
                                const unsigned int *keys, unsigned int count);

unsigned int fn_823E8D20(Self_823E8D20 *self, Other_823E8D20 *other, const __vector4 *points,
                         const unsigned int *keys, unsigned int count)
{
    return fn_823E8AC0(self->world, other->id, self->pos, points, keys, count);
}
