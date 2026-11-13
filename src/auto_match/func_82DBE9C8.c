/* Havok: set the translation of child `index` of a shape, following container shapes. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Transform_82DBE9C8 {
    __vector4 col[3];
    __vector4 translation;
} Transform_82DBE9C8;

typedef struct Shape_82DBE9C8 Shape_82DBE9C8;

typedef struct ShapeVtbl_82DBE9C8 {
    void *slots[8];
    int (*getType)(const Shape_82DBE9C8 *self);   /* 0x20 */
} ShapeVtbl_82DBE9C8;

struct Shape_82DBE9C8 {
    ShapeVtbl_82DBE9C8 *vt;     /* 0x00 */
    char pad04[0x18 - 4];
    Shape_82DBE9C8 *child;      /* 0x18 */
    char pad1c[0x20 - 0x1c];
    union {
        __vector4 points[1];                /* 0x20 */
        Transform_82DBE9C8 transforms[1];   /* 0x20 */
    } u;
};

extern Shape_82DBE9C8 *fn_82D98A80(Shape_82DBE9C8 *shape);

void fn_82DBE9C8(Shape_82DBE9C8 *shape, const __vector4 *translation, int index)
{
    for (;;) {
        switch (shape->vt->getType(shape)) {
        case 1:
        case 2:
        case 6:
        case 7:
        case 9:
        case 14:
            shape->u.transforms[index].translation = *translation;
            return;
        case 0:
        case 8:
        case 15:
            shape->u.points[index] = *translation;
            return;
        default:
            return;
        case 12:
            shape = shape->child;
            break;
        case 13:
            shape = fn_82D98A80(shape);
            break;
        }
    }
}
