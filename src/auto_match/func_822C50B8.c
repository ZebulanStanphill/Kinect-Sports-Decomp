typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);

typedef struct Object_822C50B8 {
    char pad0[0x80];
    __vector4 position;     /* 0x80 */
} Object_822C50B8;

typedef int (*Filter_822C50B8)(Object_822C50B8 *obj);

static __forceinline float Dot3(__vector4 a, __vector4 b)
{
    __vector4 r = __vmsum3fp(a, b);
    return r.vector4_f32[0];
}

static __forceinline float DistSqToLine(__vector4 p, __vector4 origin, __vector4 dir)
{
    __vector4 d = __vsubfp(p, origin);
    float s = Dot3(d, dir);
    __vector4 c = __vmaddfp(dir, __vspltw(__lvlx(&s, 0), 0), origin);
    __vector4 e = __vsubfp(p, c);
    return Dot3(e, e);
}

int fn_822C50B8(Object_822C50B8 *obj, __vector4 origin, __vector4 dir, float maxDistSq, float radiusSq,
                Filter_822C50B8 filter, float *distSqOut)
{
    __vector4 pos = obj->position;
    __vector4 d = __vsubfp(pos, origin);
    float distSq, s;
    int result;

    if (Dot3(d, dir) > 0.0f) {
        distSq = Dot3(d, d);
        *distSqOut = distSq;
        if (distSq < maxDistSq) {
            if (DistSqToLine(pos, origin, dir) < radiusSq) {
                result = 1;
                if (filter != 0)
                    result = filter(obj);
                return result;
            }
        }
    }
    return 0;
}
