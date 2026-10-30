extern "C" {
void *fn_82811400(void *out, int n);
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

extern "C" void fn_827DA2C0(void *p)
{
    char buf[24];
    lbl_83156AA0->Free(p, fn_82811400(buf, 4));
}
