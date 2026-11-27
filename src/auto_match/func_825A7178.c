#include "xdk/vectorintrinsics.h"

typedef struct Vec3_825A7178 {
    float x;
    float y;
    float z;
} Vec3_825A7178;

typedef struct Body_825A7178 {
    unsigned char pad0[0x1B0];
    __vector4 position; /* 0x1B0 */
} Body_825A7178;

typedef struct Target_825A7178 {
    unsigned char pad0[0x18];
    Body_825A7178 *body; /* 0x018 */
    unsigned char pad1C[0x20 - 0x1C];
    __vector4 v20; /* 0x020 */
    unsigned char pad30[0x60 - 0x30];
    __vector4 v60;     /* 0x060 */
    __vector4 v70;     /* 0x070 */
    Vec3_825A7178 v80; /* 0x080 */
    unsigned char pad8C[0xF0 - 0x8C];
    Vec3_825A7178 vF0; /* 0x0F0 */
    unsigned char padFC[0x108 - 0xFC];
    int a; /* 0x108 */
    int b; /* 0x10C */
    int c; /* 0x110 */
} Target_825A7178;

typedef struct Motion_825A7178 {
    Target_825A7178 *target; /* 0x00 */
    unsigned char pad04[0xA0 - 0x04];
    int fA0; /* 0xA0 */
    int padA4;
    int fA8; /* 0xA8 */
    int padAC;
    int fB0; /* 0xB0 */
    int fB4; /* 0xB4 */
    unsigned char padB8[0xC0 - 0xB8];
    __vector4 first;  /* 0xC0 */
    __vector4 second; /* 0xD0 */
    unsigned char padE0[0xF0 - 0xE0];
    __vector4 vF0;      /* 0xF0 */
    Vec3_825A7178 v100; /* 0x100 */
    Vec3_825A7178 v10C; /* 0x10C */
} Motion_825A7178;

typedef struct Self_825A7178 {
    unsigned char pad0[0x4E0];
    Motion_825A7178 motion; /* 0x4E0 */
} Self_825A7178;

extern void fn_82603968(Target_825A7178 *self, __vector4 first, __vector4 second);
extern void fn_82603A18(Target_825A7178 *self, __vector4 target);
extern void fn_82D89BD8(Body_825A7178 *body);
extern void fn_826038C8(Target_825A7178 *self);

static __forceinline void SetVec3(Vec3_825A7178 *v, float x, float y, float z)
{
    v->x = x;
    v->y = y;
    v->z = z;
}

static __forceinline void Place(Target_825A7178 *target, __vector4 position)
{
    Body_825A7178 *body = target->body;

    fn_82D89BD8(body);
    target->v20 = position;
    target->v60 = body->position;
    target->a = 0;
    target->c = 0;
    target->b = 1;
    fn_826038C8(target);
}

void fn_825A7178(Self_825A7178 *self)
{
    Motion_825A7178 *motion = &self->motion;
    Target_825A7178 *target = motion->target;

    target->v70 = motion->vF0;
    SetVec3(&target->v80, motion->v100.x, motion->v100.y, motion->v100.z);
    SetVec3(&target->vF0, motion->v10C.x, motion->v10C.y, motion->v10C.z);
    if (motion->fB4 != 0 && motion->fB0 != 0) {
        fn_82603968(target, motion->first, motion->second);
    } else if (motion->fB4 != 0) {
        fn_82603A18(target, motion->second);
    } else if (motion->fB0 != 0) {
        Place(target, motion->first);
    }
    motion->fA8 = 1;
    motion->fA0 = 0;
}
