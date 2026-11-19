struct Item_82F3C5E8 {
    virtual long QueryInterface(const void *iid, void **out);
    virtual unsigned long AddRef();
    virtual unsigned long Release();
};

struct Guid_82F3C5E8 {
    unsigned char bytes[16];
};

struct Source_82F3C5E8 {
    virtual void Slot0();
    virtual void Slot4();
    virtual void Slot8();
    virtual long GetCount(const Guid_82F3C5E8 *id, unsigned int *count);
    virtual long GetItem(const Guid_82F3C5E8 *id, unsigned int index, Item_82F3C5E8 **item);
    virtual void Slot14();
    virtual void Slot18();
    virtual long Remove(Item_82F3C5E8 *item);
};

struct Owner_82F3C5E8 {
    char pad0[0x54];
    Source_82F3C5E8 *source; /* 0x54 */
};

template <class T> struct Ptr_82F3C5E8 {
    T *p;

    Ptr_82F3C5E8() : p(0)
    {
    }

    ~Ptr_82F3C5E8()
    {
        if (p) {
            p->Release();
        }
    }

    __forceinline void Release()
    {
        if (p) {
            p->Release();
            p = 0;
        }
    }

    T **operator&()
    {
        return &p;
    }

    operator T *() const
    {
        return p;
    }
};

extern "C" const Guid_82F3C5E8 lbl_82154A98;
extern "C" long fn_82EE55F8(Item_82F3C5E8 *item, unsigned short *count);
extern "C" long fn_82EE5BE8(Item_82F3C5E8 *item, unsigned short index, unsigned short *value,
                            unsigned short *extra);

extern "C" long fn_82F3C5E8(Owner_82F3C5E8 *self, int *table)
{
    long hr;
    Ptr_82F3C5E8<Item_82F3C5E8> item;
    unsigned int count;
    unsigned int i;
    unsigned short entryCount;
    unsigned short value;
    unsigned short extra;
    unsigned short j;

    hr = self->source->GetCount(&lbl_82154A98, &count);
    if (hr < 0) {
        goto done;
    }
    for (i = 0; i < count; i++) {
        hr = self->source->GetItem(&lbl_82154A98, i, &item);
        if (hr < 0) {
            goto done;
        }
        Item_82F3C5E8 *entry = item;
        hr = fn_82EE55F8(entry, &entryCount);
        if (hr < 0) {
            goto done;
        }
        for (j = 0; j < entryCount; j++) {
            hr = fn_82EE5BE8(entry, j, &value, &extra);
            if (hr < 0) {
                goto done;
            }
            if (value > 0x7f || table[value] == 0) {
                hr = self->source->Remove(item);
                if (hr < 0) {
                    goto done;
                }
                break;
            }
        }
        item.Release();
    }
done:
    return hr;
}
