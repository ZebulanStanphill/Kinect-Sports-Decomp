typedef struct Rep_82321250 {
    void *vt;
    long uses;
    long weaks;
} Rep_82321250;

struct Impl_82321250;
typedef struct ImplVt_82321250 {
    void *copy;
    void (*call)(struct Impl_82321250 *self, unsigned int arg, unsigned int value);
} ImplVt_82321250;

typedef struct Impl_82321250 {
    ImplVt_82321250 *vt;
} Impl_82321250;

typedef struct Function_82321250 {
    int storage[4];
    Impl_82321250 *impl;
} Function_82321250;

typedef struct WeakPtr_82321250 {
    Function_82321250 *ptr;
    Rep_82321250 *rep;
} WeakPtr_82321250;

typedef struct Vector_82321250 {
    WeakPtr_82321250 *begin;
    WeakPtr_82321250 *end;
    WeakPtr_82321250 *capacity;
} Vector_82321250;

extern unsigned char fn_8223AAC0(Rep_82321250 *rep);
extern void fn_822315A0(Rep_82321250 *rep);
extern void fn_8228E658(WeakPtr_82321250 *dst, WeakPtr_82321250 *src);
extern void fn_823210A8(WeakPtr_82321250 *first, WeakPtr_82321250 *last);
extern __declspec(noreturn) void fn_82F63108(void);

static __forceinline unsigned char Expired(WeakPtr_82321250 *w)
{
    return w->rep == 0 || w->rep->uses == 0;
}

void fn_82321250(Vector_82321250 *listeners, unsigned int arg, const unsigned int *value)
{
    WeakPtr_82321250 *it;

    for (it = listeners->begin; it != listeners->end;) {
        if (!Expired(it)) {
            Rep_82321250 *rep = it->rep;
            Function_82321250 *px = it->ptr;
            Function_82321250 *fp = 0;
            Rep_82321250 *rp = 0;
            if (rep != 0 && fn_8223AAC0(rep) != 0) {
                rp = rep;
                fp = px;
            }
            if (fp->impl == 0)
                fn_82F63108();
            fp->impl->vt->call(fp->impl, arg, *value);
            if (rp != 0)
                fn_822315A0(rp);
            ++it;
        } else {
            WeakPtr_82321250 *end = listeners->end;
            WeakPtr_82321250 *dst = it;
            WeakPtr_82321250 *src;
            for (src = it + 1; src != end; ++src, ++dst)
                fn_8228E658(dst, src);
            fn_823210A8(listeners->end - 1, listeners->end);
            --listeners->end;
        }
    }
}
