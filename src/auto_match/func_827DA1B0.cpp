extern "C" {
void fn_8256D798(void *self, int a, int b);
void *fn_82811400(void *out, int n);
extern void *lbl_8201BB38[];
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

struct Obj_827DA1B0 {
    void **vt;
};

extern "C" Obj_827DA1B0 *fn_827DA1B0(Obj_827DA1B0 *self, unsigned int flags)
{
    self->vt = lbl_8201BB38;
    fn_8256D798((char *)self + 0x34, 1, 0);
    if (flags & 1) {
        char buf[24];
        lbl_83156AA0->Free(self, fn_82811400(buf, 4));
    }
    return self;
}
