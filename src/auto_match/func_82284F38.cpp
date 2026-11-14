#include <vector>

struct Impl_82284F38;
typedef struct ImplVt_82284F38 {
    void *copy;
    void (*call)(struct Impl_82284F38 *self);
} ImplVt_82284F38;
typedef struct Impl_82284F38 {
    ImplVt_82284F38 *vt;
} Impl_82284F38;
typedef struct Function_82284F38 {
    int storage[4];
    Impl_82284F38 *impl;
} Function_82284F38;
typedef struct Entry_82284F38 {
    char pad[0x400];
    Function_82284F38 onFirst;
    int pad414;
    Function_82284F38 onSecond;
    char pad42c[0x440 - 0x42c];
} Entry_82284F38;
typedef struct Obj_82284F38 {
    char pad[0x148];
    std::vector<Entry_82284F38> entries;
} Obj_82284F38;

extern "C" __declspec(noreturn) void fn_82F63108(void);

static __forceinline void Call(Function_82284F38 *f)
{
    if (f->impl == 0)
        fn_82F63108();
    f->impl->vt->call(f->impl);
}

extern "C" void fn_82284F38(Obj_82284F38 *self, int id)
{
    Entry_82284F38 *e;
    if (self->entries.empty()) return;
    e = &self->entries.back();
    switch (id) {
    case 100000:
        if (e->onFirst.impl != 0) Call(&e->onFirst);
        break;
    case 100001:
        if (e->onSecond.impl != 0) Call(&e->onSecond);
        break;
    }
}
