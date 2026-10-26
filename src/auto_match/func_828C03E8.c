typedef struct Impl Impl;
typedef struct ImplVt {
    void *pad[3];
    void (*destroy)(Impl *self, int dealloc);
} ImplVt;
struct Impl { ImplVt *vt; };
typedef struct Func {
    char storage[0x10];
    Impl *impl;
} Func;
extern void fn_828E2C48(void *p);

void fn_828C03E8(char *a, Func *f)
{
    fn_828E2C48(a + 0x10);
    if (f->impl != 0) {
        f->impl->vt->destroy(f->impl, f->impl != (Impl *)f);
        f->impl = 0;
    }
}
