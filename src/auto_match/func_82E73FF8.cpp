extern "C" void *memset(void *, int, unsigned int);

struct PropVar_82E73FF8 {
    unsigned short vt;
    unsigned short r1;
    unsigned short r2;
    unsigned short r3;
    __int64 val;
};

class IUnk_82E73FF8 {
public:
    virtual long QueryInterface(const void *iid, void **out);
    virtual unsigned long AddRef();
    virtual unsigned long Release();
};

class Target_82E73FF8 {
public:
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2c();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3c();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4c();
    virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5c();
    virtual void v60(); virtual void v64(); virtual void v68(); virtual void v6c();
    virtual void v70(); virtual void v74(); virtual void v78(); virtual void v7c();
    virtual long Attach(IUnk_82E73FF8 *obj);   /* 0x80 */
};

class Self_82E73FF8 {
public:
    virtual void v00(); virtual void v04(); virtual void v08();
    virtual long Apply(Target_82E73FF8 *target, int arg, int *out);   /* 0x0c */

    char pad4[0x30];
    IUnk_82E73FF8 *current;   /* 0x34 */
    char pad38[8];
    IUnk_82E73FF8 *created;   /* 0x40 */
};

extern "C" long fn_82E49060(IUnk_82E73FF8 **out);
extern "C" void fn_82E50330(PropVar_82E73FF8 *pv);

extern "C" long fn_82E73FF8(Self_82E73FF8 *self, Target_82E73FF8 *target, int arg)
{
    PropVar_82E73FF8 pv;
    int result;
    long hr;

    if (target == 0)
        return 0x80070057;
    memset(&pv, 0, sizeof(pv));
    hr = fn_82E49060(&self->created);
    if (hr >= 0) {
        self->current = self->created;
        self->current->AddRef();
        hr = target->Attach(self->current);
        if (hr >= 0) {
            result = 0;
            hr = self->Apply(target, arg, &result);
        }
    }
    fn_82E50330(&pv);
    return hr;
}
