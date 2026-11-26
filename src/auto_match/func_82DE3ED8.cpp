// hkpDisableEntityCollisionFilter scalar deleting destructor ??_GhkpDisableEntityCollisionFilter@@UAAPAXI@Z: calls the out-of-line ~hkpDisableEntityCollisionFilter below (fn_82DF0430, ??1hkpDisableEntityCollisionFilter@@UAA@XZ), then frees through the class allocator. The deleting destructor is emitted with the vtable.
// hkpDisableEntityCollisionFilter::~hkpDisableEntityCollisionFilter (hkpDisableEntityCollisionFilter.cpp): unregisters itself from the entities that still list it, then m_disabledEntities is destroyed.
#include "havok/hkBase.h"
#include "havok/hkpEntityListener.h"
#include "havok/hkpCollisionFilter.h"
#include "havok/hkSmallArray.h"

extern "C" {
void *fn_82DF06C0(hkpEntity *entity);                                // hkpEntity::getEntityListeners
void fn_82D8A228(hkpEntity *entity, hkpEntityListener *listener);    // hkpEntity::removeEntityListener
}

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
