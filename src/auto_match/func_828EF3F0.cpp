#include <string>

extern "C" {
void fn_8265CA20(void *p);
extern void *lbl_820275E8[];
}

// operator delete keeps the fn_ name the Matching C units use.
template <> __forceinline void std::allocator<char>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

struct Obj_828EF3F0 {
    void **vt;
    char pad4[0x74];
    std::string name;       /* 0x78 */
};

typedef std::string String_828EF3F0;

extern "C" Obj_828EF3F0 *fn_828EF3F0(Obj_828EF3F0 *self, unsigned int flags)
{
    self->vt = lbl_820275E8;
    self->name.~String_828EF3F0();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
