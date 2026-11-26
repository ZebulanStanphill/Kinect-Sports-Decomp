// hkpCachingShapePhantom::removeOverlappingCollidable(hkpCollidable *collidable)
// (Physics/Dynamics/Phantom/hkpCachingShapePhantom.cpp), vtable slot 9 (+0x24).
// Ignores collidables without a shape; otherwise finds the collidable's
// collision detail (searching from the end), fires the collidable-removed
// event (hkpPhantom::fireCollidableRemoved, fn_82D8D988), cleans up its agent
// and removes the detail (hkArray::removeAt), or fires the event with
// collidableWasAdded = false when the collidable is not found.
// The search keeps the array's data pointer in a local loaded after the
// loop guard; that makes the loop step a pointer to the element.
#include "havok/hkpCachingShapePhantom.h"
#include "havok/hkpCollisionAgent.h"
#include "havok/hkpConstraintOwner.h"

// hkpPhantom::fireCollidableRemoved(const hkpCollidable *, hkBool), out of line.
extern "C" void fn_82D8D988(hkpCachingShapePhantom *self, const hkpCollidable *collidable, hkBool collidableWasAdded);

// hkArrayBase<T>::removeAt for POD elements: the last element is copied into
// the hole word by word (hkMemUtil::memCpyOneAligned).
template <typename T>
HK_FORCE_INLINE void hkArrayRemoveAt(hkArray<T> &a, int index)
{
    a.m_size--;
    if (a.m_size != index) {
        hkUint32 *dst = reinterpret_cast<hkUint32 *>(a.m_data + index);
        const hkUint32 *src = reinterpret_cast<const hkUint32 *>(a.m_data + a.m_size);
        int i = 0;
        do {
            dst[i] = src[i];
        } while (++i < int(sizeof(T) / sizeof(hkUint32)));
    }
}

extern "C" void fn_82D9BEE0(hkpCachingShapePhantom *self, hkpCollidable *collidable)
{
    hkpConstraintOwner constraintOwner;
    if (collidable->getShape()) {
        int i = self->m_collisionDetails.getSize() - 1;
        if (i >= 0) {
            const hkpCachingShapePhantom::CollisionDetail *details = self->m_collisionDetails.begin();
            for (; i >= 0; i--) {
                if (details[i].m_collidable == collidable) {
                    fn_82D8D988(self, collidable, true);
                    hkpCollisionAgent *agent = self->m_collisionDetails[i].m_agent;
                    if (agent)
                        agent->cleanup(constraintOwner);
                    hkArrayRemoveAt(self->m_collisionDetails, i);
                    self->m_orderDirty = true;
                    return;
                }
            }
        }
        fn_82D8D988(self, collidable, false);
    }
}
