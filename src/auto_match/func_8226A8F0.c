
/* /O1 /QVMXReserve: v77 is the game's reserved zero vector, read with __VMXGetReg. */

#include "xdk/vectorintrinsics.h"

typedef struct Vec2_8226A8F0 {
    float x;
    float y;
} Vec2_8226A8F0;

typedef struct Plane_8226A8F0 {
    int pad0;
    unsigned char enabled; /* 0x4 */
    char pad5[0x1f];
    Vec2_8226A8F0 normal; /* 0x24 */
    int pad2C;
    float radius;   /* 0x30 */
    float strength; /* 0x34 */
    char pad38[0x8];
    float distance; /* 0x40 */
} Plane_8226A8F0;

extern const float lbl_821954B0[0xa28 / 4];
extern const float lbl_82193E2C;
extern float fn_82809950(float x);

static __forceinline float Dot(const Vec2_8226A8F0 *a, const Vec2_8226A8F0 *b)
{
    return a->x * b->x + a->y * b->y;
}

int fn_8226A8F0(Plane_8226A8F0 *self, Vec2_8226A8F0 *position, __vector4 *push, __vector4 *other,
                unsigned char *close)
{
    float d;
    float depth;

    *push = __VMXGetReg(77);
    *other = __VMXGetReg(77);
    *close = 0;
    d = Dot(position, &self->normal) + self->distance;
    if (d < 0.0f) {
        if (self->enabled && d <= self->radius * lbl_821954B0[0x288 / 4]) {
            *close = 1;
        }
        if (d > -self->radius) {
            depth = -d;
            push->vector4_f32[2] = fn_82809950(depth / self->radius * lbl_82193E2C) * self->strength;
            return 1;
        }
    }
    return 0;
}
