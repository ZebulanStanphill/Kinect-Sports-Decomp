#include "xdk/vectorintrinsics.h"

typedef struct Tuning_823C88F0 {
    char pad0[0x1b8];
    float scale;            /* 0x1b8 */
    float offsetX;          /* 0x1bc */
    float offsetY;          /* 0x1c0 */
    float offsetZ;          /* 0x1c4 */
    float result;           /* 0x1c8 */
} Tuning_823C88F0;

typedef struct Body_823C88F0 {
    char pad0[0x130];
    __vector4 position;     /* 0x130 */
    char pad140[0x20];
    int active;             /* 0x160 */
} Body_823C88F0;

typedef struct Object_823C88F0 {
    char pad0[0x24];
    Body_823C88F0 *body;    /* 0x24 */
    char pad28[0x58];
    __vector4 position;     /* 0x80 */
} Object_823C88F0;

typedef struct Camera_823C88F0 {
    char pad0[0x50];
    __vector4 position;     /* 0x50 */
} Camera_823C88F0;

typedef struct World_823C88F0 {
    char pad0[0xe10];
    Camera_823C88F0 *camera;    /* 0xe10 */
} World_823C88F0;

typedef struct Self_823C88F0 {
    char pad0[0x240];
    World_823C88F0 *world;      /* 0x240 */
} Self_823C88F0;

extern Tuning_823C88F0 lbl_831D2D90;
extern float fn_8255A070(__vector4 dir);
extern void fn_823C9098(__vector4 position, float a, __vector4 offset, float b, float c, int d, void *e);

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx = __lvlx(&x, 0);
    __vector4 vy = __lvlx(&y, 0);
    __vector4 vz = __lvlx(&z, 0);
    __vector4 vw = __lvlx(&w, 0);
    vx = __vrlimi(vx, vy, 4, 3);
    vz = __vrlimi(vz, vw, 4, 3);
    return __vrlimi(vx, vz, 3, 2);
}

static __forceinline __vector4 Normalize3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    d = __vmsum3fp(v, v);
    h = __vspltisw(1);
    zero = __vspltisw(0);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    mask = __vcmpeqfp(d, zero);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(v, rsq);
    return __vsel(result, d, mask);
}

void fn_823C88F0(Self_823C88F0 *self, Object_823C88F0 *object, int a, void *b, float *out)
{
    __vector4 offset;
    __vector4 position;
    __vector4 dir;
    __vector4 sign;
    Body_823C88F0 *body;
    float angle;

    offset = VectorSet(lbl_831D2D90.offsetX, lbl_831D2D90.offsetY, lbl_831D2D90.offsetZ, 0.0f);
    body = object->body;
    if (body != 0 && body->active != 0)
        position = body->position;
    else
        position = object->position;
    dir = Normalize3(__vsubfp(self->world->camera->position, position));
    sign = __VMXGetReg(65);
    fn_823C9098(position, lbl_831D2D90.scale, offset, fn_8255A070(__vxor(dir, sign)), 0.0f, a, b);
    *out = lbl_831D2D90.result;
}
