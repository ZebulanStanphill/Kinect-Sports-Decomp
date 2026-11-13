struct Iface_82A77308 {
    virtual long QueryInterface(const void *iid, Iface_82A77308 **out);
    virtual unsigned long AddRef();
    virtual unsigned long Release();
    virtual int Apply(void *arg);           /* 0x0c */
};

struct Source_82A77308 {
    virtual long QueryInterface(const void *iid, Iface_82A77308 **out);
    virtual unsigned long AddRef();
    virtual unsigned long Release();
    virtual void v0c();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1c();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual int Apply(void *arg);           /* 0x2c */
};

extern "C" char lbl_82089DA0[];

extern "C" int fn_82A77308(void *self, Source_82A77308 *source, void *arg)
{
    Iface_82A77308 *itf = 0;
    int result;
    if (source->QueryInterface(lbl_82089DA0, &itf) >= 0) {
        result = itf->Apply(arg);
        itf->Release();
    } else {
        result = source->Apply(arg);
    }
    return result;
}
