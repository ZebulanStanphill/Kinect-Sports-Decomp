typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4, __vector4);

typedef struct Source_824A2128 Source_824A2128;

typedef struct SourceVtbl_824A2128 {
    void *slot0;
    int (*IsTracking)(Source_824A2128 *self); /* 0x4 */
} SourceVtbl_824A2128;

struct Source_824A2128 {
    SourceVtbl_824A2128 *vt;
};

typedef struct Owner_824A2128 {
    char pad0[0xb8];
    Source_824A2128 *source; /* 0xb8 */
    char padbc[0x4];
    __vector4 position; /* 0xc0 */
    int initialised;    /* 0xd0 */
} Owner_824A2128;

typedef struct Motion_824A2128 {
    char pad0[0x10];
    float x; /* 0x10 */
    char pad14[0x4];
    float z;            /* 0x18 */
    unsigned char mode; /* 0x1c */
} Motion_824A2128;

typedef struct Mode_824A2128 {
    char pad0[0x1c];
    unsigned char mode; /* 0x1c */
} Mode_824A2128;

typedef struct Sample_824A2128 {
    __vector4 position; /* 0x0 */
    char pad10[0x10];
} Sample_824A2128;

extern int fn_82F52520(Source_824A2128 *source, Sample_824A2128 *out);
extern __vector4 *fn_824A2220(__vector4 *out, Owner_824A2128 *owner);
extern Motion_824A2128 *fn_827F4038(Owner_824A2128 *owner);
extern Mode_824A2128 *fn_827F4048(Owner_824A2128 *owner);
extern void fn_827F4068(Owner_824A2128 *owner);

void fn_824A2128(Owner_824A2128 *self)
{
    __vector4 current;
    Sample_824A2128 sample;
    __vector4 previous;
    __vector4 reference;
    __vector4 delta;
    Motion_824A2128 *motion;
    float dx;
    float dz;
    if (self->source->vt->IsTracking(self->source) != 0) {
        fn_82F52520(self->source, &sample);
        current = sample.position;
        if (self->initialised == 0) {
            __vector4 scratch;
            reference = *fn_824A2220(&scratch, self);
            self->initialised = 1;
            self->position = reference;
        }
    } else {
        current = self->position;
    }
    previous = self->position;
    self->position = current;
    delta = __vsubfp(current, previous);
    motion = fn_827F4038(self);
    dx = delta.vector4_f32[0];
    dz = delta.vector4_f32[2];
    motion->x = dx;
    motion->mode = 0x50;
    motion->z = dz;
    fn_827F4048(self)->mode = 0x50;
    fn_827F4068(self);
}
