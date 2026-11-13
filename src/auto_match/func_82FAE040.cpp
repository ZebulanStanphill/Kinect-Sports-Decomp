#include <vector>

struct Obj_82FAE040 {
    virtual void slot0();
    virtual void slot1();
    virtual void Release();
};

struct Entry_82FAE040 {
    int key;
    Obj_82FAE040 *obj;
};

struct Self_82FAE040 {
    virtual void slot0();
    virtual void slot1();
    virtual void Release();
    char pad4[0x78];
    std::vector<Entry_82FAE040> entries;   /* 0x7c */
};

extern "C" void fn_82FAE040(Self_82FAE040 *self)
{
    for (int i = (int)self->entries.size() - 1; i >= 0; i--)
        self->entries[i].obj->Release();
    self->Release();
}
