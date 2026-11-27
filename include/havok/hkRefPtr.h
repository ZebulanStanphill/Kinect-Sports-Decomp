// hkRefPtr (Common/Base/Types/hkRefPtr.h): owning pointer to an
// hkReferencedObject. One pointer, 4 bytes.
//
// Destructor, from ~hkpWorldCinfo (8253C630: three hkRefPtr members):
// `if (m_pntr) m_pntr->removeReference(); m_pntr = HK_NULL;`, with the locked
// removeReference (fn_82CE4118). The constructor from a pointer adds a
// reference the same way (addReference, fn_82CE4040); its exact statement order
// is not confirmed yet. The assignments are confirmed by three units (see there).
// (hkOstream's m_writer, which uses the lock-free fn_82CE3E28/fn_82CE3E48 and
// is not cleared, is written as a plain pointer.)
#ifndef HAVOK_HKREFPTR_H
#define HAVOK_HKREFPTR_H
#include "havok/hkReferencedObject.h"

template <typename TYPE>
class hkRefPtr {
public:
    HK_FORCE_INLINE hkRefPtr() : m_pntr(HK_NULL) {}
    HK_FORCE_INLINE hkRefPtr(TYPE *e)
    {
        if (e)
            e->addReference();
        m_pntr = e;
    }
    // Copying adds a reference (82E15968 and 82E15C30 copy a temporary hkRefPtr
    // into an array this way).
    HK_FORCE_INLINE hkRefPtr(const hkRefPtr &rp)
    {
        if (rp.m_pntr)
            rp.m_pntr->addReference();
        m_pntr = rp.m_pntr;
    }
    HK_FORCE_INLINE hkRefPtr(hkFinishLoadedObjectFlag) {}
    // Assignment: the new object gains its reference before the old one is released
    // (82E16A90 at 82E16B54: test the new pointer, addReference, test m_pntr, removeReference,
    // store; 82D8E600 and 82D8C258 have the same order). They return void, as in Havok's header.
    HK_FORCE_INLINE void operator=(const hkRefPtr &rp)
    {
        if (rp.m_pntr)
            rp.m_pntr->addReference();
        if (m_pntr)
            m_pntr->removeReference();
        m_pntr = rp.m_pntr;
    }
    HK_FORCE_INLINE void operator=(TYPE *e)
    {
        if (e)
            e->addReference();
        if (m_pntr)
            m_pntr->removeReference();
        m_pntr = e;
    }
    HK_FORCE_INLINE ~hkRefPtr()
    {
        if (m_pntr)
            m_pntr->removeReference();
        m_pntr = HK_NULL;
    }
    HK_FORCE_INLINE TYPE *val() const { return m_pntr; }
    HK_FORCE_INLINE TYPE *operator->() const { return m_pntr; }
    HK_FORCE_INLINE operator TYPE *() const { return m_pntr; }

    TYPE *m_pntr;
};

#endif
