struct Item_82F3C458 {
    virtual long QueryInterface(const void *iid, void **out);
    virtual unsigned long AddRef();
    virtual unsigned long Release();
};

struct Guid_82F3C458 {
    unsigned char bytes[16];
};

struct Source_82F3C458 {
    virtual void Slot0();
    virtual void Slot4();
    virtual void Slot8();
    virtual long GetCount(const Guid_82F3C458 *id, unsigned int *count);
    virtual long GetItem(const Guid_82F3C458 *id, unsigned int index, Item_82F3C458 **item);
    virtual void Slot14();
    virtual void Slot18();
    virtual long Remove(Item_82F3C458 *item);
};

struct Owner_82F3C458 {
    char pad0[0x54];
    Source_82F3C458 *source; /* 0x54 */
};

template <class T> struct Ptr_82F3C458 {
    T *p;

    Ptr_82F3C458() : p(0)
    {
    }

    ~Ptr_82F3C458()
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

extern "C" const Guid_82F3C458 lbl_82154978;
extern "C" long fn_82EE4DC0(Item_82F3C458 *item, unsigned short *count);
extern "C" long fn_82EE5338(Item_82F3C458 *item, unsigned short index, unsigned short *value);

extern "C" long fn_82F3C458(Owner_82F3C458 *self, int *table)
{
    long hr;
    Ptr_82F3C458<Item_82F3C458> item;
    unsigned int count;
    unsigned int i;
    unsigned short entryCount;
    unsigned short value;
    unsigned short j;
    int remove;

    hr = self->source->GetCount(&lbl_82154978, &count);
    if (hr < 0) {
        goto done;
    }
    for (i = 0; i < count; i++) {
        hr = self->source->GetItem(&lbl_82154978, i, &item);
        if (hr < 0) {
            goto done;
        }
        Item_82F3C458 *entry = item;
        hr = fn_82EE4DC0(entry, &entryCount);
        if (hr < 0) {
            goto done;
        }
        remove = 0;
        for (j = 0; j < entryCount; j++) {
            hr = fn_82EE5338(entry, j, &value);
            if (hr < 0) {
                goto done;
            }
            if (value > 0x7f) {
                remove = 1;
                break;
            }
            if (table[value] == 0) {
                remove = 1;
            }
        }
        if (remove) {
            hr = self->source->Remove(item);
            if (hr < 0) {
                goto done;
            }
        }
        item.Release();
    }
done:
    return hr;
}
