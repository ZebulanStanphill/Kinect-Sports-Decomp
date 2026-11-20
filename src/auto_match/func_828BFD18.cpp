// Destructor: restores the two vtables, destroys the buffer member (its own
// vtable, then the storage) and the name string, and ends in the base
// destructor (fn_828BDE70). The second vtable is stored through a pointer to
// its slot, which keeps that store ahead of the copy of `this`.
#include <string>

extern "C" void fn_8265CA20(void *p);

template <> __forceinline void std::allocator<char>::deallocate(pointer p, size_type)
{
    fn_8265CA20(p);
}

extern "C" char lbl_82025D58[];
extern "C" char lbl_82025D50[];
extern "C" char lbl_82025010[];

struct Buffer_828BFD18 {
    void *vt;
    void *first;
    void *last;
    void *end;

    __forceinline ~Buffer_828BFD18()
    {
        if (first != 0) {
            fn_8265CA20(first);
        }
        first = 0;
        last = 0;
        end = 0;
    }
};

struct Obj_828BFD18 {
    void *vt;
    char pad4[0x4c];
    void *vt50;
    char pad54[0xa4 - 0x54];
    std::string name;
    Buffer_828BFD18 buffer;
};

extern "C" void fn_828BDE70(Obj_828BFD18 *self);

extern "C" void fn_828BFD18(Obj_828BFD18 *self)
{
    self->vt = lbl_82025D58;
    {
        void **secondVtable = &self->vt50;

        *secondVtable = lbl_82025D50;
    }
    self->buffer.vt = lbl_82025010;
    {
        Buffer_828BFD18 *b = &self->buffer;
        b->~Buffer_828BFD18();
    }
    self->name.~basic_string();
    fn_828BDE70(self);
}
