// hkDefaultBuiltinTypeRegistry::reinitialize (vtable slot 7): replaces the three registry singletons with new ones, then init() (fn_82E09228). The registry constructors called are fn_82E095E0 and fn_82E09800.
// Havok class name registries (Common/Serialize/Util/hkStaticClassNameRegistry.h,
// hkChainedClassNameRegistry.h, hkBindingClassNameRegistry.h, ...). Hierarchies
// from the RTTI; layouts from the constructors and destructors.
#include "havok/hkBase.h"

class hkClassNameRegistry : public hkReferencedObject {
public:
    hkClassNameRegistry() {}
    virtual const char *getName() const;                                   // +0x0C
    virtual const hkClass *getClassByName(const char *className) const;    // +0x10
    virtual void getClasses(void *classesOut) const;                       // +0x14
};

// hkStaticClassNameRegistry (0x18 bytes): a fixed, null-terminated list of classes.
class hkStaticClassNameRegistry : public hkClassNameRegistry {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkStaticClassNameRegistry(hkClass *const *classes, int classVersion, const char *name);
    hkStaticClassNameRegistry(const hkClass *const *classes, int classVersion, const char *name);
    virtual const char *getName() const;
    virtual const hkClass *getClassByName(const char *className) const;
    virtual void getClasses(void *classesOut) const;

    const char *m_name;               // +0x8
    hkClass *const *m_classes;        // +0xC
    int m_classVersion;               // +0x10
    mutable hkUint32 m_ready;         // +0x14 (stored as a word: hkBool32)
};

// hkCachedHashMap's constructor is out of line (fn_82D00388: allocates 16
// buckets of 12 bytes, fills them with 0xFF, m_numElems 0, m_hashMod 15). The
// shared hkMap.h does not declare it, so the constructors below call it in
// their bodies, right after the members are (trivially) constructed. Its
// second argument is the (empty) allocator, passed by value: a zero byte built
// in a stack temporary; the function ignores it.
extern "C" {
void fn_82D00388(void *self, hkContainerHeapAllocator a);           // hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator>::hkCachedHashMap
void fn_82D000A0(void *map, const char *key, hkUlong value);       // hkCachedHashMap<hkStringMapOperations>::insert
}

// The string maps here take 0x10 bytes: after the shared hkStringMap's 0xC
// they hold the (empty) allocator, one byte padded to four. Evidence:
// hkChainedClassNameRegistry's next registry at +0x1C after the map at +0xC,
// hkBindingClassNameRegistry's second map at +0x3C after the first at +0x2C,
// new hkTypeInfoRegistry allocating 0x18 bytes with its map at +0x8, and
// hkDefaultClassNameRegistry (0x20 bytes) whose empty hkSingleton base the
// RTTI places at +0x1D, right after that byte.
template <typename V>
class hkStringMapC : public hkStringMap<V> {
public:
    HK_FORCE_INLINE hkStringMapC() { fn_82D00388(this, hkContainerHeapAllocator()); }
    HK_FORCE_INLINE void insert(const char *key, V val) { fn_82D000A0(this, key, hkUlong(val)); }
    hkContainerHeapAllocator m_alloc;   // +0xC
};

// hkDynamicClassNameRegistry (0x1C bytes)
class hkDynamicClassNameRegistry : public hkClassNameRegistry {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    HK_FORCE_INLINE hkDynamicClassNameRegistry(const char *name = HK_NULL) : m_name(name) {}
    virtual const char *getName() const;
    virtual const hkClass *getClassByName(const char *className) const;
    virtual void getClasses(void *classesOut) const;

    const char *m_name;                    // +0x8
    hkStringMapC<const hkClass *> m_map;   // +0xC
};

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
    virtual void getClasses(void *classesOut) const;

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
template <typename T>
class hkSingleton {
public:
    static HK_FORCE_INLINE T *&instanceRef();
    static HK_FORCE_INLINE T *getInstancePtr() { return instanceRef(); }
    static HK_FORCE_INLINE void replaceInstance(T *t)
    {
        if (instanceRef())
            instanceRef()->removeReferenceLockUnchecked();
        instanceRef() = t;
    }
};

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

class hkDefaultBuiltinTypeRegistry;
extern "C" void fn_82E09228(hkDefaultBuiltinTypeRegistry *self);   // hkDefaultBuiltinTypeRegistry::init

