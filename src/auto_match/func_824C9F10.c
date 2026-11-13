typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Vec_824C9F10 {
    __vector4 v;
} Vec_824C9F10;

typedef struct String_824C9F10 {
    union {
        char buf[16];
        char *ptr;
    } u;
    unsigned int size;
    unsigned int res;
} String_824C9F10;

typedef struct Key_824C9F10 {
    int pad0[2];
    String_824C9F10 name;    /* 0x08 */
} Key_824C9F10;

struct Impl_824C9F10;
typedef struct {
    void *f0;
    Vec_824C9F10 *(*call)(Vec_824C9F10 *out, struct Impl_824C9F10 *self, const Vec_824C9F10 *arg);
} ImplVtbl_824C9F10;
typedef struct Impl_824C9F10 { ImplVtbl_824C9F10 *vt; } Impl_824C9F10;

typedef struct Func_824C9F10 {
    int pad[4];
    Impl_824C9F10 *impl;     /* 0x10 */
} Func_824C9F10;

typedef struct Entry_824C9F10 {
    char pad0[0x58];
    Func_824C9F10 func;      /* 0x58 */
} Entry_824C9F10;

extern Entry_824C9F10 *fn_824C9FB8(Key_824C9F10 *key, const char *name);
extern __declspec(noreturn) void fn_82F63108(void);

static __forceinline const char *CStr(String_824C9F10 *s)
{
    return s->res < 0x10 ? s->u.buf : s->u.ptr;
}

Vec_824C9F10 *fn_824C9F10(Vec_824C9F10 *out, Key_824C9F10 *key, const Vec_824C9F10 *def)
{
    Entry_824C9F10 *e = fn_824C9FB8(key, CStr(&key->name));
    if (e != 0 && e->func.impl != 0) {
        Func_824C9F10 *f = &e->func;
        if (f->impl == 0)
            fn_82F63108();
        f->impl->vt->call(out, f->impl, def);
    } else {
        out->v = def->v;
    }
    return out;
}
