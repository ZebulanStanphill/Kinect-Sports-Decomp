typedef struct Vec4_82B90378 {
    float x; /* 0x0 */
    float y; /* 0x4 */
    float z; /* 0x8 */
    float w; /* 0xc */
} Vec4_82B90378;

typedef struct Accumulator_82B90378 {
    char pad0[0x5c];
    Vec4_82B90378 *pending; /* 0x5c */
    char pad60[0x8];
    unsigned int count; /* 0x68 */
} Accumulator_82B90378;

extern void *memset(void *dst, int value, unsigned int size);

/* Adds the pending values to out and clears them. */
void fn_82B90378(Accumulator_82B90378 *self, Vec4_82B90378 *out)
{
    unsigned int i;

    for (i = 0; i < self->count; i++) {
        Vec4_82B90378 *src = &self->pending[i + 1];

        out[i].x += src->x;
        out[i].y += src->y;
        out[i].z += src->z;
        out[i].w += src->w;
    }
    memset(self->pending, 0, (self->count + 2) * sizeof(Vec4_82B90378));
}
