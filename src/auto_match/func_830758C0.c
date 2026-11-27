#include "xdk/vectorintrinsics.h"

typedef struct Trail_830758C0 {
    __vector4 sets[2][41]; /* 0x000: per set 20 positions, then 20 offsets */
    int current;           /* 0x520 */
    int pad524;
    int count; /* 0x528 */
} Trail_830758C0;

extern float fn_8306E7F8(float x, float lo, float hi);
extern __vector4 fn_8306ECA8(void);
extern float fn_8306EE38(__vector4 v);
extern __vector4 fn_8306EF40(__vector4 v, float length);
extern void fn_83075D80(void *points, int i, __vector4 v);

static const float maxOffset = 1.0f;

void fn_830758C0(Trail_830758C0 *self, float scale, void *points)
{
    int i;

    if (self->count > 0) {
        __vector4 scales;
        float clamped = fn_8306E7F8(scale, 0.0f, 0.05f);
        scales.vector4_f32[3] = clamped;
        scales.vector4_f32[2] = clamped;
        scales.vector4_f32[1] = clamped;
        scales.vector4_f32[0] = clamped;
        for (i = 0; i < 20; i++) {
            __vector4 position = self->sets[self->current][i];
            __vector4 offset;
            __vector4 identity;
            const __vector4 *source;
            if (self->count > 1) {
                source = &self->sets[self->current][i + 20];
            } else {
                identity = fn_8306ECA8();
                source = &identity;
            }
            offset = *source;
            if (fn_8306EE38(offset) > maxOffset) {
                offset = fn_8306EF40(offset, maxOffset);
            }
            fn_83075D80(points, i, __vmaddfp(offset, scales, position));
        }
    } else {
        for (i = 0; i < 20; i++) {
            fn_83075D80(points, i, fn_8306ECA8());
        }
    }
}
