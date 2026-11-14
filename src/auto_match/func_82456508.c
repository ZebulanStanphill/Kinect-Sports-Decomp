typedef struct Rep_82456508 {
    void *vt;
    long uses;
    long weaks;
} Rep_82456508;

struct Impl_82456508;
typedef struct ImplVt_82456508 {
    void *copy;
    void (*call)(struct Impl_82456508 *self, unsigned int arg);
} ImplVt_82456508;

typedef struct Impl_82456508 {
    ImplVt_82456508 *vt;
} Impl_82456508;

typedef struct Function_82456508 {
    int storage[4];
    Impl_82456508 *impl;
} Function_82456508;

typedef struct WeakPtr_82456508 {
    Function_82456508 *ptr;
    Rep_82456508 *rep;
} WeakPtr_82456508;

typedef struct Vector_82456508 {
    WeakPtr_82456508 *begin;
    WeakPtr_82456508 *end;
    WeakPtr_82456508 *capacity;
} Vector_82456508;

typedef struct ArgVector_82456508 {
    unsigned int *begin;
    unsigned int *end;
    unsigned int *capacity;
} ArgVector_82456508;

typedef struct Dispatcher_82456508 {
    char pad0[0xc];
    Vector_82456508 listeners;
    char pad18[4];
    ArgVector_82456508 pending;
    char pad28[4];
    int dirty;
} Dispatcher_82456508;

extern unsigned char fn_8223AAC0(Rep_82456508 *rep);
extern void fn_822315A0(Rep_82456508 *rep);
extern void fn_8228E658(WeakPtr_82456508 *dst, WeakPtr_82456508 *src);
extern void fn_823210A8(WeakPtr_82456508 *first, WeakPtr_82456508 *last);
extern __declspec(noreturn) void fn_82F63108(void);
extern void *memmove(void *dst, const void *src, unsigned int size);

static __forceinline unsigned char Expired(WeakPtr_82456508 *w)
{
    return w->rep == 0 || w->rep->uses == 0;
}

static __forceinline void EraseWeak(Vector_82456508 *v, WeakPtr_82456508 *it)
{
    WeakPtr_82456508 *end = v->end;
    WeakPtr_82456508 *dst = it;
    WeakPtr_82456508 *src;
    for (src = it + 1; src != end; ++src, ++dst)
        fn_8228E658(dst, src);
    fn_823210A8(v->end - 1, v->end);
    --v->end;
}

static __forceinline void EraseArgs(ArgVector_82456508 *v)
{
    unsigned int *first = v->begin;
    unsigned int *last = v->end;
    if (first != last) {
        int count = v->end - last;
        memmove(first, last, count * sizeof(unsigned int));
        v->end = first + count;
    }
}

/* Delivers every pending argument to each live listener, dropping expired ones, then clears the queue. */
void fn_82456508(Dispatcher_82456508 *self)
{
    WeakPtr_82456508 *it;

    for (it = self->listeners.begin; it != self->listeners.end;) {
        if (!Expired(it)) {
            Rep_82456508 *rep = it->rep;
            Function_82456508 *px = it->ptr;
            Function_82456508 *fp = 0;
            Rep_82456508 *rp = 0;
            unsigned int *arg;
            unsigned int *end;
            if (rep != 0 && fn_8223AAC0(rep) != 0) {
                rp = rep;
                fp = px;
            }
            end = self->pending.end;
            for (arg = self->pending.begin; arg != end; ++arg) {
                if (fp->impl == 0)
                    fn_82F63108();
                fp->impl->vt->call(fp->impl, *arg);
            }
            ++it;
            if (rp != 0)
                fn_822315A0(rp);
        } else {
            EraseWeak(&self->listeners, it);
        }
    }
    EraseArgs(&self->pending);
    self->dirty = 0;
}
