// hkStackTracer::hkStackTracer (Common/Base/System/StackTracer/hkStackTracer.cpp).
#include "havok/hkBase.h"
#include "havok/hkSingleton.h"

class hkStackTracer : public hkReferencedObject, public hkSingleton<hkStackTracer> {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkStackTracer();
    virtual ~hkStackTracer();
};

hkStackTracer::hkStackTracer()
{
}
