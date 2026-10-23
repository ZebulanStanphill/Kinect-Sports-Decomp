// hkStackTracer::~hkStackTracer (hkStackTracer.cpp; it follows the constructor in the binary). The vtable store on entry is dead and removed, leaving hkBaseObject's.
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

hkStackTracer::~hkStackTracer()
{
}
