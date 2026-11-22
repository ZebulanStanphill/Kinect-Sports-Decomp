typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);

typedef struct Frame_824B0460 {
    __vector4 joints[13]; /* 0x00 */
} Frame_824B0460;

typedef struct Ring_824B0460 {
    Frame_824B0460 *buff;  /* 0x0 */
    Frame_824B0460 *end;   /* 0x4 */
    Frame_824B0460 *first; /* 0x8 */
    Frame_824B0460 *last;  /* 0xc */
    unsigned int size;     /* 0x10 */
} Ring_824B0460;

typedef struct History_824B0460 {
    int pad0;
    Ring_824B0460 frames; /* 0x4 */
    char pad18[0x34 - 0x18];
    int mirrored; /* 0x34 */
    char pad38[0x74 - 0x38];
    float limit; /* 0x74 */
} History_824B0460;

typedef struct Self_824B0460 {
    char pad0[0x3c];
    History_824B0460 *history; /* 0x3c */
} Self_824B0460;

extern int fn_82559FF0(__vector4 v, float *out);

static __forceinline Frame_824B0460 *Add(const Ring_824B0460 *ring, Frame_824B0460 *p, int n)
{
    return p + (n < ring->end - p ? n : n - (ring->end - ring->buff));
}

static __forceinline Frame_824B0460 *Back(Ring_824B0460 *ring)
{
    if (ring->size != 0) {
        return Add(ring, ring->first, ring->size - 1);
    }
    return 0;
}

int fn_824B0460(Self_824B0460 *self)
{
    History_824B0460 *history;
    Frame_824B0460 *frame;
    int side;
    float angle;
    float degrees;
    __vector4 delta;

    history = self->history;
    if (history->frames.size > 0) {
        side = history->mirrored != 0;
        frame = Back(&history->frames);
        delta = __vsubfp(frame->joints[7 - side], frame->joints[6 + side]);
        angle = 0.0f;
        fn_82559FF0(delta, &angle);
        degrees = angle * 57.295776f;
        if (self->history->mirrored != 0) {
            if (degrees > self->history->limit + 90.0f) {
                return 1;
            }
        } else if (degrees < -90.0f - self->history->limit) {
            return 1;
        }
    }
    return 0;
}
