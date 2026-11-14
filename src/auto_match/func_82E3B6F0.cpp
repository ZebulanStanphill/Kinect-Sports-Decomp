// Clears every attribute key of the table (16-byte GUID keys at +0x2c8, count at +0x2cc) from obj:
// for each key, removes the reported number of values one at a time.
struct Obj_82E3B6F0 {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual int GetCount(const void *key, unsigned int *count);
    virtual void slot4();
    virtual void slot5();
    virtual int Remove(const void *key, int index, int flags);
};

struct Key_82E3B6F0 {
    unsigned char data[16];
};

struct Table_82E3B6F0 {
    char pad0[0x2c8];
    Key_82E3B6F0 *keys;       // +0x2c8
    unsigned int keyCount;    // +0x2cc
};

extern "C" int fn_82E3B6F0(Table_82E3B6F0 *self, Obj_82E3B6F0 *obj)
{
    int hr;
    unsigned int i;
    if (obj == 0)
        return 0x80004003;
    hr = 0;
    for (i = 0; i < self->keyCount; i++) {
        unsigned int count = 0;
        hr = obj->GetCount(&self->keys[i], &count);
        if (hr < 0)
            break;
        if (count != 0) {
            do {
                hr = obj->Remove(&self->keys[i], 0, 0);
                if (hr < 0)
                    return hr;
            } while (--count != 0);
        }
    }
    return hr;
}
