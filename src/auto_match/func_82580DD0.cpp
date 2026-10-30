extern "C" {
void fn_82BFE3B0(void *p);
void *fn_82811400(void *out, int n);
extern void *lbl_821C55F8[];
extern void *lbl_821CB794[];
}

struct HeapIface_83156AA0 {
    virtual void s0();
    virtual void s1();
    virtual void s2();
    virtual void s3();
    virtual void s4();
    virtual void s5();
    virtual void Free(void *p, void *r);
};
extern "C" HeapIface_83156AA0 *lbl_83156AA0;

struct Ptr_82580DD0 {
    void *p;
};
struct Obj_82580DD0 {
    void **vt;
    Ptr_82580DD0 m;
};

static __forceinline void Reset_82580DD0(Ptr_82580DD0 *m)
{
    if (m->p) {
        fn_82BFE3B0(m->p);
        m->p = 0;
    }
}

extern "C" Obj_82580DD0 *fn_82580DD0(Obj_82580DD0 *self, unsigned int flags)
{
    self->vt = lbl_821C55F8;
    Reset_82580DD0(&self->m);
    self->vt = lbl_821CB794;
    if (flags & 1) {
        char buf[24];
        lbl_83156AA0->Free(self, fn_82811400(buf, 4));
    }
    return self;
}
