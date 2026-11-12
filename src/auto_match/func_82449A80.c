typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Item_82449A80 {
    char pad0[0xe0];
    __vector4 position;     /* 0xe0 */
} Item_82449A80;

typedef struct State_82449A80 {
    char pad0[0x18];
    int done;               /* 0x18 */
    void *first;            /* 0x1c */
    void *second;           /* 0x20 */
} State_82449A80;

typedef struct Self_82449A80 Self_82449A80;
typedef struct SelfVtbl_82449A80 {
    char pad0[0x48];
    int (*isFinished)(Self_82449A80 *self);     /* 0x48 */
} SelfVtbl_82449A80;

struct Self_82449A80 {
    SelfVtbl_82449A80 *vt;
    char pad4[0x10];
    int type;                   /* 0x14 */
    char pad18[0x28];
    int *key;                   /* 0x40 */
    char pad44[0x4];
    State_82449A80 *state;      /* 0x48 */
};

Item_82449A80 *fn_8242C1B8(int key);
void fn_824FBCC8(void *p);
void fn_824FBC28(void *p);

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 one, zero, half, d, rsq, mask, dh, rsq2, t, result;
    one = __vspltisw(1);
    zero = __vspltisw(0);
    d = __vmsum3fp(v, v);
    half = __vcfsx(one, 1);
    rsq = __vrsqrtefp(d);
    mask = __vcmpeqfp(d, zero);
    dh = __vmulfp(d, half);
    rsq2 = __vmulfp(rsq, rsq);
    t = __vnmsubfp(dh, rsq2, half);
    rsq = __vmaddfp(rsq, t, rsq);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

void fn_82449A80(Self_82449A80 *self)
{
    int pending;
    int type;

    if (self->state->done != 0)
        return;
    type = self->type;
    pending = type == 14 || type == 10 || type == 13 || type == 15;
    if (self->vt->isFinished(self) != 0) {
        self->state->done = 1;
        if (self->state->first != 0)
            fn_824FBCC8(self->state->first);
        if (self->state->second != 0)
            fn_824FBCC8(self->state->second);
    } else if (pending != 0) {
        Item_82449A80 *item = fn_8242C1B8(*self->key);
        __vector4 len = Length3(item->position);
        if (len.vector4_f32[0] == 0.0f) {
            self->state->done = 1;
            if (self->state->first != 0)
                fn_824FBC28(self->state->first);
            if (self->state->second != 0)
                fn_824FBC28(self->state->second);
        }
    }
}
