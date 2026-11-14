typedef struct Rep_82321138 {
    void *vt;
    long uses;
    long weaks;
} Rep_82321138;

struct Impl_82321138;
typedef struct ImplVt_82321138 {
    void *copy;
    void (*call)(struct Impl_82321138 *self, unsigned int arg);
} ImplVt_82321138;

typedef struct Impl_82321138 {
    ImplVt_82321138 *vt;
} Impl_82321138;

typedef struct Function_82321138 {
    int storage[4];
    Impl_82321138 *impl;
} Function_82321138;

typedef struct WeakPtr_82321138 {
    Function_82321138 *ptr;
    Rep_82321138 *rep;
} WeakPtr_82321138;

typedef struct Vector_82321138 {
    WeakPtr_82321138 *begin;
    WeakPtr_82321138 *end;
    WeakPtr_82321138 *capacity;
} Vector_82321138;

extern unsigned char fn_8223AAC0(Rep_82321138 *rep);
extern void fn_822315A0(Rep_82321138 *rep);
extern void fn_8228E658(WeakPtr_82321138 *dst, WeakPtr_82321138 *src);
extern void fn_823210A8(WeakPtr_82321138 *first, WeakPtr_82321138 *last);
extern __declspec(noreturn) void fn_82F63108(void);

static __forceinline unsigned char Expired(WeakPtr_82321138 *w)
{
    return w->rep == 0 || w->rep->uses == 0;
}

void fn_82321138(Vector_82321138 *listeners, unsigned int arg)
{
    WeakPtr_82321138 *it;

    for (it = listeners->begin; it != listeners->end;) {
        if (!Expired(it)) {
            Rep_82321138 *rep = it->rep;
            Function_82321138 *px = it->ptr;
            Function_82321138 *fp = 0;
            Rep_82321138 *rp = 0;
            if (rep != 0 && fn_8223AAC0(rep) != 0) {
                rp = rep;
                fp = px;
            }
            if (fp->impl == 0)
                fn_82F63108();
            fp->impl->vt->call(fp->impl, arg);
            if (rp != 0)
                fn_822315A0(rp);
            ++it;
        } else {
            WeakPtr_82321138 *end = listeners->end;
            WeakPtr_82321138 *dst = it;
            WeakPtr_82321138 *src;
            for (src = it + 1; src != end; ++src, ++dst)
                fn_8228E658(dst, src);
            fn_823210A8(listeners->end - 1, listeners->end);
            --listeners->end;
        }
    }
}
