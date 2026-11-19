struct Item_82F3C768 {
    virtual long QueryInterface(const void *iid, void **out);
    virtual unsigned long AddRef();
    virtual unsigned long Release();
};

struct Source_82F3C768 {
    virtual void Slot0();
    virtual void Slot4();
    virtual void Slot8();
    virtual long GetCount(unsigned int id, unsigned int *count);
    virtual long GetItem(unsigned int id, unsigned int index, Item_82F3C768 **item);
    virtual void Slot14();
    virtual void Slot18();
    virtual long Remove(Item_82F3C768 *item);
};

struct Owner_82F3C768 {
    char pad0[0x54];
    Source_82F3C768 *source; /* 0x54 */
};

template <class T> struct Ptr_82F3C768 {
    T *p;

    Ptr_82F3C768() : p(0)
    {
    }

    ~Ptr_82F3C768()
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

extern "C" long fn_82EE32B8(Item_82F3C768 *item, unsigned short *count);
extern "C" long fn_82EE3C50(Item_82F3C768 *item, unsigned short index, unsigned short *count);
extern "C" long fn_82EE3CE0(Item_82F3C768 *item, unsigned short index, unsigned short subIndex,
                            unsigned short *value);

extern "C" long fn_82F3C768(Owner_82F3C768 *self, unsigned int id, int *table)
{
    long hr;
    Ptr_82F3C768<Item_82F3C768> item;
    unsigned int count;
    unsigned int i;
    unsigned short outerCount;
    unsigned short innerCount;
    unsigned short value;
    unsigned short j;
    unsigned short k;

    hr = self->source->GetCount(id, &count);
    if (hr < 0) {
        goto done;
    }
    for (i = 0; i < count; i++) {
        hr = self->source->GetItem(id, i, &item);
        if (hr < 0) {
            goto done;
        }
        Item_82F3C768 *entry = item;
        hr = fn_82EE32B8(entry, &outerCount);
        if (hr < 0) {
            goto done;
        }
        for (j = 0; j < outerCount; j++) {
            hr = fn_82EE3C50(entry, j, &innerCount);
            if (hr < 0) {
                goto done;
            }
            for (k = 0; k < innerCount; k++) {
                hr = fn_82EE3CE0(entry, j, k, &value);
                if (hr < 0) {
                    goto done;
                }
                if (value > 0x7f || table[value] == 0) {
                    hr = self->source->Remove(item);
                    if (hr < 0) {
                        goto done;
                    }
                    goto next;
                }
            }
        }
    next:
        item.Release();
    }
done:
    return hr;
}
