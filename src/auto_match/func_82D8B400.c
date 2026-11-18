typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
void __stvewx(__vector4 v, void *base, int offset);
float __fsqrts(float);

typedef struct Aabb_82D8B400 {
    __vector4 min; /* 0x00 */
    __vector4 max; /* 0x10 */
} Aabb_82D8B400;

struct Shape_82D8B400;

typedef struct ShapeVt_82D8B400 {
    void *slot[7];
    void (*getAabb)(struct Shape_82D8B400 *self, const void *transform, float tolerance, Aabb_82D8B400 *out);
} ShapeVt_82D8B400;

typedef struct Shape_82D8B400 {
    ShapeVt_82D8B400 *vt;
} Shape_82D8B400;

typedef struct Body_82D8B400 {
    char pad0[0x170];
    __vector4 centre; /* 0x170 */
    char pad180[0x10];
    float radius; /* 0x190 */
} Body_82D8B400;

extern char lbl_8323B1D0[];

void fn_82D8B400(Body_82D8B400 *body, Shape_82D8B400 *shape, __vector4 *extents)
{
    Aabb_82D8B400 aabb;
    __vector4 toMax;
    __vector4 toMin;
    float maxDistanceSquared;
    float minDistanceSquared;

    shape->vt->getAabb(shape, lbl_8323B1D0, 0.0f, &aabb);
    *extents = __vsubfp(aabb.max, aabb.min);
    toMax = __vsubfp(aabb.max, body->centre);
    toMin = __vsubfp(aabb.min, body->centre);
    __stvewx(__vmsum3fp(toMax, toMax), &maxDistanceSquared, 0);
    __stvewx(__vmsum3fp(toMin, toMin), &minDistanceSquared, 0);
    body->radius =
        __fsqrts(maxDistanceSquared - minDistanceSquared >= 0.0f ? maxDistanceSquared : minDistanceSquared);
}
