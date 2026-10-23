// Scalar deleting destructor of a game class (0x18 bytes, Havok's non-virtual
// class allocator) derived from hkpCdBodyPairCollector, whose own vtable is not
// named; written out by hand: the implicit destructor leaves only
// hkpCdBodyPairCollector's vtable store, then 0x18 bytes go back to the heap.
#include "havok/hkBase.h"

class hkpCdBodyPairCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpCdBodyPairCollector);
    virtual ~hkpCdBodyPairCollector() {}
    hkBool m_earlyOut;   // +0x4
};

struct GameBodyPairCollector : public hkpCdBodyPairCollector {
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, GameBodyPairCollector);
    hkUint8 m_members[0x10];   // +0x8 (not needed here)
};

extern "C" GameBodyPairCollector *fn_8253E900(GameBodyPairCollector *self, unsigned int flags)
{
    self->hkpCdBodyPairCollector::~hkpCdBodyPairCollector();
    if (flags & 1)
        GameBodyPairCollector::operator delete(self);
    return self;
}
