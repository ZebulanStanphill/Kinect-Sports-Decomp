#include <string>

extern "C" {
void fn_8265CA20(void *p);
extern void *lbl_82026054[];
}

// operator delete keeps the fn_ name the Matching C units use.
template <> __forceinline void std::allocator<char>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

struct Obj_828C2410 {
    void **vt;
    char pad4[0x4];
    std::string name;       /* 0x08 */
};

typedef std::string String_828C2410;

extern "C" Obj_828C2410 *fn_828C2410(Obj_828C2410 *self, unsigned int flags)
{
    self->vt = lbl_82026054;
    self->name.~String_828C2410();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
