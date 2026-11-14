typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Impl_82393C18 Impl_82393C18;
struct Impl_82393C18 {
    struct {
        void *copy;
        void (*call)(Impl_82393C18 *self, int arg, __vector4 a, __vector4 b, __vector4 c, int extra, unsigned char flag, float value);
    } *vt;
};

typedef struct {
    char space[0x10];
    Impl_82393C18 *impl;
    int pad14;
} Func_82393C18;

typedef struct {
    Func_82393C18 func;   /* 0x00 */
    char pad18[8];
    __vector4 a;          /* 0x20 */
    __vector4 b;          /* 0x30 */
    __vector4 c;          /* 0x40 */
    float value;          /* 0x50 */
    char pad54[0xc];
    int extra;            /* 0x60 */
    char pad64[0xc];
    unsigned char flag;   /* 0x70 */
} Bound_82393C18;

typedef struct {
    char pad[0x10];
    Bound_82393C18 bound; /* 0x10 */
} Self_82393C18;

extern __declspec(noreturn) void fn_82F63108(void);

/* The bound object stores value, extra, flag; the target takes extra (r5), flag (r6), then value (f1). */
static __forceinline void Invoke(Func_82393C18 *f, int arg, __vector4 a, __vector4 b, __vector4 c, float value, int extra, unsigned char flag)
{
    if (f->impl == 0) {
        fn_82F63108();
    }
    f->impl->vt->call(f->impl, arg, a, b, c, extra, flag, value);
}

void fn_82393C18(Self_82393C18 *self, int arg)
{
    Bound_82393C18 *b = &self->bound;
    Invoke(&b->func, arg, b->a, b->b, b->c, b->value, b->extra, b->flag);
}
