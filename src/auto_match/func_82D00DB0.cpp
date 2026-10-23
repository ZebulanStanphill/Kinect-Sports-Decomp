// hkStackTracer::hkStackTracer (Common/Base/System/StackTracer/hkStackTracer.cpp).
#include "havok/hkBase.h"

template <typename T>
class hkSingleton {
public:
    static T *s_instance;
};

class hkStackTracer : public hkReferencedObject, public hkSingleton<hkStackTracer> {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkStackTracer();
    virtual ~hkStackTracer();
};

hkStackTracer::hkStackTracer()
{
}
