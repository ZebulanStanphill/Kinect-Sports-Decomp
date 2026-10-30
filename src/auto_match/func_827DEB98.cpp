extern "C" {
void *fn_82811400(void *out, int n);
extern void *lbl_821CAABC[];
}

struct HeapIface_83156AA0 {
    virtual void s0();
    virtual void s1();
    virtual void s2();
    virtual void Op3(void *p, void *r);
    virtual void s4();
    virtual void s5();
    virtual void Free(void *p, void *r);
};
extern "C" HeapIface_83156AA0 *lbl_83156AA0;

struct Obj_827DEB98 {
    void **vt;
};

extern "C" Obj_827DEB98 *fn_827DEB98(Obj_827DEB98 *self, unsigned int flags)
{
    self->vt = lbl_821CAABC;
    if (flags & 1) {
        char buf[24];
        lbl_83156AA0->Free(self, fn_82811400(buf, 4));
    }
    return self;
}
