#include "xdk/vectorintrinsics.h"

typedef struct Frame_824AF6D0 {
    __vector4 joints[15]; /* 0x00 */
} Frame_824AF6D0;

typedef struct Ring_824AF6D0 {
    Frame_824AF6D0 *buff;  /* 0x0 */
    Frame_824AF6D0 *end;   /* 0x4 */
    Frame_824AF6D0 *first; /* 0x8 */
    Frame_824AF6D0 *last;  /* 0xc */
    unsigned int size;     /* 0x10 */
} Ring_824AF6D0;

typedef struct History_824AF6D0 {
    int pad0;
    Ring_824AF6D0 frames; /* 0x4 */
    char pad18[0x38 - 0x18];
    int mirrored; /* 0x38 */
} History_824AF6D0;

typedef struct Self_824AF6D0 {
    char pad0[0x3c];
    History_824AF6D0 *history; /* 0x3c */
} Self_824AF6D0;

extern int fn_82559FF0(__vector4 v, float *out);

static __forceinline Frame_824AF6D0 *Add(const Ring_824AF6D0 *ring, Frame_824AF6D0 *p, int n)
{
    return p + (n < ring->end - p ? n : n - (ring->end - ring->buff));
}

static __forceinline Frame_824AF6D0 *Back(Ring_824AF6D0 *ring)
{
    if (ring->size != 0) {
        return Add(ring, ring->first, ring->size - 1);
    }
    return 0;
}

int fn_824AF6D0(Self_824AF6D0 *self)
{
    History_824AF6D0 *history;
    Frame_824AF6D0 *frame;
    int side;
    float angle;

    history = self->history;
    if (history->frames.size > 0) {
        side = history->mirrored != 0;
        frame = Back(&history->frames);
        fn_82559FF0(__vsubfp(frame->joints[9 - side], frame->joints[8 + side]), &angle);
        if (self->history->mirrored != 0) {
            if (angle > 2.0008454f) {
                return 1;
            }
        } else if (angle < -2.0008454f) {
            return 1;
        }
    }
    return 0;
}
