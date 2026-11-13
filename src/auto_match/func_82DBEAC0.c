/* Havok: transform of child `index` of a shape, following container shapes (type 12: the
   child shape at 0x18, type 13: fn_82D98A88) until a leaf type is reached. Point-type
   shapes (0, 8, 15) give a translation, transform-type shapes (1, 2, 6, 7, 9, 14) their
   stored transform; any other type leaves the identity. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vxor(__vector4 a, __vector4 b);

typedef struct Transform_82DBEAC0 {
    __vector4 col[3];
    __vector4 translation;
} Transform_82DBEAC0;

typedef struct Shape_82DBEAC0 Shape_82DBEAC0;

typedef struct ShapeVtbl_82DBEAC0 {
    void *slots[8];
    int (*getType)(const Shape_82DBEAC0 *self);   /* 0x20 */
} ShapeVtbl_82DBEAC0;

struct Shape_82DBEAC0 {
    ShapeVtbl_82DBEAC0 *vt;     /* 0x00 */
    char pad04[0x18 - 4];
    Shape_82DBEAC0 *child;      /* 0x18 */
    char pad1c[0x20 - 0x1c];
    union {
        __vector4 points[1];                /* 0x20 */
        Transform_82DBEAC0 transforms[1];   /* 0x20 */
    } u;
};

extern Shape_82DBEAC0 *fn_82D98A88(Shape_82DBEAC0 *shape);

static __forceinline void SetZero4(__vector4 *v)
{
    *v = __vxor(*v, *v);
}

static __forceinline void SetIdentity(Transform_82DBEAC0 *t)
{
    __vector4 zero;
    zero = __vxor(zero, zero);
    t->col[0] = zero;
    t->col[1] = zero;
    t->col[2] = zero;
    t->col[0].vector4_f32[0] = 1.0f;
    t->col[1].vector4_f32[1] = 1.0f;
    t->col[2].vector4_f32[2] = 1.0f;
    SetZero4(&t->translation);
}

void fn_82DBEAC0(Shape_82DBEAC0 *shape, int index, Transform_82DBEAC0 *out)
{
    for (;;) {
        SetIdentity(out);
        switch (shape->vt->getType(shape)) {
        case 1:
        case 2:
        case 6:
        case 7:
        case 9:
        case 14: {
            const Transform_82DBEAC0 *t = &shape->u.transforms[index];
            out->col[0] = t->col[0];
            out->col[1] = t->col[1];
            out->col[2] = t->col[2];
            out->translation = t->translation;
            return;
        }
        case 0:
        case 8:
        case 15:
            out->translation = shape->u.points[index];
            return;
        default:
            return;
        case 12:
            shape = shape->child;
            break;
        case 13:
            shape = fn_82D98A88(shape);
            break;
        }
    }
}
