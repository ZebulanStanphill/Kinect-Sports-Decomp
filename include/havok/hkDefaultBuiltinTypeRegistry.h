#ifndef HAVOK_HKDEFAULTBUILTINTYPEREGISTRY_H
#define HAVOK_HKDEFAULTBUILTINTYPEREGISTRY_H

#include "havok/hkSingleton.h"

class hkDefaultClassNameRegistry;
class hkTypeInfoRegistry;
class hkVtableClassRegistry;

// hkBuiltinTypeRegistry (8 bytes): the interface to the three registries.
class hkBuiltinTypeRegistry : public hkReferencedObject, public hkSingleton<hkBuiltinTypeRegistry> {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    virtual hkTypeInfoRegistry *getTypeInfoRegistry() = 0;           // +0x0C
    virtual hkDefaultClassNameRegistry *getClassNameRegistry() = 0;  // +0x10
    virtual hkVtableClassRegistry *getVtableClassRegistry() = 0;     // +0x14
    virtual void addType(void *info, void *klass) = 0;               // +0x18
    virtual void reinitialize() = 0;                                 // +0x1C
};

// hkSingleton<hkBuiltinTypeRegistry>::s_instance is lbl_8323FD9C (82E16A90 takes the class name registry
// from it; the Matching C units 82E12AC8 and 82E13B70 call its +0xC and +0x10).
extern "C" hkBuiltinTypeRegistry *lbl_8323FD9C;
template <> HK_FORCE_INLINE hkBuiltinTypeRegistry *&hkSingleton<hkBuiltinTypeRegistry>::instanceRef()
{
    return lbl_8323FD9C;
}

// hkDefaultBuiltinTypeRegistry (8 bytes)
class hkDefaultBuiltinTypeRegistry : public hkBuiltinTypeRegistry {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkDefaultBuiltinTypeRegistry() { init(); }
    virtual hkTypeInfoRegistry *getTypeInfoRegistry();
    virtual hkDefaultClassNameRegistry *getClassNameRegistry();
    virtual hkVtableClassRegistry *getVtableClassRegistry();
    virtual void addType(void *info, void *klass);
    virtual void reinitialize();

private:
    void init();
};

#endif
