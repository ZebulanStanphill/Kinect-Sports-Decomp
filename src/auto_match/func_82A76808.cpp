struct Obj_82A76808 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void release(int);
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual int init(void *);
};

extern "C" {
extern char lbl_83219D50[];
void *fn_82A3FF60(void *, int, int, int);
Obj_82A76808 *fn_82A766C0(void *, void *, void *, void *);
void fn_82A4F4E0(void);
}

extern "C" int fn_82A76808(void *a, void *b, void *c, void *d, Obj_82A76808 **out)
{
    Obj_82A76808 *w;
    void *m;
    int hr;
    m = fn_82A3FF60(lbl_83219D50, 0x9c, 0x20970006, 0);
    w = m != 0 ? fn_82A766C0(m, c, b, d) : 0;
    if (w == 0) {
        hr = 0x8007000e;
    } else {
        hr = w->init(a);
        if (hr >= 0) {
            *out = w;
        } else {
            w->release(0);
            fn_82A4F4E0();
        }
    }
    return hr;
}
