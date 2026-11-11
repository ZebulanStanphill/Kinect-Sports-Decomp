// hkpPlaneShape::collideSpheres (vtable ??_7hkpPlaneShape@@6B@ slot 11): for every sphere, the
// output is the plane with w = plane.dot4xyz1(centre) - radius.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
void __stvewx(__vector4 v, void *base, int offset);

typedef struct PlaneShape_82D4CE50 {
    char pad0[0x10];
    __vector4 plane;        /* 0x10 */
} PlaneShape_82D4CE50;

typedef struct CollideSpheresInput_82D4CE50 {
    __vector4 *spheres;     /* 0x00: centre xyz, radius w */
    int numSpheres;         /* 0x04 */
} CollideSpheresInput_82D4CE50;

static __forceinline float Dot4xyz1(const __vector4 *a, const __vector4 *b)
{
    float r;
    __stvewx(__vaddfp(__vspltw(*a, 3), __vmsum3fp(*a, *b)), &r, 0);
    return r;
}

void fn_82D4CE50(const PlaneShape_82D4CE50 *self, const CollideSpheresInput_82D4CE50 *input, __vector4 *output)
{
    const __vector4 *spheres = input->spheres;
    __vector4 *out = output;
    int i;

    for (i = input->numSpheres - 1; i >= 0; i--) {
        float dist;
        *out = self->plane;
        dist = Dot4xyz1(&self->plane, spheres);
        out->vector4_f32[3] = dist - spheres->vector4_f32[3];
        spheres++;
        out++;
    }
}
