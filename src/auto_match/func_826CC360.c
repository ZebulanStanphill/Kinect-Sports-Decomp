typedef struct Ref_826CC360 {
    unsigned int refcount;
} Ref_826CC360;

typedef struct Holder_826CC360 {
    Ref_826CC360 *ref;
} Holder_826CC360;

extern void fn_8267BE38(Ref_826CC360 *p);
extern void fn_8265CA20(void *p);

Holder_826CC360 *fn_826CC360(Holder_826CC360 *self, unsigned int flags)
{
    Ref_826CC360 *p = self->ref;
    if (p != 0) {
        if (--p->refcount == 0) {
            fn_8267BE38(p);
        }
    }
    if (flags & 1) {
        fn_8265CA20(self);
    }
    return self;
}
