struct Unknown_82E7C7B0 {
    virtual int slot0();
    virtual int slot4();
    virtual unsigned int Release();
    virtual int slotC();
    virtual int Query(const void *iid, int flags, Unknown_82E7C7B0 **out);
};

struct Self_82E7C7B0 {
    int unk0;
    Unknown_82E7C7B0 *source;
};

extern "C" char lbl_82154AB8[];
extern "C" int fn_82EF0D10(Unknown_82E7C7B0 *obj, unsigned short *result);

extern "C" int fn_82E7C7B0(Self_82E7C7B0 *self, Unknown_82E7C7B0 **out)
{
    Unknown_82E7C7B0 *obj = 0;
    unsigned short flag;
    int hr;

    hr = self->source->Query(lbl_82154AB8, 0, &obj);
    if (hr != (int)0xC00D36D5 && hr >= 0) {
        flag = 0;
        hr = fn_82EF0D10(obj, &flag);
        if (hr >= 0) {
            if (flag == 0) {
                hr = 0xC00D36D5;
            } else {
                *out = obj;
                obj = 0;
            }
        }
    }
    if (obj != 0) {
        obj->Release();
    }
    return hr;
}
