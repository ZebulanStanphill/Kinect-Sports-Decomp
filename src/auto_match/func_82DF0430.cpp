// hkpDisableEntityCollisionFilter::~hkpDisableEntityCollisionFilter (hkpDisableEntityCollisionFilter.cpp): unregisters itself from the entities that still list it, then m_disabledEntities is destroyed.
#include "havok/hkBase.h"
#include "havok/hkpEntityListener.h"
#include "havok/hkpCollisionFilter.h"

extern "C" {
void *fn_82DF06C0(hkpEntity *entity);                                // hkpEntity::getEntityListeners
void fn_82D8A228(hkpEntity *entity, hkpEntityListener *listener);    // hkpEntity::removeEntityListener
}

// Havok's small array (Common/Base/Container/Array/hkSmallArray.h): T *m_data; hkUint16 m_size, m_capacityAndFlags.
// indexOf is written as the guarded pointer loop the game's code has (a plain indexed for loop compiles to an
// offset-based loop here).
template <typename T>
class hkSmallArray {
public:
    HK_FORCE_INLINE int getSize() const { return m_size; }
    HK_FORCE_INLINE int indexOf(const T &t) const
    {
        int i = 0;
        const int size = m_size;
        if (size > 0) {
            const T *p = m_data;
            do {
                if (*p == t)
                    return i;
                ++p;
                ++i;
            } while (i < size);
        }
        return -1;
    }

    T *m_data;
    hkUint16 m_size;
    hkUint16 m_capacityAndFlags;
};

// Only the members these functions use; getEntityListeners and removeEntityListener are out of line.
class hkpEntity {
public:
    hkSmallArray<hkpEntityListener *> &getEntityListeners()
    {
        return *static_cast<hkSmallArray<hkpEntityListener *> *>(fn_82DF06C0(this));
    }
    void removeEntityListener(hkpEntityListener *el) { fn_82D8A228(this, el); }
};

// Physics/Collide/Filter/DisableEntity/hkpDisableEntityCollisionFilter.h. RTTI: hkpCollisionFilter (its four
// filter interfaces at +0x8..+0x14), then hkpEntityListener at +0x30.
class hkpDisableEntityCollisionFilter : public hkpCollisionFilter, public hkpEntityListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpDisableEntityCollisionFilter();
    hkpDisableEntityCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag), m_disabledEntities(flag) {}
    virtual ~hkpDisableEntityCollisionFilter();

    hkArray<hkpEntity *> m_disabledEntities;   // +0x34
};

hkpDisableEntityCollisionFilter::~hkpDisableEntityCollisionFilter()
{
    for (int i = 0; i < m_disabledEntities.getSize(); i++) {
        if (m_disabledEntities[i]->getEntityListeners().indexOf(this) >= 0)
            m_disabledEntities[i]->removeEntityListener(this);
    }
}
