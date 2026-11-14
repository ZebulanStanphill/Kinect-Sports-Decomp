typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Impl_82393D18 Impl_82393D18;
struct Impl_82393D18 {
    struct {
        void *copy;
        void (*call)(Impl_82393D18 *self, int arg, __vector4 a, __vector4 b, __vector4 c, int extra, float value);
    } *vt;
};

typedef struct {
    char space[0x10];
    Impl_82393D18 *impl;
    int pad14;
} Func_82393D18;

typedef struct {
    Func_82393D18 func;   /* 0x00 */
    char pad18[8];
    __vector4 a;          /* 0x20 */
    __vector4 b;          /* 0x30 */
    __vector4 c;          /* 0x40 */
    float value;          /* 0x50 */
    char pad54[0xc];
    int extra;            /* 0x60 */
} Bound_82393D18;

typedef struct {
    char pad[0x10];
    Bound_82393D18 bound; /* 0x10 */
} Self_82393D18;

extern __declspec(noreturn) void fn_82F63108(void);

/* The bound object stores value before extra; the target takes extra (r5) before value (f1). */
static __forceinline void Invoke(Func_82393D18 *f, int arg, __vector4 a, __vector4 b, __vector4 c, float value, int extra)
{
    if (f->impl == 0) {
        fn_82F63108();
    }
    f->impl->vt->call(f->impl, arg, a, b, c, extra, value);
}

void fn_82393D18(Self_82393D18 *self, int arg)
{
    Bound_82393D18 *b = &self->bound;
    Invoke(&b->func, arg, b->a, b->b, b->c, b->value, b->extra);
}
