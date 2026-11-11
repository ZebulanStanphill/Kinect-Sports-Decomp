// Per-frame update: resets the position (+0x10) of the sub-object at +0x80 from the float3 in
// the settings global lbl_831D43FC (w cleared through the game's reserved zero vector v77 and
// select mask v67) and marks it active (+0xd0), runs fn_824FAC80 on the context at +0x200 when
// it has a handle, and advances the object's time. Both writes go through one pointer to the
// sub-object, which is what keeps the vector store as base + 0x10.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Float3_824FA548 {
    float x, y, z;
} Float3_824FA548;

typedef struct Settings_824FA548 {
    int unk0;                    // 0x00
    Float3_824FA548 position;    // 0x04
    char pad10[0x38];
} Settings_824FA548;

typedef struct Placement_824FA548 {
    char pad0[0x10];
    __vector4 position;          // 0x10
    char pad20[0xb0];
    int active;                  // 0xd0
    char padD4[0xc];
} Placement_824FA548;

typedef struct Ctx_824FA548 {
    void *tab;                   // 0x00
    void *h;                     // 0x04
} Ctx_824FA548;

typedef struct Self_824FA548 {
    char pad0[0x34];
    float time;                  // 0x34
    char pad38[0x48];
    Placement_824FA548 placement;    // 0x80
    char pad160[0xa0];
    Ctx_824FA548 ctx;            // 0x200
} Self_824FA548;

extern Settings_824FA548 lbl_831D43FC;
extern int fn_824FAC80(Self_824FA548 *self, float dt, Ctx_824FA548 *c);

static __forceinline __vector4 LoadFloat3(const Float3_824FA548 *src)
{
    __vector4 vl, vr;

    vr = __lvrx(src, 12);
    vl = __lvlx(src, 0);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
}

// Float3 widened to a vector with w cleared (zero vector v77 selected through mask v67).
static __forceinline __vector4 LoadFloat3W0(const Float3_824FA548 *src)
{
    __vector4 v, zero, mask;

    v = LoadFloat3(src);
    zero = __VMXGetReg(77);
    mask = __VMXGetReg(67);
    return __vsel(v, zero, mask);
}

void fn_824FA548(Self_824FA548 *self, float dt)
{
    Placement_824FA548 *p = &self->placement;
    p->position = LoadFloat3W0(&lbl_831D43FC.position);
    p->active = 1;
    if (self->ctx.h != 0) {
        fn_824FAC80(self, dt, &self->ctx);
    }
    self->time = self->time + dt;
}
