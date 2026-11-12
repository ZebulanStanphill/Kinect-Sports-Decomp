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

typedef struct Float3_82466200 {
    float x, y, z;
} Float3_82466200;

typedef struct Tuning_82466200 {
    char pad0[0x4c];
    Float3_82466200 offset;      /* 0x4c */
    Float3_82466200 origin;      /* 0x58 */
    Float3_82466200 direction;   /* 0x64 */
    float spacing;               /* 0x70 */
} Tuning_82466200;

extern Tuning_82466200 lbl_831D3858;

typedef struct Self_82466200 {
    char pad0[0x4];
    void *targets[3];            /* 0x04 */
    char pad10[0xb8];
    void *context;               /* 0xc8 */
    char padCC[0xc];
    int mode;                    /* 0xd8 */
} Self_82466200;

extern int fn_82560100(void *context, void *target, __vector4 *position, float f, __vector4 *offset,
                       int c, int d, int e);

static __forceinline __vector4 LoadFloat3(const Float3_82466200 *src)
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

void fn_82466200(Self_82466200 *self, unsigned int count, float f)
{
    __vector4 offset = LoadFloat3(&lbl_831D3858.offset);
    __vector4 origin = LoadFloat3(&lbl_831D3858.origin);
    __vector4 direction = LoadFloat3(&lbl_831D3858.direction);
    __vector4 position;
    void *target;

    position = __vmaddfp(Normalize3(direction), Replicate((float)count * lbl_831D3858.spacing), origin);
    if (self->mode == 0)
        target = self->targets[0];
    else if (self->mode == 1)
        target = self->targets[1];
    else
        target = self->targets[2];
    fn_82560100(self->context, &target, &position, f, &offset, 0, 0, 0);
}
