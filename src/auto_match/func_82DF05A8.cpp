// hkpDisableEntityCollisionFilter: registers an entity whose collisions the filter disables (adds it to
// m_disabledEntities and makes the filter one of its entity listeners).
#include "havok/hkBase.h"
#include "havok/hkpDisableEntityCollisionFilter.h"
#include "havok/hkpEntity.h"

// hkArray::pushBack as this function inlines it (hkArray.h has no pushBack yet): the allocator is fetched before
// the capacity test (hkArrayUtil::_reserveMore), then the element is constructed in place (hkArrayUtil::construct)
// and m_size grows.
template <typename T>
static HK_FORCE_INLINE void hkArray_construct(T *t, int n, const T &tcopy)
{
    for (int i = 0; i < n; ++i)
        t[i] = tcopy;
}
template <typename T>
static HK_FORCE_INLINE void hkArray_pushBack(hkArray<T> &a, const T &t)
{
    hkMemoryAllocator &alloc = hkContainerHeapAllocator::get(&a);
    if (a.m_size == a.getCapacity())
        hkArrayUtil::_reserveMore(alloc, &a, sizeof(T));
    hkArray_construct(a.m_data + a.m_size, 1, t);
    a.m_size++;
}

extern "C" hkBool fn_82DF05A8(hkpDisableEntityCollisionFilter *self, hkpEntity *entity)
{
    if (entity == HK_NULL)
        return false;
    // m_disabledEntities.indexOf(entity) >= 0, with the index test folded away.
    {
        int i = 0;
        const int size = self->m_disabledEntities.m_size;
        if (size > 0) {
            hkpEntity *const *p = self->m_disabledEntities.m_data;
            do {
                if (*p == entity)
                    return false;
                ++p;
                ++i;
            } while (i < size);
        }
    }
    hkArray_pushBack(self->m_disabledEntities, entity);
    if (entity->getEntityListeners().indexOf(self) < 0)
        entity->addEntityListener(self);
    return true;
}
