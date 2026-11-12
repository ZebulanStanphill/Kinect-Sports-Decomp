typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vcmpgtfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vand(__vector4 a, __vector4 b);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vcfsx(__vector4 v, int shift);
void __stvewx(__vector4 v, void *base, int offset);

typedef struct Transform_826035B0 {
    __vector4 col[4];           // 0x00 rotation columns, translation at col[3]
} Transform_826035B0;

typedef struct Aabb_826035B0 {
    __vector4 min;              // 0x00
    __vector4 max;              // 0x10
} Aabb_826035B0;

extern const __vector4 lbl_821CA820;    /* abs mask */
extern const __vector4 lbl_8209AB20;    /* sign mask */

void fn_826035B0(const Transform_826035B0 *t, const __vector4 *halfExtents, float radius, Aabb_826035B0 *out)
{
    __vector4 h = *halfExtents;
    __vector4 c0, c1, c2, ext, r;

    c0 = __vmulfp(__vspltw(h, 0), t->col[0]);
    c1 = __vmulfp(__vspltw(h, 1), t->col[1]);
    c2 = __vmulfp(__vspltw(h, 2), t->col[2]);
    r.vector4_f32[0] = radius;
    r = __vspltw(r, 0);
    c0 = __vand(c0, lbl_821CA820);
    c1 = __vand(c1, lbl_821CA820);
    c2 = __vand(c2, lbl_821CA820);
    ext = __vaddfp(c0, c1);
    c2 = __vaddfp(c2, r);
    ext = __vaddfp(ext, c2);
    {
        __vector4 pos = t->col[3];
        __vector4 mx = __vaddfp(ext, pos);
        __vector4 mn = __vaddfp(__vxor(ext, lbl_8209AB20), pos);
        out->max = mx;
        out->min = mn;
    }
}