// hkDefaultBuiltinTypeRegistry (8 bytes)
class hkDefaultBuiltinTypeRegistry : public hkBuiltinTypeRegistry {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkDefaultBuiltinTypeRegistry() { init(); }
    HK_FORCE_INLINE void init() { fn_82E09228(this); }
    virtual hkTypeInfoRegistry *getTypeInfoRegistry();
    virtual hkDefaultClassNameRegistry *getClassNameRegistry();
    virtual hkVtableClassRegistry *getVtableClassRegistry();
    virtual void addType(void *info, void *klass);
    virtual void reinitialize();
};

// ValidatedClassNameRegistry (hkVersionUtil? 0x1C bytes): a dynamic registry
// that starts as a copy of another one (hkDynamicClassNameRegistry::merge,
// vtable slot 9, out of line as fn_82E09B50: called directly from the
// constructor).
extern "C" void fn_82E09B50(hkDynamicClassNameRegistry *self, const hkClassNameRegistry *mergeFrom);   // hkDynamicClassNameRegistry::merge

class ValidatedClassNameRegistry : public hkDynamicClassNameRegistry {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    ValidatedClassNameRegistry(const hkClassNameRegistry *classRegistry);
    virtual const hkClass *getClassByName(const char *className) const;
};

// hkVersionRegistry (Common/Serialize/Version/hkVersionRegistry.h, 0x24 bytes).
struct hkVersionRegistryUpdater;
extern "C" hkVersionRegistryUpdater *lbl_832760A0[];   // hkVersionRegistry::StaticLinkedUpdaters (null-terminated)

// hkStringMap's out-of-line members used by ~hkVersionRegistry (they keep
// their fn_ names: Matching C units call them). isValid returns an hkBool,
// so through a hidden result pointer.
extern "C" {
int fn_82CFFFC8(const void *map);                     // getIterator
hkBool fn_82D002F0(const void *map, int it);          // isValid
hkUlong fn_82D00020(const void *map, int it);         // getValue
int fn_82D00060(const void *map, int it);             // getNext
void fn_82D002A8(void *map);                          // clear
}

template <typename V>
class hkStringMapI : public hkStringMapC<V> {
public:
    typedef int Iterator;
    HK_FORCE_INLINE Iterator getIterator() const { return fn_82CFFFC8(this); }
    HK_FORCE_INLINE hkBool isValid(Iterator it) const { return fn_82D002F0(this, it); }
    HK_FORCE_INLINE V getValue(Iterator it) const { return (V)fn_82D00020(this, it); }
    HK_FORCE_INLINE Iterator getNext(Iterator it) const { return fn_82D00060(this, it); }
    HK_FORCE_INLINE void clear() { fn_82D002A8(this); }
};

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
    hkStringMapI<hkDynamicClassNameRegistry *> m_versionToClassNameRegistry;     // +0x14
};

// hkRenamedClassNameRegistry (Common/Serialize/Util/hkRenamedClassNameRegistry.h,
// 0x1C bytes). The original registry is referenced with the locked
// add/removeReference and not cleared by the destructor, so it is a plain
// pointer here (the shared hkRefPtr clears it).
struct hkVersionRegistryClassRename {
    const char *oldName;
    const char *newName;
};
class hkRenamedClassNameRegistry;
extern "C" void fn_82E12520(hkRenamedClassNameRegistry *self, const hkVersionRegistryClassRename *renames);   // registerRenames

class hkRenamedClassNameRegistry : public hkClassNameRegistry {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    hkRenamedClassNameRegistry(const hkVersionRegistryClassRename *renames, const hkClassNameRegistry *originalRegistry);
    HK_FORCE_INLINE virtual ~hkRenamedClassNameRegistry()
    {
        if (m_originalRegistry)
            m_originalRegistry->removeReference();
    }
    HK_FORCE_INLINE void registerRenames(const hkVersionRegistryClassRename *renames) { fn_82E12520(this, renames); }
    virtual const char *getName() const;
    virtual const hkClass *getClassByName(const char *className) const;
    virtual void getClasses(void *classesOut) const;

    hkStringMapC<const char *> m_renames;               // +0x8
    const hkClassNameRegistry *m_originalRegistry;      // +0x18
};

void hkDefaultBuiltinTypeRegistry::reinitialize()
{
    hkDefaultClassNameRegistry::replaceInstance(new hkDefaultClassNameRegistry());
    hkTypeInfoRegistry::replaceInstance(new hkTypeInfoRegistry());
    hkVtableClassRegistry::replaceInstance(new hkVtableClassRegistry());
    init();
}
