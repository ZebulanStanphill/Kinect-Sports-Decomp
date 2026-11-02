// Destroys, at exit, the function-local static object that fn_82522838 builds
// (lbl_83297C04, 0x108 bytes): its two allocators at +0x100 and +0x104, last
// first. Their class (vtable lbl_821C2D14) derives from R1::IAllocator; its
// destructor's own vtable store is dead and only IAllocator's remains.
// Keeps its fn_ name: the atexit function of a local static is named after
// the enclosing function, which has no name yet.
#include "R1/IAllocator.h"

class Allocator_821C2D14 : public R1::IAllocator {
public:
    virtual void vf0C();
    virtual void vf14();
    virtual void vf18();
};

struct Static_82522838 {
    char unk000[0xF8];
    unsigned int unkF8;
    bool unkFC;
    Allocator_821C2D14 unk100;
    Allocator_821C2D14 unk104;
};

extern "C" Static_82522838 lbl_83297C04;

extern "C" void fn_8313F4F8(void)
{
    lbl_83297C04.~Static_82522838();
}
