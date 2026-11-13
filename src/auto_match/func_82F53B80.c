typedef struct Impl_82F53B80 Impl_82F53B80;
typedef struct Self_82F53B80 Self_82F53B80;
typedef struct ImplVt_82F53B80 { void *f0; void (*Do_call)(Impl_82F53B80 *, Self_82F53B80 *); } ImplVt_82F53B80;
struct Impl_82F53B80 { ImplVt_82F53B80 *vt; };
typedef struct Func_82F53B80 { char buf[0x10]; Impl_82F53B80 *impl; } Func_82F53B80;
struct Self_82F53B80 { int f0, f4; Func_82F53B80 cb; int pad1c; unsigned __int64 time; };
extern unsigned __int64 fn_824B42A0(void);
extern __declspec(noreturn) void fn_82F63108(void);

void fn_82F53B80(Self_82F53B80 *self)
{
    self->time = fn_824B42A0();
    if (self->cb.impl != 0) {
        Func_82F53B80 *f = &self->cb;
        if (f->impl == 0) {
            fn_82F63108();
        }
        f->impl->vt->Do_call(f->impl, self);
    }
}
