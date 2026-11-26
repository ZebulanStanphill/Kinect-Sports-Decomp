// hkpDisableEntityCollisionFilter: registers an entity whose collisions the filter disables (adds it to
// m_disabledEntities and makes the filter one of its entity listeners).
#include "havok/hkBase.h"
#include "havok/hkpEntityListener.h"
#include "havok/hkpCollisionFilter.h"
#include "havok/hkpEntity.h"

// hkArray::pushBack as this function inlines it: the allocator is fetched before the capacity test
// (hkArrayUtil::_reserveMore), then the element is constructed in place (hkArrayUtil::construct) and m_size grows.
template <typename T>
class hkArrayEx_82DF05A8 : public hkArray<T> {
public:
    HK_FORCE_INLINE hkArrayEx_82DF05A8(hkFinishLoadedObjectFlag f) : hkArray<T>(f) {}
    static HK_FORCE_INLINE void construct(T *t, int n, const T &tcopy)
    {
        for (int i = 0; i < n; ++i)
            t[i] = tcopy;
    }
    HK_FORCE_INLINE void pushBack(const T &t)
    {
        hkMemoryAllocator &alloc = hkContainerHeapAllocator::get(this);
        if (this->m_size == this->getCapacity())
            hkArrayUtil::_reserveMore(alloc, this, sizeof(T));
        construct(this->m_data + this->m_size, 1, t);
        this->m_size++;
    }
};

// Physics/Collide/Filter/DisableEntity/hkpDisableEntityCollisionFilter.h. RTTI: hkpCollisionFilter (its four
// filter interfaces at +0x8..+0x14), then hkpEntityListener at +0x30.
class hkpDisableEntityCollisionFilter : public hkpCollisionFilter, public hkpEntityListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpDisableEntityCollisionFilter();
    hkpDisableEntityCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag), m_disabledEntities(flag) {}
    virtual ~hkpDisableEntityCollisionFilter();

    hkArrayEx_82DF05A8<hkpEntity *> m_disabledEntities;   // +0x34
};

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
    self->m_disabledEntities.pushBack(entity);
    if (entity->getEntityListeners().indexOf(self) < 0)
        entity->addEntityListener(self);
    return true;
}
