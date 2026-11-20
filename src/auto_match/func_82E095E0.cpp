// hkDefaultClassNameRegistry::hkDefaultClassNameRegistry(): a dynamic registry named after the Havok version.
// Havok class name registries (Common/Serialize/Util/hkStaticClassNameRegistry.h,
// hkChainedClassNameRegistry.h, hkBindingClassNameRegistry.h, ...). Hierarchies
// from the RTTI; layouts from the constructors and destructors.
#include "havok/hkBase.h"

#include "havok/hkClassNameRegistry.h"

// hkStaticClassNameRegistry (0x18 bytes): a fixed, null-terminated list of classes.
class hkStaticClassNameRegistry : public hkClassNameRegistry {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkStaticClassNameRegistry(hkClass *const *classes, int classVersion, const char *name);
    hkStaticClassNameRegistry(const hkClass *const *classes, int classVersion, const char *name);
    virtual const char *getName() const;
    virtual const hkClass *getClassByName(const char *className) const;
    virtual void getClasses(hkArray<const hkClass *> &classesOut) const;

    const char *m_name;               // +0x8
    hkClass *const *m_classes;        // +0xC
    int m_classVersion;               // +0x10
    mutable hkUint32 m_ready;         // +0x14 (stored as a word: hkBool32)
};

#include "havok/hkStringMapC.h"

#include "havok/hkDynamicClassNameRegistry.h"

// hkChainedClassNameRegistry (0x20 bytes). The next registry is referenced
// with the locked addReference (fn_82CE4040) and released with the lock-free
// removeReference (fn_82CE3E48), without clearing the pointer, so it is a
// plain pointer here. Its destructor is user-written and out of line,
// fn_82E17470.
class hkChainedClassNameRegistry : public hkDynamicClassNameRegistry {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkChainedClassNameRegistry(const hkClassNameRegistry *nextRegistry);
    HK_FORCE_INLINE virtual ~hkChainedClassNameRegistry()
    {
        if (m_nextRegistry)
            m_nextRegistry->removeReferenceLockUnchecked();
    }
    virtual const hkClass *getClassByName(const char *className) const;
    virtual void getClasses(hkArray<const hkClass *> &classesOut) const;

    const hkClassNameRegistry *m_nextRegistry;     // +0x1C
};

// hkBindingClassNameRegistry (0x4C bytes): a chained registry with
// two string maps between class names (both directions). The list at +0x20
// (16-byte elements) is constructed inline as an empty hkArray; its destructor
// is out of line (fn_82E1BB60). Member names are not known.
extern "C" void fn_82E1BB60(void *self);   // ~list at +0x20

struct hkBindingList {
    struct Entry {
        hkUint32 m_data[4];
    };
    HK_FORCE_INLINE ~hkBindingList() { fn_82E1BB60(this); }
    hkArrayBase<Entry> m_entries;   // no destructor of its own: fn_82E1BB60 frees it
};

class hkBindingClassNameRegistry : public hkChainedClassNameRegistry {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    struct ClassNamePair {
        const char *m_first;
        const char *m_second;
    };
    hkBindingClassNameRegistry(const ClassNamePair *pairs, const hkClassNameRegistry *nextRegistry);
    virtual ~hkBindingClassNameRegistry();

    hkBindingList m_list;                              // +0x20
    hkStringMapC<const char *> m_firstToSecond;   // +0x2C
    hkStringMapC<const char *> m_secondToFirst;   // +0x3C
};

// hkSingleton<T>: the instance pointers are lbl_832654E4 (hkDefaultClassNameRegistry),
// lbl_832654E8 (hkTypeInfoRegistry) and lbl_832654EC (hkVtableClassRegistry),
// named in their hkSingletonInitNode records; they keep their lbl_ names
// (Matching C units read them) and are reached through instanceRef().
// replaceInstance releases the old instance with the lock-free removeReference.
#include "havok/hkSingleton.h"

