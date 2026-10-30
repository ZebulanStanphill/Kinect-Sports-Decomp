extern "C" {
void fn_822315A0(void *p);
void *fn_82811400(void *out, int n);
extern void *lbl_821CB838[];
extern void *lbl_821CA744[];
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

struct Obj_82628960 {
    void **vt;
    void *pad4;
    void *f8;
    char pad[0x1c];
    void *f28;
    void *pad2c;
    void *f30;
    void *pad34;
    void *f38;
};

static __forceinline void Release_82628960(void **pp)
{
    if (*pp) fn_822315A0(*pp);
}

extern "C" Obj_82628960 *fn_82628960(Obj_82628960 *self, unsigned int flags)
{
    self->vt = lbl_821CB838;
    Release_82628960(&self->f38);
    Release_82628960(&self->f30);
    Release_82628960(&self->f28);
    self->vt = lbl_821CA744;
    Release_82628960(&self->f8);
    if (flags & 1) {
        char buf[24];
        lbl_83156AA0->Free(self, fn_82811400(buf, 4));
    }
    return self;
}
