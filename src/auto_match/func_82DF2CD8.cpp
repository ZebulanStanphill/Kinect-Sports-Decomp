// hkpMouseSpringAction::clone(const hkArray<hkpEntity *> &, const hkArray<hkpPhantom *> &) const
// (hkpMouseSpringAction.cpp): slot +0x1C of ??_7hkpMouseSpringAction@@6B@. The callback array is copied
// with hkArray's assignment (hkArray.h has none yet: written out here).
#include "havok/hkBase.h"
#include "havok/hkArray.h"
#include "havok/hkpRigidBody.h"
#include "havok/hkpMouseSpringAction.h"

template <typename T>
static HK_FORCE_INLINE void copyArray(hkArray<T> &dst, const hkArray<T> &src)
{
    hkMemoryAllocator &a = hkContainerHeapAllocator::get(&dst);
    const int cap = dst.getCapacity();
    if (cap < src.m_size) {
        if ((dst.m_capacityAndFlags & hkArray<T>::DONT_DEALLOCATE_FLAG) == 0) {
            a.bufFree(dst.m_data, cap, sizeof(T));
        }
        int sz = src.m_size;
        dst.m_data = (T *)a.bufAlloc(sz, sizeof(T));
        dst.m_capacityAndFlags = sz;
    }
    const int n = src.m_size;
    T *d = dst.m_data;
    dst.m_size = n;
    const T *s = src.m_data;
    for (int i = 0; i < n; i++) {
        d[i] = s[i];
    }
}

hkpAction *hkpMouseSpringAction::clone(const hkArray<hkpEntity *> &newEntities,
                                       const hkArray<hkpPhantom *> &newPhantoms) const
{
    if (newEntities.getSize() != 1) return HK_NULL;
    if (newPhantoms.getSize() != 0) return HK_NULL;

    hkpMouseSpringAction *ms = new hkpMouseSpringAction(static_cast<hkpRigidBody *>(newEntities[0]));
    ms->m_positionInRbLocal = m_positionInRbLocal;
    ms->m_mousePositionInWorld = m_mousePositionInWorld;
    ms->m_springDamping = m_springDamping;
    ms->m_springElasticity = m_springElasticity;
    ms->m_maxRelativeForce = m_maxRelativeForce;
    ms->m_objectDamping = m_objectDamping;
    ms->m_userData = m_userData;
    ms->m_shapeKey = m_shapeKey;
    copyArray(ms->m_applyCallbacks, m_applyCallbacks);
    return ms;
}
