#include <string>

extern "C" {
void fn_8265CA20(void *p);
extern void *lbl_82025418[];
}

// operator delete keeps the fn_ name the Matching C units use.
template <> __forceinline void std::allocator<char>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

struct Obj_828BB620 {
    void **vt;
    char pad4[0x8];
    std::string name;       /* 0x0c */
};

typedef std::string String_828BB620;

extern "C" Obj_828BB620 *fn_828BB620(Obj_828BB620 *self, unsigned int flags)
{
    self->vt = lbl_82025418;
    self->name.~String_828BB620();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
