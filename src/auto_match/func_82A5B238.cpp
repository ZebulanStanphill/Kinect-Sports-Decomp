struct IInner_82A5B238 {
    virtual void f0();
    virtual void release(int);
};
struct Base_82A5B238 { virtual void b0(); };
struct Wrap_82A5B238 : Base_82A5B238, IInner_82A5B238 { };
struct Obj_82A5B238 {
    virtual int create(void *, IInner_82A5B238 *, void *);
};

extern "C" {
extern char lbl_83219D50[];
Wrap_82A5B238 *fn_82A3FF60(void *, int, int, int);
Wrap_82A5B238 *fn_82A5B170(Wrap_82A5B238 *, Obj_82A5B238 *, void *, void *, void *);
void fn_82A4F4E0(void);
}

extern "C" int fn_82A5B238(Obj_82A5B238 *o, void *b, void *c, void *d, void *e, void *f, Wrap_82A5B238 **out)
{
    Wrap_82A5B238 *w;
    Wrap_82A5B238 *m;
    int hr;
    m = fn_82A3FF60(lbl_83219D50, 0x20, 0x20970006, 0);
    w = m != 0 ? fn_82A5B170(m, o, e, b, d) : 0;
    if (w == 0) {
        hr = 0x8007000e;
    } else {
        hr = o->create(c, w, f);
        if (hr >= 0) {
            *out = w;
        } else {
            static_cast<IInner_82A5B238 *>(w)->release(0);
            fn_82A4F4E0();
        }
    }
    return hr;
}
