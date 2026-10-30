extern "C" long _InterlockedDecrement(long *);
extern "C" {
void fn_82BE56C0(void *p);
extern void *lbl_820E9B54[];
}

struct Obj_82BE8DD0 {
    void **vt;
    long uses;
};

extern "C" Obj_82BE8DD0 *fn_82BE8DD0(Obj_82BE8DD0 *self, unsigned int flags)
{
    self->vt = lbl_820E9B54;
    _InterlockedDecrement(&self->uses);
    if (flags & 1) {
        fn_82BE56C0(self);
    }
    return self;
}
