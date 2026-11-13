#include <string>

extern "C" {
void fn_8265CA20(void *p);
extern void *lbl_82026038[];
}

// operator delete keeps the fn_ name the Matching C units use.
template <> __forceinline void std::allocator<wchar_t>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

struct Obj_828C0DA8 {
    void **vt;
    char pad4[0xc];
    std::wstring name;      /* 0x10 */
};

typedef std::wstring WString_828C0DA8;

extern "C" Obj_828C0DA8 *fn_828C0DA8(Obj_828C0DA8 *self, unsigned int flags)
{
    self->vt = lbl_82026038;
    self->name.~WString_828C0DA8();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
