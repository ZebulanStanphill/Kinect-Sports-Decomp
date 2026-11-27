#include "xdk/vectorintrinsics.h"

typedef struct Float3_825E4598 {
    float x;
    float y;
    float z;
} Float3_825E4598;

typedef struct Item_825E4598 {
    __vector4 position;     /* 0x00 */
    Float3_825E4598 offset; /* 0x10 */
    char pad1c[0x24 - 0x1c];
    int handle; /* 0x24 */
    char pad28[0x30 - 0x28];
} Item_825E4598;

typedef struct Spawner_825E4598 {
    char pad0[0x74];
    float spread; /* 0x74 */
    int count;    /* 0x78 */
    char pad7c[0x80 - 0x7c];
    float rangeA[2]; /* 0x80 */
    float rangeB[2]; /* 0x88 */
    char pad90[0xa0 - 0x90];
    Item_825E4598 items[8]; /* 0xa0 */
    __vector4 origin;       /* 0x220 */
    Float3_825E4598 offset; /* 0x230 */
} Spawner_825E4598;

extern unsigned int lbl_83265A28;

extern __vector4 fn_8255A160(__vector4 pos, float angle, float distance);
extern void fn_825E42D8(Spawner_825E4598 *self, Item_825E4598 *item, int now);
extern void fn_825E4220(Spawner_825E4598 *self, Item_825E4598 *item);

static __forceinline unsigned int NextRandom(void)
{
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    return lbl_83265A28;
}

static __forceinline float RandomUnit(void)
{
    union {
        unsigned int bits;
        float value;
    } random;

    random.bits = (NextRandom() & 0x7fffff) | 0x3f800000;
    return random.value - 1.0f;
}

void fn_825E4598(Spawner_825E4598 *self)
{
    int i;
    Item_825E4598 *item;
    float spread;
    Float3_825E4598 *offset;

    for (i = 0; i < self->count; i++) {
        item = &self->items[i];
        item->handle = -1;
        item->position = self->origin;
        spread = self->spread;
        if (spread != 0.0f) {
            item->position =
                fn_8255A160(item->position, RandomUnit() * 6.2831855f - 3.1415927f, RandomUnit() * spread);
        }
        offset = &self->offset;
        item->offset.x = offset->x;
        item->offset.y = offset->y;
        item->offset.z = offset->z;
        if ((self->rangeA[0] == 0.0f && self->rangeA[1] == 0.0f) ||
            (self->rangeB[0] == 0.0f && self->rangeB[1] == 0.0f)) {
            fn_825E42D8(self, item, 1);
        } else if (RandomUnit() > 0.5f) {
            fn_825E42D8(self, item, 1);
        } else {
            fn_825E4220(self, item);
        }
    }
}
