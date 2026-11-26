#ifndef HAVOK_HKPLINKEDCOLLIDABLE_H
#define HAVOK_HKPLINKEDCOLLIDABLE_H

#include "havok/hkpCollidable.h"

// hkpLinkedCollidable (Physics/Collide/Agent/Collidable/hkpLinkedCollidable.h),
// 0x5C bytes: a collidable with the list of its collision partners.
class hkpLinkedCollidable : public hkpCollidable {
public:
    struct CollisionEntry {
        void *m_agentEntry;
        hkpLinkedCollidable *m_partner;
    };
    HK_FORCE_INLINE hkpLinkedCollidable(const hkpShape *shape, const hkMotionState *ms, int type = 0)
        : hkpCollidable(shape, ms, type) {}
    HK_FORCE_INLINE hkpLinkedCollidable(hkFinishLoadedObjectFlag flag) : hkpCollidable(flag) {}
    ~hkpLinkedCollidable();   // out of line (82D3BBC8)

    hkArray<CollisionEntry> m_collisionEntries;   // +0x50
};

#endif
