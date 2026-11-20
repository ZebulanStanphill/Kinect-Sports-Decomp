#include <math.h>

extern void *fn_8265C940(unsigned int size, unsigned int tag);
extern void fn_8265C990(void *p, unsigned int tag);
extern void fn_82BA02A8(void *value);
extern void fn_82964180(void *value);
extern void *memcpy(void *dst, const void *src, unsigned int size);
extern void *memset(void *dst, int c, unsigned int size);

typedef struct Type_82964300 {
    int pad0;
    unsigned int flags; /* 0x04 */
} Type_82964300;

typedef struct Constant_82964300 {
    unsigned int flags; /* 0x00 */
    int type;           /* 0x04 */
    int reg;            /* 0x08 */
    char padc[0x20 - 0xc];
    double value; /* 0x20 */
} Constant_82964300;

typedef struct ConstantTable_82964300 {
    char pad0[0x8];
    unsigned int count; /* 0x08 */
    char padc[0x4];
    Type_82964300 **types;    /* 0x10 */
    Constant_82964300 **data; /* 0x14 */
    char pad18[0x8];
    unsigned int capacity; /* 0x20 */
} ConstantTable_82964300;

int fn_82964300(ConstantTable_82964300 *self, Constant_82964300 *value)
{
    unsigned int index;

    if (self->count == self->capacity) {
        unsigned int capacity = self->capacity ? self->capacity * 2 : 0x400;
        Constant_82964300 **data = fn_8265C940(capacity * 4, 0x24810000);
        if (!data) {
            if (value) {
                fn_82BA02A8(value);
                fn_82964180(value);
            }
            return -1;
        }
        memcpy(data, self->data, self->count * 4);
        memset(data + self->count, 0, (capacity - self->count) * 4);
        fn_8265C990(self->data, 0x24810000);
        self->data = data;
        self->capacity = capacity;
    }
    if (value && (self->types[value->type]->flags & 0x100) != 0 && value->reg == -1) {
        double v = value->value;

        value->flags |= 0x80;
        if (v == 0.0 || v == 1.0)
            value->flags |= 1;
        if (fabs(v - (int)v) < 1e-6)
            value->flags |= 2;
        if (v >= 0.0)
            value->flags |= 4;
        if (v <= 0.0)
            value->flags |= 8;
        if (fabs(v) <= 1.0)
            value->flags |= 0x10;
    }
    self->data[self->count] = value;
    index = self->count;
    self->count = index + 1;
    return index;
}
