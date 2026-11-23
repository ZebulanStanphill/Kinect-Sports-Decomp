typedef struct Gate_824B5608 {
    float threshold;     /* 0x0 */
    unsigned int frames; /* 0x4 */
    int key;             /* 0x8 */
} Gate_824B5608;

typedef struct Vec_824B5608 {
    float x, y, z, w;
} Vec_824B5608;

typedef struct Self_824B5608 {
    char pad0[0x48];
    int firstActive;          /* 0x48 */
    int secondActive;         /* 0x4c */
    unsigned int firstCount;  /* 0x50 */
    unsigned int secondCount; /* 0x54 */
} Self_824B5608;

extern Gate_824B5608 lbl_831C4678[2];
extern Vec_824B5608 *fn_824B44C8(Vec_824B5608 *out, void *src, int key, int kind);

static __forceinline int UpdateGate(unsigned int *count, float value, const Gate_824B5608 *gate)
{
    if (value > gate->threshold) {
        if (++*count > gate->frames)
            return 1;
    } else {
        *count = 0;
    }
    return 0;
}

float fn_824B5608(Self_824B5608 *self, void *src)
{
    Vec_824B5608 v;

    fn_824B44C8(&v, src, lbl_831C4678[0].key, 0);
    self->firstActive = UpdateGate(&self->firstCount, v.y, &lbl_831C4678[0]);
    fn_824B44C8(&v, src, lbl_831C4678[1].key, 2);
    self->secondActive = UpdateGate(&self->secondCount, v.y, &lbl_831C4678[1]);
    if (self->firstActive != 0 && self->secondActive != 0)
        return 1.0f;
    return 0.0f;
}
