// hkReferencedObject (Common/Base/Object/hkReferencedObject.h): base of every
// reference-counted Havok object.
//
// Layout (0x8 bytes):
//   +0x0 vtable  ??_7hkReferencedObject@@6B@  (3 slots)
//          +0x0 ??_GhkReferencedObject@@UAAPAXI@Z   fn_825A3220
//          +0x4 getClassType() const                fn_82CE3DC0 (returns HK_NULL)
//          +0x8 calcContentStatistics(...) const    fn_82CE3DC8
//   +0x4 hkUint16 m_memSizeAndFlags  allocation size set by operator new; 0 for
//                                    packfile objects (never freed/refcounted)
//   +0x6 hkInt16  m_referenceCount   the default constructor sets 1
//
// Class allocator: operator new/delete go through
// hkMemoryRouter::getInstance().heap() (blockAlloc/blockFree, vtable slots
// +0x4/+0x8) with m_memSizeAndFlags as the block size. Subclasses inherit it;
// HK_DECLARE_CLASS_ALLOCATOR in a subclass declares the same operators again,
// which changes nothing in the generated code.
//
// Reference counting is out of line in hkReferencedObject.cpp. Those functions
// keep their fn_ names (Matching C units call some of them) and are reached
// through inline wrappers, which compile to the same `bl`.
#ifndef HAVOK_HKREFERENCEDOBJECT_H
#define HAVOK_HKREFERENCEDOBJECT_H
#include "havok/hkBaseObject.h"
#include "havok/hkMemoryRouter.h"

class hkReferencedObject;
extern "C" {
void fn_82CE3E28(const hkReferencedObject *self);   // addReference, without the global lock
void fn_82CE3E48(const hkReferencedObject *self);   // removeReference, without the global lock
void fn_82CE4040(const hkReferencedObject *self);   // addReference (hkReferencedObjectLock)
void fn_82CE4118(const hkReferencedObject *self);   // removeReference (hkReferencedObjectLock)
}

// Havok's class allocator for hkReferencedObject subclasses. MEMORY_CLASS is
// only used by Havok's memory tracking and is ignored.
#define HK_DECLARE_CLASS_ALLOCATOR(MEMORY_CLASS) \
    HK_FORCE_INLINE void *HK_CALL operator new(hk_size_t nbytes) \
    { \
        hkReferencedObject *b = static_cast<hkReferencedObject *>( \
            hkMemoryRouter::getInstance().heap().blockAlloc(static_cast<int>(nbytes))); \
        b->m_memSizeAndFlags = static_cast<hkUint16>(nbytes); \
        return b; \
    } \
    HK_FORCE_INLINE void HK_CALL operator delete(void *p) \
    { \
        hkReferencedObject *b = static_cast<hkReferencedObject *>(p); \
        hkMemoryRouter::getInstance().heap().blockFree(p, b->m_memSizeAndFlags); \
    } \
    HK_FORCE_INLINE void *HK_CALL operator new(hk_size_t, void *p) { return p; } \
    HK_FORCE_INLINE void HK_CALL operator delete(void *, void *) {}

// Placement new only (Havok's HK_DECLARE_PLACEMENT_ALLOCATOR), for classes
// that live inside other objects. operator delete does nothing, so such a
// class's scalar deleting destructor ignores its flags (for example
// hkpSingleShapeContainer's, fn_82D391E8: destructor body, then return this).
#define HK_DECLARE_PLACEMENT_ALLOCATOR() \
    HK_FORCE_INLINE void *HK_CALL operator new(hk_size_t, void *p) { return p; } \
    HK_FORCE_INLINE void HK_CALL operator delete(void *, void *) {} \
    HK_FORCE_INLINE void HK_CALL operator delete(void *) {}

// Class allocator for classes that are not hkReferencedObjects: the block
// size is sizeof(THIS_CLASS).
#define HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(MEMORY_CLASS, THIS_CLASS) \
    HK_FORCE_INLINE void *HK_CALL operator new(hk_size_t nbytes) \
    { return hkMemoryRouter::getInstance().heap().blockAlloc(static_cast<int>(nbytes)); } \
    HK_FORCE_INLINE void HK_CALL operator delete(void *p) \
    { hkMemoryRouter::getInstance().heap().blockFree(p, sizeof(THIS_CLASS)); } \
    HK_FORCE_INLINE void *HK_CALL operator new(hk_size_t, void *p) { return p; } \
    HK_FORCE_INLINE void HK_CALL operator delete(void *, void *) {}

class hkReferencedObject : public hkBaseObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE_CLASS);

    hkReferencedObject() : m_referenceCount(1) {}
    hkReferencedObject(hkFinishLoadedObjectFlag flag) {}
    virtual ~hkReferencedObject() {}

    virtual const hkClass *getClassType() const;
    virtual void calcContentStatistics(hkStatisticsCollector *collector, const hkClass *cls) const;

    int getReferenceCount() const { return m_referenceCount; }
    void addReference() const { fn_82CE4040(this); }
    void removeReference() const { fn_82CE4118(this); }
    void addReferenceLockUnchecked() const { fn_82CE3E28(this); }
    void removeReferenceLockUnchecked() const { fn_82CE3E48(this); }

    hkUint16 m_memSizeAndFlags;
    mutable hkInt16 m_referenceCount;
};

#endif
