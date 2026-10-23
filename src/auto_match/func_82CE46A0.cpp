// Scalar deleting destructor of a hkReferencedObject subclass whose only
// member is a hkStringPtr at +0x8 (its destructor is fn_82CED5B8).
#include "havok/hkBase.h"

class hkNamedObject : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);


    hkStringPtr m_name;   // +0x8
};

extern "C" hkNamedObject *fn_82CE46A0(hkNamedObject *self, unsigned int flags)
{
    self->hkNamedObject::~hkNamedObject();
    if (flags & 1)
        hkNamedObject::operator delete(self);
    return self;
}
