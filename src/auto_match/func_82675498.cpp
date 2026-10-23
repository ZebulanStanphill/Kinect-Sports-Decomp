// ScaleformFileOpener constructor (stores ??_7ScaleformFileOpener@@6B@).
extern "C" {
void *fn_8251F718(void *p);
void fn_82520158(const char *s, void *out, int flag);
void fn_82674748(void *a, void *b, void *c);
extern int lbl_831E7E78;
}

struct Sub {
    int v[4];
};

struct OpenerBase {
    int a;
    int b;
    __forceinline OpenerBase()
    {
        a = 1;
        b = 10;
        lbl_831E7E78 = 0;
    }
};

class ScaleformFileOpener : public OpenerBase {
public:
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    void *c;
    Sub sub;
    int d[5];
    __forceinline ScaleformFileOpener()
    {
        char s1[4];
        char s2[4];
        c = 0;
        fn_82674748(&sub, s1, s1);
        d[0] = 0;
        d[1] = 0;
        d[2] = 0;
        d[3] = 0;
        d[4] = 0;
        fn_82520158("gfxCommonSharedLib", s2, 0);
        c = fn_8251F718(s2);
    }
};

extern "C" ScaleformFileOpener *fn_82675498(ScaleformFileOpener *p)
{
    p->ScaleformFileOpener::ScaleformFileOpener();
    return p;
}
