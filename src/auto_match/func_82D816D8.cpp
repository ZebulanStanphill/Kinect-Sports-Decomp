// hkpWorld::removeContactImpulseLimitBreachedListener (Physics/Dynamics/World/hkpWorld.cpp): finds the listener in m_contactImpulseLimitBreachedListeners
// and clears its entry (the array is compacted later).
#include "havok/hkBase.h"
#include "havok/hkpWorld.h"

// hkArray::indexOf
template <typename T> static HK_FORCE_INLINE int indexOf(hkArray<T> &a, const T &t)
{
    int i = 0;
    if (0 < a.getSize()) {
        T *p = a.begin();
        do {
            if (*p == t) return i;
            i++;
            p++;
        } while (i < a.getSize());
    }
    return -1;
}

void hkpWorld::removeContactImpulseLimitBreachedListener(hkpContactImpulseLimitBreachedListener *worldListener)
{
    int i = indexOf(m_contactImpulseLimitBreachedListeners, worldListener);
    m_contactImpulseLimitBreachedListeners[i] = HK_NULL;
}
