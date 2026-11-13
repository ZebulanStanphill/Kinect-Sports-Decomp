/* hkpConvexShape::getCentre (vtable slot 0x44, folded for hkpConvexListShape, hkpConvexTransformShapeBase
   and hkpConvexPieceShape): the centre of the shape's AABB in the identity transform. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vaddfp(__vector4 a, __vector4 b);

typedef struct Aabb_82D44018 {
    __vector4 min;
    __vector4 max;
} Aabb_82D44018;

struct Shape_82D44018;
typedef struct ShapeVt_82D44018 {
    void *slot[7];
    void (*getAabb)(struct Shape_82D44018 *self, const void *transform, float tolerance, Aabb_82D44018 *out);
} ShapeVt_82D44018;

typedef struct Shape_82D44018 {
    ShapeVt_82D44018 *vt;
} Shape_82D44018;

extern char lbl_8323B1D0[];

static __forceinline __vector4 Splat(float value)
{
    return __vspltw(__lvlx(&value, 0), 0);
}

void fn_82D44018(Shape_82D44018 *self, __vector4 *centre)
{
    Aabb_82D44018 aabb;

    self->vt->getAabb(self, lbl_8323B1D0, 0.0f, &aabb);
    *centre = __vmulfp(__vaddfp(aabb.max, aabb.min), Splat(0.5f));
}
