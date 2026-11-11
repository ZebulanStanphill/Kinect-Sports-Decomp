// Copy constructor of the class with vtable lbl_821BF58C (base copy fn_82F53A20): copies a
// float and two words from the source and stores the normalized float3 at +0x54 of the
// source as a vector (XMVector3Normalize shape; float3 widened through the reserved
// zero/select registers v77/v67).
// The 0.0f literal is the game's LTCG-pooled zero: the unit needs the pool alias
// __real@00000000=ltcg_pool_0_0f (objects.json "pool_aliases").
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __VMXGetReg(int n);

typedef struct Float3_824A2838 {
    float x, y, z;
} Float3_824A2838;

typedef struct Src_824A2838 {
    char pad00[0x48];
    float f48;                       // 0x48
    int f4c;                         // 0x4c
    int f50;                         // 0x50
    Float3_824A2838 direction;       // 0x54
} Src_824A2838;

typedef struct Obj_824A2838 {
    char *vt;                        // 0x00
    char pad04[0x38];
    float f3c;                       // 0x3c
    int f40;                         // 0x40
    int f44;                         // 0x44
    char pad48[8];
    __vector4 direction;             // 0x50
    float f60;                       // 0x60
    int f64;                         // 0x64
    char pad68[8];
} Obj_824A2838;

extern void fn_82F53A20(void *self, const void *src);
extern char lbl_821BF58C[];

static __forceinline __vector4 LoadFloat3(const Float3_824A2838 *src)
{
    __vector4 vl, vr;

    vr = __lvrx(src, 12);
    vl = __lvlx(src, 0);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
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

Obj_824A2838 *fn_824A2838(Obj_824A2838 *self, const Src_824A2838 *src)
{
    __vector4 v, zero, mask;

    fn_82F53A20(self, src);
    self->vt = lbl_821BF58C;
    self->f3c = src->f48;
    self->f40 = src->f4c;
    self->f44 = src->f50;
    v = LoadFloat3(&src->direction);
    zero = __VMXGetReg(77);
    mask = __VMXGetReg(67);
    v = __vsel(v, zero, mask);
    self->f60 = 0.0f;
    self->f64 = 0;
    self->direction = Normalize3(v);
    return self;
}
