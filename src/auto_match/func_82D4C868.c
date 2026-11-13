// Havok hkpMultiSphereShape::getCollisionSpheres (vtable +0x30): copies the shape's spheres
// (centre in xyz, radius in w) into the buffer.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct {
    __vector4 pos;
} Sphere_82D4C868;

typedef struct {
    char pad0[0x10];
    int numSpheres;               // 0x10 m_numSpheres
    char pad14[0xc];
    __vector4 spheres[8];         // 0x20 m_spheres
} Shape_82D4C868;

const Sphere_82D4C868 *fn_82D4C868(const Shape_82D4C868 *self, Sphere_82D4C868 *buffer)
{
    int i;
    for (i = 0; i < self->numSpheres; i++)
        buffer[i].pos = self->spheres[i];
    return buffer;
}
