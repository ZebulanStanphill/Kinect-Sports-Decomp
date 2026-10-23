#include "havok/hkBase.h"

struct Member8;
struct Member5C;
extern "C" {
void fn_82E041E0(Member8 *self);
void fn_82E04560(Member5C *self);
}
struct Member8 { ~Member8() { fn_82E041E0(this); } char pad[0x54]; };
struct Member5C { ~Member5C() { fn_82E04560(this); } char pad[0x4]; };

class Obj_82E075A8 : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    Member8 m_8;     // +0x8
    Member5C m_5c;   // +0x5c
};

extern "C" Obj_82E075A8 *fn_82E075A8(Obj_82E075A8 *self, unsigned int flags)
{
    self->Obj_82E075A8::~Obj_82E075A8();
    if (flags & 1)
        Obj_82E075A8::operator delete(self);
    return self;
}
