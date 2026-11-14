class IUnk_82E3A1C0 {
public:
    virtual int QueryInterface(const void *iid, IUnk_82E3A1C0 **out);
    virtual unsigned long AddRef();
    virtual unsigned long Release();
};

class Item_82E3A1C0 : public IUnk_82E3A1C0 {
public:
    virtual void slot3();
    virtual void slot4();
    virtual int GetValue(int flags, __int64 *value);
};

class List_82E3A1C0 : public IUnk_82E3A1C0 {
public:
    virtual int GetCount(const void *key, unsigned int *count);
    virtual int GetItem(const void *key, unsigned int index, Item_82E3A1C0 **item);
};

struct Self_82E3A1C0 {
    char pad0[0x48];
    IUnk_82E3A1C0 *source;      /* 0x48 */
    char pad4c[0x20];
    int opened;                 /* 0x6c */
};

extern "C" char lbl_82154C18[];
extern "C" char lbl_8202E618[];

extern "C" int fn_82E3A1C0(Self_82E3A1C0 *self, __int64 *out)
{
    List_82E3A1C0 *list;
    Item_82E3A1C0 *item;
    unsigned int count;
    unsigned int i;
    __int64 total;
    __int64 value;
    int hr;

    if (self->opened == 0)
        return 0xc00d4655;
    if (out == 0)
        return 0x80004003;
    *out = 0;
    if (self->source == 0)
        return 0xc00d36b6;
    list = 0;
    item = 0;
    hr = self->source->QueryInterface(lbl_82154C18, (IUnk_82E3A1C0 **)&list);
    if (hr >= 0) {
        count = 0;
        hr = list->GetCount(lbl_8202E618, &count);
        if (hr >= 0) {
            total = 0;
            for (i = 0; i < count; i++) {
                hr = list->GetItem(lbl_8202E618, i, &item);
                if (hr < 0)
                    goto done;
                value = 0;
                hr = item->GetValue(0, &value);
                if (hr < 0)
                    goto done;
                total += value;
                if (item != 0) {
                    item->Release();
                    item = 0;
                }
            }
            *out = total;
        }
    }
done:
    if (list != 0) {
        list->Release();
        list = 0;
    }
    if (item != 0) {
        item->Release();
        item = 0;
    }
    return hr;
}
