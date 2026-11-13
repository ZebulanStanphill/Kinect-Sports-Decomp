#include <vector>

struct Element_8246BD40 {
    unsigned char data[0x28];
};

typedef Element_8246BD40 T;

extern "C" void fn_8265CA20(void *p);
extern "C" void fn_82465390(void *owner, void *entry);
extern "C" char lbl_821BC734[];

template <> __forceinline void std::allocator<T>::deallocate(pointer p, size_type)
{
    fn_8265CA20(p);
}

struct Obj_8246BD40 {
    void *vt;                   /* 0x00 */
    int unk4;
    void *owner;                /* 0x08 */
    char pad0c[0x10];
    std::vector<T> items;       /* 0x1c */
    char pad2c[0x30];
    char entry[4];              /* 0x5c */
};

extern "C" void fn_8246BD40(Obj_8246BD40 *self)
{
    self->vt = lbl_821BC734;
    fn_82465390(self->owner, self->entry);
    self->items.clear();
    self->items.~vector();
}
