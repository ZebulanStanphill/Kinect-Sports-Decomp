#include "xdk/vectorintrinsics.h"

extern double sqrt(double value);

typedef struct Frame_824AF5F0 {
    __vector4 joints[15]; /* 0x00 */
} Frame_824AF5F0;

typedef struct Ring_824AF5F0 {
    Frame_824AF5F0 *buff;  /* 0x0 */
    Frame_824AF5F0 *end;   /* 0x4 */
    Frame_824AF5F0 *first; /* 0x8 */
    Frame_824AF5F0 *last;  /* 0xc */
    unsigned int size;     /* 0x10 */
} Ring_824AF5F0;

typedef struct History_824AF5F0 {
    int pad0;
    Ring_824AF5F0 frames; /* 0x4 */
    char pad18[0x38 - 0x18];
    int mirrored; /* 0x38 */
} History_824AF5F0;

typedef struct Self_824AF5F0 {
    char pad0[0x3c];
    History_824AF5F0 *history; /* 0x3c */
} Self_824AF5F0;

static __forceinline Frame_824AF5F0 *Add(const Ring_824AF5F0 *ring, Frame_824AF5F0 *p, int n)
{
    return p + (n < ring->end - p ? n : n - (ring->end - ring->buff));
}

static __forceinline Frame_824AF5F0 *Back(Ring_824AF5F0 *ring)
{
    if (ring->size != 0) {
        return Add(ring, ring->first, ring->size - 1);
    }
    return 0;
}

int fn_824AF5F0(Self_824AF5F0 *self)
{
    History_824AF5F0 *history;
    Frame_824AF5F0 *frame;
    int side;
    __vector4 near;
    __vector4 far;
    __vector4 delta;

    history = self->history;
    if (history->frames.size != 0) {
        side = history->mirrored != 0;
        frame = Back(&history->frames);
        far = frame->joints[8 + side];
        near = frame->joints[side];
        delta = __vsubfp(far, near);
        if (near.vector4_f32[2] < far.vector4_f32[2] &&
            (float)sqrt(delta.vector4_f32[0] * delta.vector4_f32[0] +
                        delta.vector4_f32[2] * delta.vector4_f32[2]) > 0.2f) {
            return 1;
        }
    }
    return 0;
}