// hkDefaultClassNameRegistry: the dynamic registry named after the Havok
// version string ("Havok-7.0.0-r1").
class hkDefaultClassNameRegistry : public hkDynamicClassNameRegistry, public hkSingleton<hkDefaultClassNameRegistry> {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkDefaultClassNameRegistry();
};

class hkTypeInfo;

// hkTypeInfoRegistry (0x18 bytes)
class hkTypeInfoRegistry : public hkReferencedObject, public hkSingleton<hkTypeInfoRegistry> {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkTypeInfoRegistry() {}

    hkStringMapC<const hkTypeInfo *> m_map;   // +0x8
};

// hkVtableClassRegistry (0x14 bytes)
class hkVtableClassRegistry : public hkReferencedObject, public hkSingleton<hkVtableClassRegistry> {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkVtableClassRegistry();

    hkPointerMap<const void *, const hkClass *> m_map;   // +0x8 (constructor: empty, then reserve(heap, 0))
};

class hkDefaultClassNameRegistry;
extern "C" {
extern hkDefaultClassNameRegistry *lbl_832654E4;   // hkSingleton<hkDefaultClassNameRegistry>::s_instance
extern hkTypeInfoRegistry *lbl_832654E8;           // hkSingleton<hkTypeInfoRegistry>::s_instance
extern hkVtableClassRegistry *lbl_832654EC;        // hkSingleton<hkVtableClassRegistry>::s_instance
}
template <> HK_FORCE_INLINE hkDefaultClassNameRegistry *&hkSingleton<hkDefaultClassNameRegistry>::instanceRef() { return lbl_832654E4; }
template <> HK_FORCE_INLINE hkTypeInfoRegistry *&hkSingleton<hkTypeInfoRegistry>::instanceRef() { return lbl_832654E8; }
template <> HK_FORCE_INLINE hkVtableClassRegistry *&hkSingleton<hkVtableClassRegistry>::instanceRef() { return lbl_832654EC; }

#include "havok/hkDefaultBuiltinTypeRegistry.h"
// ValidatedClassNameRegistry (hkVersionUtil? 0x1C bytes): a dynamic registry
// that starts as a copy of another one (hkDynamicClassNameRegistry::merge,
// vtable slot 9, called directly from the constructor).

class ValidatedClassNameRegistry : public hkDynamicClassNameRegistry {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    ValidatedClassNameRegistry(const hkClassNameRegistry *classRegistry);
    virtual const hkClass *getClassByName(const char *className) const;
};

// hkVersionRegistry (Common/Serialize/Version/hkVersionRegistry.h, 0x24 bytes).
struct hkVersionRegistryUpdater;
extern "C" hkVersionRegistryUpdater *lbl_832760A0[];   // hkVersionRegistry::StaticLinkedUpdaters (null-terminated)

// The updater list points at the static, null-terminated array: hkArray's
// user-buffer constructor (size, capacity, DONT_DEALLOCATE_FLAG).
template <typename T>
class hkArrayUserBuffer : public hkArray<T> {
public:
    HK_FORCE_INLINE hkArrayUserBuffer(T *buffer, int size, int capacity) : hkArray<T>(hkFinishLoadedObjectFlag())
    {
        this->m_data = buffer;
        this->m_size = size;
        this->m_capacityAndFlags = capacity | hkArrayBase<T>::DONT_DEALLOCATE_FLAG;
    }
};

class hkVersionRegistry : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    typedef hkVersionRegistryUpdater Updater;
    hkVersionRegistry();
    virtual ~hkVersionRegistry();

    static HK_FORCE_INLINE int countStaticUpdaters()
    {
        int n = 0;
        for (Updater *const *p = lbl_832760A0; *p; ++p)
            ++n;
        return n;
    }

    hkArrayUserBuffer<const Updater *> m_updaters;                                 // +0x8
    hkStringMapC<hkDynamicClassNameRegistry *> m_versionToClassNameRegistry;     // +0x14
};

#include "havok/hkRenamedClassNameRegistry.h"

hkDefaultClassNameRegistry::hkDefaultClassNameRegistry() : hkDynamicClassNameRegistry("Havok-7.0.0-r1") {}
