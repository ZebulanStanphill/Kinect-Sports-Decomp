// Havok hkpConvexPieceShape::getCollisionSpheres: one sphere per vertex, centred on the vertex,
// with the shape's radius (+0x10) in w.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct {
    __vector4 pos;
} Sphere_82D6F6F0;

typedef struct {
    char pad0[0x10];
    float radius;                 // 0x10
    char pad14[4];
    const __vector4 *vertices;    // 0x18
    int numVertices;              // 0x1c
} Shape_82D6F6F0;

const Sphere_82D6F6F0 *fn_82D6F6F0(const Shape_82D6F6F0 *self, Sphere_82D6F6F0 *buffer)
{
    Sphere_82D6F6F0 *s = buffer;
    int i;
    for (i = 0; i < self->numVertices; i++) {
        s->pos = self->vertices[i];
        s->pos.vector4_f32[3] = self->radius;
        s++;
    }
    return buffer;
}
