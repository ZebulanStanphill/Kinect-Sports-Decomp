#include "xdk/vectorintrinsics.h"

typedef struct Range_824AB2E0 {
    float minimum; /* 0x00 */
    float maximum; /* 0x04 */
    int joint;     /* 0x08 */
    int useFilter; /* 0x0C */
} Range_824AB2E0;

typedef struct Gesture_824AB2E0 {
    char pad0[0x40];
    int mirrored; /* 0x40 */
} Gesture_824AB2E0;

extern const Range_824AB2E0 lbl_8219145C[2];
extern int fn_824AB3D0(void);
extern __vector4 *fn_824AA3D8(__vector4 *out, Gesture_824AB2E0 *self, void *skeleton, int joint,
                              int (*filter)(void));
extern __vector4 *fn_824AA258(__vector4 *out, Gesture_824AB2E0 *self, void *skeleton, int joint);

static __forceinline float Select_824AB2E0(float condition, float a, float b)
{
    return condition >= 0.0f ? a : b;
}

float fn_824AB2E0(Gesture_824AB2E0 *self, void *skeleton)
{
    const Range_824AB2E0 *range;
    __vector4 position;
    float height;
    float result;

    if (self->mirrored != 0) {
        range = &lbl_8219145C[1];
    } else {
        range = &lbl_8219145C[0];
    }
    if (range->useFilter != 0) {
        position = *fn_824AA3D8(&position, self, skeleton, range->joint, fn_824AB3D0);
    } else {
        position = *fn_824AA258(&position, self, skeleton, range->joint);
    }
    result = 0.0f;
    height = position.vector4_f32[1];
    if (height >= range->minimum) {
        height = Select_824AB2E0(height, height, 0.0f);
        height = Select_824AB2E0(height - range->maximum, range->maximum, height);
        result = height / range->maximum;
    }
    return result;
}
