typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vxor(__vector4 a, __vector4 b);

extern void fn_82CE4040(void *obj);
extern void fn_82CE4118(void *obj);

typedef struct {
    __vector4 col[3];
    __vector4 translation;
} Transform_82DA0868;

typedef struct {
    char pad[0x18];
    void *ref;
    char pad1c[0x14];
    Transform_82DA0868 a;
    Transform_82DA0868 b;
} Owner_82DA0868;

static __forceinline void SetZero4(__vector4 *v)
{
    *v = __vxor(*v, *v);
}

static __forceinline void SetIdentity(Transform_82DA0868 *t)
{
    __vector4 zero;
    zero = __vxor(zero, zero);
    t->col[0] = zero;
    t->col[1] = zero;
    t->col[2] = zero;
    t->col[0].vector4_f32[0] = 1.0f;
    t->col[1].vector4_f32[1] = 1.0f;
    t->col[2].vector4_f32[2] = 1.0f;
    SetZero4(&t->translation);
}

void fn_82DA0868(Owner_82DA0868 *self, const __vector4 *a, const __vector4 *b, void *obj)
{
    if (obj != 0) {
        fn_82CE4040(obj);
    }
    if (self->ref != 0) {
        fn_82CE4118(self->ref);
    }
    self->ref = obj;
    SetIdentity(&self->a);
    SetIdentity(&self->b);
    self->a.translation = *a;
    self->b.translation = *b;
}
