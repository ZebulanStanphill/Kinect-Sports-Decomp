// Havok: ray against a list of spheres. For every sphere the ray's start and end are moved
// relative to its centre and the quadratic |start + t * dir|^2 = r^2 is solved; the entry
// fraction and the sphere's index are written for every hit, and the hit count is returned.
// Wrapped in the "TtrcMultiSpher" timer scope.
#include <math.h>

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
void __stvewx(__vector4 v, void *base, int offset);

typedef struct ProfTls_82D4C8B0 {
    int unk0;
    void **cur;
    int unk8;
    void **end;
} ProfTls_82D4C8B0;

typedef struct Ray_82D4C8B0 {
    __vector4 from; /* 0x00 */
    __vector4 to;   /* 0x10 */
} Ray_82D4C8B0;

typedef union Sphere_82D4C8B0 {
    __vector4 centre;

    struct {
        float x;
        float y;
        float z;
        float radius; /* 0x0c */
    } f;
} Sphere_82D4C8B0;

extern unsigned int lbl_8323B4A0;
void *KeTlsGetValue(unsigned int index);
unsigned __int64 __mftb(void);

int fn_82D4C8B0(const Ray_82D4C8B0 *ray, const Sphere_82D4C8B0 *spheres, int count, float *fractions,
                int *indices)
{
    ProfTls_82D4C8B0 *t;
    void **p;
    int hits;
    int i;
    __vector4 start;
    __vector4 end;
    __vector4 dir;
    float startLengthSq;
    float projection;
    float dirLengthSq;
    float b;
    float discriminant;
    float fraction;

    t = (ProfTls_82D4C8B0 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = "TtrcMultiSpher";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }

    hits = 0;
    for (i = 0; i < count; i++) {
        start = __vsubfp(ray->from, spheres[i].centre);
        end = __vsubfp(ray->to, spheres[i].centre);
        dir = __vsubfp(end, start);
        __stvewx(__vmsum3fp(start, start), &startLengthSq, 0);
        __stvewx(__vmsum3fp(dir, start), &projection, 0);
        b = projection * 2.0f;
        if (b < 0.0f) {
            __stvewx(__vmsum3fp(dir, dir), &dirLengthSq, 0);
            discriminant =
                b * b - (startLengthSq - spheres[i].f.radius * spheres[i].f.radius) * dirLengthSq * 4.0f;
            if (discriminant > 0.0f) {
                fraction = (-b - sqrtf(discriminant)) * 0.5f;
                if (fraction < dirLengthSq && fraction >= 0.0f) {
                    fractions[hits] = fraction / dirLengthSq;
                    indices[hits] = i;
                    hits++;
                }
            }
        }
    }

    t = (ProfTls_82D4C8B0 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = "Et";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
    return hits;
}
