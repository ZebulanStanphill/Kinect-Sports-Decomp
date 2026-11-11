typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrefp(__vector4 v);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
void __stvewx(__vector4 v, void *base, int offset);

extern const __vector4 lbl_82132D00;    /* (0, 0, 0, 0) */
extern const __vector4 lbl_82132D10;    /* (1, 1, 1, 1) */

static __forceinline float GetReal(__vector4 v)
{
    float r;
    __stvewx(v, &r, 0);
    return r;
}

static __forceinline __vector4 Reciprocal(__vector4 v)
{
    __vector4 e = __vrefp(v);
    e = __vmaddfp(__vnmsubfp(e, v, lbl_82132D10), e, e);
    return e;
}

int fn_82D1CC68(const __vector4 *from, const __vector4 *to, const __vector4 *plane, float *fraction)
{
    __vector4 dir = __vsubfp(*to, *from);
    __vector4 dn = __vmsum3fp(*plane, dir);

    if (GetReal(__vmulfp(dn, dn)) > 1.1920929e-07f) {
        __vector4 dist = __vaddfp(__vmsum3fp(*plane, *from), __vspltw(*plane, 3));
        __vector4 t = __vmulfp(__vsubfp(lbl_82132D00, dist), Reciprocal(dn));
        *fraction = GetReal(t);
        return 1;
    }
    return 0;
}
