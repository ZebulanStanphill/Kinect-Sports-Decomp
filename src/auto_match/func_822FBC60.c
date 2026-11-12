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

typedef struct String_822FBC60 {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;   /* 0x10 */
    unsigned int res;    /* 0x14 */
    int alloc;           /* 0x18 */
} String_822FBC60;

typedef struct Self_822FBC60 {
    char pad0[0x90];
    void *timer;                  /* 0x90 */
    float delay;                  /* 0x94 */
    float minLength;              /* 0x98 */
    float maxLength;              /* 0x9c */
    String_822FBC60 longName;     /* 0xa0 */
    String_822FBC60 shortName;    /* 0xbc */
} Self_822FBC60;

extern void fn_822C72E0(Self_822FBC60 *self, const char *name);
extern float fn_827F6318(void *timer);
extern void fn_822FBD80(Self_822FBC60 *self, __vector4 *pair);

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

static __forceinline const char *CStr(const String_822FBC60 *s)
{
    return s->res < 16 ? s->bx.buf : s->bx.ptr;
}

void fn_822FBC60(Self_822FBC60 *self, __vector4 *pair)
{
    __vector4 first = Length3(pair[0]);
    __vector4 second = Length3(pair[1]);

    if (first.vector4_f32[0] < self->minLength) {
        fn_822C72E0(self, CStr(&self->shortName));
        return;
    }
    if (second.vector4_f32[0] > self->maxLength) {
        fn_822C72E0(self, CStr(&self->longName));
        return;
    }
    if (self->timer == 0 || fn_827F6318(self->timer) > self->delay)
        fn_822FBD80(self, pair);
}
