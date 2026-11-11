// Havok hkpConvexTransformShape::getCollisionSpheres: asks the child shape for its collision
// spheres, then writes each one into the caller's buffer with its centre moved by the
// transform at +0x20 and its radius (w) kept.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);

typedef struct Child_82D3D908 Child_82D3D908;
typedef struct VTable_82D3D908 {
    void *pad[11];
    int (*getNumCollisionSpheres)(Child_82D3D908 *self);                           // slot 11
    const __vector4 *(*getCollisionSpheres)(Child_82D3D908 *self, __vector4 *buffer);  // slot 12
} VTable_82D3D908;
struct Child_82D3D908 {
    VTable_82D3D908 *vt;
};

typedef struct Rotation_82D3D908 {
    __vector4 col[3];
} Rotation_82D3D908;

typedef struct Transform_82D3D908 {
    Rotation_82D3D908 rotation;
    __vector4 translation;
} Transform_82D3D908;

typedef struct Shape_82D3D908 {
    char pad[0x18];
    Child_82D3D908 *child;          // 0x18
    char pad1[4];
    Transform_82D3D908 transform;   // 0x20
} Shape_82D3D908;

__vector4 *fn_82D3D908(Shape_82D3D908 *self, __vector4 *buffer)
{
    const __vector4 *spheres = self->child->vt->getCollisionSpheres(self->child, buffer);
    int n = self->child->vt->getNumCollisionSpheres(self->child);
    const Transform_82D3D908 *t = &self->transform;
    __vector4 c0 = t->rotation.col[0];
    __vector4 c1 = t->rotation.col[1];
    __vector4 c2 = t->rotation.col[2];
    __vector4 tr = t->translation;
    int i;
    i = n - 1;
    do {
        __vector4 b0 = __vspltw(spheres[i], 0);
        __vector4 r0 = __vmulfp(c0, b0);
        __vector4 b1 = __vspltw(spheres[i], 1);
        __vector4 b2 = __vspltw(spheres[i], 2);
        __vector4 r1 = __vmaddfp(c1, b1, r0);
        __vector4 position = __vaddfp(__vmaddfp(c2, b2, r1), tr);
        buffer[i] = __vrlimi(position, spheres[i], 1, 0);
    } while (--i >= 0);
    return buffer;
}
