typedef struct Target_822C9B00 {
    char pad0[0x40];
    float x; /* 0x40 */
    float y; /* 0x44 */
    float z; /* 0x48 */
    float w; /* 0x4c */
} Target_822C9B00;

typedef struct Range_822C9B00 {
    float min;
    float max;
} Range_822C9B00;

typedef struct Obj_822C9B00 {
    char pad0[0x48];
    Target_822C9B00 *target; /* 0x48 */
    char pad4C[0xa8 - 0x4c];
    Range_822C9B00 x; /* 0xa8 */
    Range_822C9B00 z; /* 0xb0 */
    Range_822C9B00 w; /* 0xb8 */
} Obj_822C9B00;

extern unsigned int lbl_83265A28;

static __forceinline float RandomBits(void)
{
    union {
        unsigned int u;
        float f;
    } bits;

    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    bits.u = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
    return bits.f;
}

static __forceinline float RandomRange(float lo, float hi)
{
    return lo + (hi - lo) * (RandomBits() - 1.0f);
}

void fn_822C9B00(Obj_822C9B00 *self)
{
    self->target->y = 37.699112f;
    self->target->x = RandomRange(self->x.min, self->x.max);
    self->target->w = RandomRange(self->w.min, self->w.max);
    self->target->z = RandomRange(self->z.min, self->z.max);
}
