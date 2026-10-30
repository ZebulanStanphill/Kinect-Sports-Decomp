extern "C" {
void fn_827E27F0(void *self);
void *fn_82811400(void *out, int n);
extern void *lbl_8201D160[];
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

struct Obj_827E2AC8 {
    void **vt;
};

extern "C" Obj_827E2AC8 *fn_827E2AC8(Obj_827E2AC8 *self, unsigned int flags)
{
    self->vt = lbl_8201D160;
    fn_827E27F0(self);
    if (flags & 1) {
        char buf[24];
        lbl_83156AA0->Free(self, fn_82811400(buf, 4));
    }
    return self;
}
