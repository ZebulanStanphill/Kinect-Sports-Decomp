struct Sub_82E703F0 {
    virtual int QueryInterface_82E703F0(void) = 0;
    virtual int AddRef_82E703F0(void) = 0;
    virtual int Release(void) = 0;
    virtual void v3(void) = 0;
    virtual void v4(void) = 0;
    virtual void v5(void) = 0;
    virtual void v6(void) = 0;
    virtual void v7(void) = 0;
    virtual int f20(unsigned short a, int b, unsigned __int64 *out) = 0;
};

struct Obj_82E703F0 {
    virtual void v0(void) = 0;
    virtual void v1(void) = 0;
    virtual void v2(void) = 0;
    virtual void v3(void) = 0;
    virtual void v4(void) = 0;
    virtual void v5(void) = 0;
    virtual void v6(void) = 0;
    virtual void v7(void) = 0;
    virtual void v8(void) = 0;
    virtual int f24(int a, unsigned __int64 *out, Sub_82E703F0 **sub) = 0;
    virtual void v10(void) = 0;
    virtual void v11(void) = 0;
    virtual void v12(void) = 0;
    virtual int f34(void) = 0;

    int f4;
    unsigned short f8;
};

extern "C" int fn_82E6F498(Obj_82E703F0 *self, unsigned __int64 a, unsigned int *out);

extern "C" int fn_82E703F0(Obj_82E703F0 *self, int param_2, int param_3,
                           unsigned __int64 *param_4, __int64 *param_5)
{
    Sub_82E703F0 *sub;
    unsigned int base;
    unsigned __int64 key;
    unsigned __int64 off;
    int hr;

    sub = 0;
    if (param_4 == 0) {
        hr = 0x80004003;
    } else {
        *param_4 = 0;
        if (param_5 != 0) {
            *param_5 = -1;
        }
        key = 0;
        hr = self->f24(param_2, &key, &sub);
        if (hr >= 0) {
            hr = fn_82E6F498(self, key, &base);
            if (hr >= 0) {
                off = 0;
                hr = sub->f20(self->f8, self->f34(), &off);
                if (hr >= 0) {
                    *param_4 = (unsigned __int64)base + off;
                }
            }
        }
        if (sub != 0) {
            sub->Release();
        }
    }
    return hr;
}
