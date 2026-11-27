#include "xdk/vectorintrinsics.h"

typedef struct Model_82603068 {
    char pad00[0x44];
    int index; /* 0x44 */
} Model_82603068;

typedef struct Body_82603068 {
    char pad000[0x4c];
    Model_82603068 *model; /* 0x4C */
    __vector4 position;    /* 0x50 */
    char pad060[0x40];
    float width; /* 0xA0 */
    char padA4[4];
    float depth; /* 0xA8 */
    char padAC[0x44];
    char basis[0x190]; /* 0xF0 */
    float radius;      /* 0x280 */
    char pad284[0x638];
    float scale;    /* 0x8BC */
    void **entries; /* 0x8C0 */
} Body_82603068;

extern void *fn_82602F00(Body_82603068 *self, int key, void *previous);
extern float fn_82601590(void *shape, void *basis, void *filter, __vector4 *centre);

static __forceinline void *Filter_82603068(Body_82603068 *self)
{
    if (self->model == 0) {
        return 0;
    }
    if (self->entries == 0) {
        return 0;
    }
    return self->entries[self->model->index + 0x20];
}

static __forceinline float Max_82603068(float a, float b)
{
    return a - b >= 0.0f ? a : b;
}

void fn_82603068(Body_82603068 *self, float *outRadius, __vector4 *outCentre, int key, void **cache)
{
    void *shape;
    float radius;
    __vector4 centre;

    if (self != 0) {
        shape = fn_82602F00(self, key, *cache);
        if (shape == 0) {
            *outCentre = self->position;
            *outRadius = Max_82603068(self->width * self->scale, self->depth * self->scale) * self->radius;
        } else {
            *cache = shape;
            radius = fn_82601590(shape, self->basis, Filter_82603068(self), &centre);
            *outCentre = centre;
            *outRadius = radius;
        }
    } else {
        *outCentre = __VMXGetReg(77);
        *outRadius = 1.0f;
    }
}
