// hkRefPtr (Common/Base/Types/hkRefPtr.h): owning pointer to an
// hkReferencedObject. One pointer, 4 bytes.
//
// Destructor, from ~hkpWorldCinfo (fn_8253C630: three hkRefPtr members):
// `if (m_pntr) m_pntr->removeReference(); m_pntr = HK_NULL;`, with the locked
// removeReference (fn_82CE4118). The constructor from a pointer adds a
// reference the same way (addReference, fn_82CE4040); its exact statement order
// is not confirmed yet.
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
    HK_FORCE_INLINE hkRefPtr(hkFinishLoadedObjectFlag) {}
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
