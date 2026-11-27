#include "xdk/vectorintrinsics.h"

typedef struct LastHit_82626968 {
    int pad0;
    unsigned char material; /* 0x4 */
    int object;             /* 0x8 */
    int padC;
    __vector4 position; /* 0x10 */
} LastHit_82626968;

typedef struct Angles_82626968 {
    float pitch; /* 0x0 */
    float yaw;   /* 0x4 */
    float roll;  /* 0x8 */
} Angles_82626968;

extern LastHit_82626968 lbl_83274B10;
extern int fn_82559EF0(__vector4 direction, float *pitch, float *yaw);

static __forceinline __vector4 Replicate(float s)
{
    return __vspltw(__lvlx(&s, 0), 0);
}

void fn_82626968(const __vector4 *from, __vector4 *position, Angles_82626968 *angles)
{
    __vector4 direction;
    __vector4 start;

    *position = *from;
    direction = lbl_83274B10.position;
    fn_82559EF0(direction, &angles->pitch, &angles->yaw);
    start = *position;
    angles->roll = 0.0f;
    angles->yaw += 3.1415927f;
    *position = __vmaddfp(direction, Replicate(0.05f), start);
}
