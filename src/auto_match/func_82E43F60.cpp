class IUnk_82E43F60 {
public:
    virtual int QueryInterface(const void *iid, IUnk_82E43F60 **out);
    virtual unsigned long AddRef();
    virtual unsigned long Release();
    virtual void slot3();
    virtual int Get(IUnk_82E43F60 **out);
};

struct Self_82E43F60 {
    int unk0;
    char target[0x14];          /* 0x04 */
    void *lockSource;           /* 0x18 */
    char pad1c[0x5c];
    IUnk_82E43F60 *source;      /* 0x78 */
};

struct Pair_82E43F60 {
    IUnk_82E43F60 *a;
    IUnk_82E43F60 *b;
};

extern "C" char lbl_821545BC[];
extern "C" char lbl_82153DCC[];

extern "C" Pair_82E43F60 *fn_82E7C230(Pair_82E43F60 *pair, void *source);
extern "C" void fn_82E7C288(Pair_82E43F60 *pair);
extern "C" int fn_82E7E1D8(Pair_82E43F60 *pair, IUnk_82E43F60 *obj, void *target);
extern "C" int fn_82E62AD8(IUnk_82E43F60 *obj);

extern "C" int fn_82E43F60(Self_82E43F60 *self, IUnk_82E43F60 **out)
{
    IUnk_82E43F60 *first = 0;
    IUnk_82E43F60 *second = 0;
    IUnk_82E43F60 *obj = 0;
    Pair_82E43F60 pair;
    int hr;

    fn_82E7C230(&pair, self->lockSource);
    if (self->source == 0) {
        hr = 0x8000ffff;
    } else if (out == 0) {
        hr = 0x80004003;
    } else {
        *out = 0;
        hr = self->source->QueryInterface(lbl_821545BC, &first);
        if (hr >= 0) {
            hr = first->Get(&second);
            if (hr >= 0) {
                hr = second->QueryInterface(lbl_82153DCC, &obj);
                if (hr >= 0) {
                    hr = fn_82E7E1D8(&pair, obj, self->target);
                    if (hr >= 0) {
                        hr = fn_82E62AD8(obj);
                        if (hr >= 0) {
                            *out = obj;
                            if (obj != 0)
                                obj->AddRef();
                        }
                    }
                }
            }
        }
    }
    if (first != 0) {
        first->Release();
        first = 0;
    }
    if (second != 0) {
        second->Release();
        second = 0;
    }
    if (obj != 0) {
        obj->Release();
        obj = 0;
    }
    fn_82E7C288(&pair);
    return hr;
}
