/* Discus throw: maps the throw vector's length to a 0..100 strength for the "sportsman_discus_throw" animation
   parameter, then (when there is a target) passes the position, throw direction and length on. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

extern void fn_823414A0(int self);
extern float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);
extern void fn_8243D2D8(int obj, const char *name, int a, int b);
extern void fn_8243D6E0(int obj, const char *name, const char *param, float value);
extern void fn_82261490(int a, int b, __vector4 position, __vector4 direction, float length);

#define W(p, o) (*(int *)((p) + (o)))
#define F(p, o) (*(float *)((p) + (o)))

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    d = __vmsum3fp(v, v);
    h = __vspltisw(1);
    zero = __vspltisw(0);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    mask = __vcmpeqfp(d, zero);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

static __forceinline __vector4 Normalize3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    d = __vmsum3fp(v, v);
    h = __vspltisw(1);
    zero = __vspltisw(0);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    mask = __vcmpeqfp(d, zero);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(v, rsq);
    return __vsel(result, d, mask);
}

void fn_82342C60(int self, __vector4 throwVector)
{
    __vector4 len;
    float strength;
    unsigned int target;

    fn_823414A0(self);
    len = Length3(throwVector);
    strength = fn_82539560(len.vector4_f32[0], 0.0f, F(self, 0x14), 0.0f, 100.0f);
    fn_8243D2D8(W(W(W(W(W(self, 0xc), 0), 0x1a0), 0xc), 0x174) + 8, "sportsman_discus_throw", 0, 0);
    fn_8243D6E0(W(W(W(W(W(self, 0xc), 0), 0x1a0), 0xc), 0x174) + 8, "sportsman_discus_throw",
                "athletics_discus_throw_strength", strength);
    target = *(unsigned int *)(W(W(self, 0xc), 0) + 0x24);
    if (target != 0) {
        __vector4 dir, l;
        dir = Normalize3(throwVector);
        l = Length3(throwVector);
        fn_82261490(W(W(W(W(W(W(W(self, 0xc), 0), 0x1a0), 0xc), 0x174), 0x5c), 0x1ec), W(target, 0x2c),
                    *(__vector4 *)(W(W(self, 0xc), 0) + 0x80), dir, l.vector4_f32[0]);
    }
}
