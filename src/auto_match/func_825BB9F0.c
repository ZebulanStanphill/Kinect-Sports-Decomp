// Queues a type-3 request (fn_825A1260 on the context's queue at +0x7e8) for the context's
// object at +0x3e4, if there is one: parameter block {4, 0x40, 1, position (float3 at +0x14
// widened through the reserved zero/select registers v77/v67), (0, 0, value at +0x34, 0),
// value at +0x38}. The second vector is built the way XNA Math's XMVectorSet does.
// The 0.0f literals are the game's LTCG-pooled zero: the unit needs the pool alias
// __real@00000000=ltcg_pool_0_0f (objects.json "pool_aliases").
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vrlimi(__vector4 a, __vector4 b, unsigned int mask, unsigned int rotate);
__vector4 __VMXGetReg(int n);

typedef struct Float3_825BB9F0 {
    float x, y, z;
} Float3_825BB9F0;

typedef struct Obj_825BB9F0 {
    char pad00[0x14];
    Float3_825BB9F0 position;        // 0x14
    char pad20[0x14];
    float f34;                       // 0x34
    float f38;                       // 0x38
} Obj_825BB9F0;

typedef struct Context_825BB9F0 {
    char pad000[0x3e4];
    int target;                      // 0x3e4
    char pad3e8[0x400];
    char queue[4];                   // 0x7e8
} Context_825BB9F0;

typedef struct Params_825BB9F0 {
    int f00;                         // 0x00
    int f04;                         // 0x04
    int f08;                         // 0x08
    __vector4 position;              // 0x10
    __vector4 v20;                   // 0x20
    float f30;                       // 0x30
} Params_825BB9F0;

extern void fn_825A1260(void *queue, int target, int type, int arg, Params_825BB9F0 *params);

static __forceinline __vector4 LoadFloat3(const Float3_825BB9F0 *src)
{
    __vector4 vl, vr;

    vr = __lvrx(src, 12);
    vl = __lvlx(src, 0);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
}

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx, vy, vz, vw;

    vx = __lvlx(&x, 0);
    vy = __lvlx(&y, 0);
    vz = __lvlx(&z, 0);
    vw = __lvlx(&w, 0);
    vy = __vrlimi(vy, vw, 0x4, 3);
    vx = __vrlimi(vx, vz, 0x4, 3);
    return __vrlimi(vx, vy, 0x3, 2);
}

void fn_825BB9F0(Obj_825BB9F0 *self, Context_825BB9F0 *context)
{
    Params_825BB9F0 params;
    __vector4 v, zero, mask;
    int target = context->target;

    if (target != 0) {
        params.f00 = 4;
        params.f04 = 0x40;
        params.f08 = 1;
        v = LoadFloat3(&self->position);
        zero = __VMXGetReg(77);
        mask = __VMXGetReg(67);
        params.position = __vsel(v, zero, mask);
        params.v20 = VectorSet(0.0f, 0.0f, self->f34, 0.0f);
        params.f30 = self->f38;
        fn_825A1260(context->queue, target, 3, 0, &params);
    }
}
