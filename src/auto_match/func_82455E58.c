typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Body_82455E58 {
    char pad0[0x5b0];
    int context;             /* 0x5b0 */
    char pad5b4[0x17c];
    __vector4 push;          /* 0x730 */
} Body_82455E58;

typedef struct Pair_82455E58 Pair_82455E58;
typedef struct PairVtbl_82455E58 {
    void *slot0;
    Body_82455E58 *(*GetFirst)(Pair_82455E58 *self);
    Body_82455E58 *(*GetSecond)(Pair_82455E58 *self);
} PairVtbl_82455E58;
struct Pair_82455E58 {
    const PairVtbl_82455E58 *vt;
};

struct Impl_82455E58;
typedef struct ImplVt_82455E58 {
    void *copy;
    void (*call)(struct Impl_82455E58 *self, unsigned int which, __vector4 v);
} ImplVt_82455E58;

typedef struct Impl_82455E58 {
    ImplVt_82455E58 *vt;
} Impl_82455E58;

typedef struct Function_82455E58 {
    int storage[4];
    Impl_82455E58 *impl;
} Function_82455E58;

typedef struct Separator_82455E58 {
    char pad0[0x24];
    Pair_82455E58 *pair;     /* 0x24 */
    Function_82455E58 callback; /* 0x28 */
} Separator_82455E58;

__vector4 *fn_82321D30(__vector4 *out, int context, Body_82455E58 *body, __vector4 v);
extern __declspec(noreturn) void fn_82F63108(void);

static __forceinline void Push(Body_82455E58 *b, __vector4 v)
{
    __vector4 tmp;
    b->push = *fn_82321D30(&tmp, b->context, b, v);
}

static __forceinline void Call(Function_82455E58 *f, unsigned int which, __vector4 v)
{
    if (f->impl == 0)
        fn_82F63108();
    f->impl->vt->call(f->impl, which, v);
}

void fn_82455E58(Separator_82455E58 *self, unsigned int which, __vector4 v)
{
    switch (which) {
    case 0:
        Push(self->pair->vt->GetFirst(self->pair), v);
        break;
    case 1:
        Push(self->pair->vt->GetSecond(self->pair), v);
        break;
    }
    if (self->callback.impl != 0)
        Call(&self->callback, which, v);
}
