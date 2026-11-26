// hkStackTracer::~hkStackTracer (hkStackTracer.cpp; it follows the constructor in the binary). The vtable store on entry is dead and removed, leaving hkBaseObject's.
#include "havok/hkBase.h"
#include "havok/hkSingleton.h"

class hkStackTracer : public hkReferencedObject, public hkSingleton<hkStackTracer> {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkStackTracer();
    virtual ~hkStackTracer();
};

hkStackTracer::~hkStackTracer()
{
}
