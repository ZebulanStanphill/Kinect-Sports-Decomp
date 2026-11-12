// Picks one of three handles by the length of a velocity (fast when forced or above the upper
// tuning threshold, medium above the lower one, slow otherwise) and plays it at the owner's
// position (fn_825354B8), releasing the returned handle (fn_82536288).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vcfsx(__vector4 v, int shift);

typedef struct Tuning_8236A258 {
    char pad0[0x90];
    float mediumSpeed;   /* 0x90 */
    float fastSpeed;     /* 0x94 */
} Tuning_8236A258;

typedef struct Node_8236A258 {
    char pad0[0x50];
    __vector4 position;  /* 0x50 */
} Node_8236A258;

typedef struct Context_8236A258 {
    int value;
} Context_8236A258;

typedef struct Obj_8236A258 {
    char pad0[0xe10];
    Node_8236A258 *node;          /* 0xe10 */
    char pade14[0x1cc];
    Context_8236A258 *context;    /* 0xfe0 */
    char padfe4[0xc];
    unsigned int slow;            /* 0xff0 */
    unsigned int medium;          /* 0xff4 */
    unsigned int fast;            /* 0xff8 */
} Obj_8236A258;

extern Tuning_8236A258 lbl_831D18A8;
extern unsigned int lbl_83296BC0[];
extern unsigned int lbl_83296BD0[];
extern unsigned int fn_825354B8(unsigned int *h, void *b, int c, int d, void *e, void *f);
extern void fn_82536288(unsigned int *h);

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    h = __vspltisw(1);
    zero = __vspltisw(0);
    d = __vmsum3fp(v, v);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    mask = __vcmpeqfp(d, zero);
    rt = __vmulfp(d, h);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

static __forceinline void Play(Obj_8236A258 *self, unsigned int *e, __vector4 *position)
{
    unsigned int h;
    int ok = e != 0 ? *e != 0 : 0;

    if (ok) {
        h = *e;
        h = fn_825354B8(&h, position, 0, self->context->value, lbl_83296BC0, lbl_83296BD0);
        fn_82536288(&h);
    }
}

void fn_8236A258(Obj_8236A258 *self, __vector4 velocity, int force)
{
    __vector4 position;
    __vector4 length;

    position = self->node->position;
    length = Length3(velocity);
    if (length.vector4_f32[0] > lbl_831D18A8.fastSpeed || force != 0) {
        Play(self, &self->fast, &position);
    } else if (length.vector4_f32[0] > lbl_831D18A8.mediumSpeed) {
        Play(self, &self->medium, &position);
    } else {
        Play(self, &self->slow, &position);
    }
}
