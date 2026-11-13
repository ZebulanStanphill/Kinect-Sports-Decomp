// Clears and deletes an owned std::vector of 0x5c-byte elements (Visual C++ 2010's
// <vector>, clear() and the destructor inlined). Element copies call memcpy.

#include <vector>

struct Element_82355458 {
    unsigned char data[0x5c];
};

typedef Element_82355458 T;

extern "C" void fn_8265CA20(void *p);

template <> __forceinline void std::allocator<T>::deallocate(pointer p, size_type)
{
    fn_8265CA20(p);
}

struct List_82355458 : std::vector<T> {
    static void operator delete(void *p) { fn_8265CA20(p); }
};

struct Obj_82355458 {
    char pad[0x298];
    List_82355458 *list;
};

extern "C" void fn_82355458(Obj_82355458 *self)
{
    if (self->list != 0) {
        self->list->clear();
        delete self->list;
        self->list = 0;
    }
}
