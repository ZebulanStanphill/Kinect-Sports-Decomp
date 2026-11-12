/* Places the object's marker: position = origin + normalize(direction) * (count * spacing) from
   the tuning block lbl_831D3858, handed to fn_82560100 together with the offset vector; then,
   when asked, notifies the owner (fn_82465390). */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __VMXGetReg(int n);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

typedef struct Float3_824660C0 {
    float x, y, z;
} Float3_824660C0;

typedef struct Tuning_824660C0 {
    char pad0[0x20];
    Float3_824660C0 offset;      /* 0x20 */
    Float3_824660C0 origin;      /* 0x2c */
    Float3_824660C0 direction;   /* 0x38 */
    float spacing;               /* 0x44 */
} Tuning_824660C0;

extern Tuning_824660C0 lbl_831D3858;

typedef struct Self_824660C0 {
    char pad0[0x10];
    char sub10[0xb8];            /* 0x10 */
    void *context;               /* 0xc8 */
    void *owner;                 /* 0xcc */
} Self_824660C0;

extern int fn_82560100(void *context, Self_824660C0 *self, __vector4 *position, float f, __vector4 *offset,
                       int c, int d, int e);
extern void fn_82465390(void *owner, void *sub);

static __forceinline __vector4 LoadFloat3(const Float3_824660C0 *src)
{
    __vector4 vl, vr, zero, mask;

    vr = __lvrx(src, 12);
    vl = __lvlx(src, 0);
    vr = __vsldoi(vr, vr, 1 << 2);
    vl = __vor(vl, vr);
    zero = __VMXGetReg(77);
    mask = __VMXGetReg(67);
    return __vsel(vl, zero, mask);
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

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

void fn_824660C0(Self_824660C0 *self, unsigned int count, int notify)
{
    __vector4 offset = LoadFloat3(&lbl_831D3858.offset);
    __vector4 origin = LoadFloat3(&lbl_831D3858.origin);
    __vector4 direction = LoadFloat3(&lbl_831D3858.direction);
    __vector4 position;

    position = __vmaddfp(Normalize3(direction), Replicate((float)count * lbl_831D3858.spacing), origin);
    fn_82560100(self->context, self, &position, 0.0f, &offset, 0, 0, 0);
    if (notify != 0) {
        fn_82465390(self->owner, self->sub10);
    }
}
