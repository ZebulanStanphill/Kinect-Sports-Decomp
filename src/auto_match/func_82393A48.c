typedef struct Impl_82393A48 Impl_82393A48;
struct Impl_82393A48 {
    struct {
        void *f0;
        void (*call)(Impl_82393A48 *self, void *arg);
    } *vt;
};

typedef struct {
    char pad[0x10];
    Impl_82393A48 *impl;
    int pad14;
} Func_82393A48;

typedef struct {
    Func_82393A48 func;   /* 0x00 */
    char pad18[8];
    char arg[4];          /* 0x20 */
} Bound_82393A48;

typedef struct {
    char pad[0x10];
    Bound_82393A48 bound; /* 0x10 */
} Self_82393A48;

extern __declspec(noreturn) void fn_82F63108(void);

void fn_82393A48(Self_82393A48 *self)
{
    Bound_82393A48 *b = &self->bound;
    if (b->func.impl == 0) {
        fn_82F63108();
    }
    b->func.impl->vt->call(b->func.impl, b->arg);
}
