typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Impl_82393B10 Impl_82393B10;
struct Impl_82393B10 {
    struct {
        void *copy;
        void (*call)(Impl_82393B10 *self, __vector4 a, __vector4 b, __vector4 c, float f0, int i0, int i1, int i2, float f1);
    } *vt;
};

typedef struct {
    char space[0x10];
    Impl_82393B10 *impl;
    int pad14;
} Func_82393B10;

typedef struct {
    Func_82393B10 func;   /* 0x00 */
    char pad18[8];
    __vector4 a;          /* 0x20 */
    __vector4 b;          /* 0x30 */
    __vector4 c;          /* 0x40 */
    float f0;             /* 0x50 */
    char pad54[0xc];
    int i0;               /* 0x60 */
    char pad64[0xc];
    int i1;               /* 0x70 */
    char pad74[0xc];
    int i2;               /* 0x80 */
    char pad84[0xc];
    float f1;             /* 0x90 */
} Bound_82393B10;

typedef struct {
    char pad[0x10];
    Bound_82393B10 bound; /* 0x10 */
} Self_82393B10;

extern __declspec(noreturn) void fn_82F63108(void);

static __forceinline void Invoke(Func_82393B10 *f, __vector4 a, __vector4 b, __vector4 c, float f0, int i0, int i1, int i2, float f1)
{
    if (f->impl == 0) {
        fn_82F63108();
    }
    f->impl->vt->call(f->impl, a, b, c, f0, i0, i1, i2, f1);
}

void fn_82393B10(Self_82393B10 *self)
{
    Bound_82393B10 *b = &self->bound;
    Invoke(&b->func, b->a, b->b, b->c, b->f0, b->i0, b->i1, b->i2, b->f1);
}
