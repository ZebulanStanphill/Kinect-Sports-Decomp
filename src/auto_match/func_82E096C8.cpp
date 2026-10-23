// hkTypeInfoRegistry scalar deleting destructor: implicit destructor (the hkStringMap member), then the class allocator. The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

template <typename T>
class hkSingleton {
public:
    static T *s_instance;
};

class hkClassNameRegistry : public hkReferencedObject {
public:
    hkClassNameRegistry() {}
    virtual const char *getName() const;
};

class hkDynamicClassNameRegistry : public hkClassNameRegistry {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkDynamicClassNameRegistry() {}
    virtual const char *getName() const;

    const char *m_name;                    // +0x8
    hkStringMap<const hkClass *> m_map;    // +0xC
};

class hkTypeInfo;

class hkTypeInfoRegistry : public hkReferencedObject, public hkSingleton<hkTypeInfoRegistry> {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkTypeInfoRegistry() {}

    hkStringMap<const hkTypeInfo *> m_map;   // +0x8
};

class hkVtableClassRegistry : public hkReferencedObject, public hkSingleton<hkVtableClassRegistry> {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkVtableClassRegistry() {}

    hkPointerMap<const void *, const hkClass *> m_map;   // +0x8
};

void emitVtable_82E096C8(void *p) { new (p) hkTypeInfoRegistry; }
