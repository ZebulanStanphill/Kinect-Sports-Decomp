struct Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual int GetString(void *a, void *b, unsigned short *buf, unsigned short *len);
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual int Process(unsigned short *buf, void *b, void *c, void *d, void *e);
};

extern "C" {
void fn_82E4FE40(void *p);
void *fn_82E50BE8(unsigned int size, int a, int b, int c, int d);
}

extern "C" int fn_82F412E8(Obj *obj, void *a, void *b, void *c, void *d, void *e)
{
    unsigned short len;
    unsigned short *buf;
    int hr;

    len = 0;
    hr = obj->GetString(b, a, 0, &len);
    if (hr >= 0) {
        unsigned int sz = len * 2;
        buf = (unsigned short *)fn_82E50BE8(sz, 0, 0, 0, 0);
        if (buf == 0) {
            hr = 0x8007000e;
        } else {
            hr = obj->GetString(b, a, buf, &len);
            if (hr >= 0)
                hr = obj->Process(buf, b, c, d, e);
            fn_82E4FE40(buf);
        }
    }
    return hr;
}
