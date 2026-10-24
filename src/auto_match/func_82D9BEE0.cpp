// hkpCachingShapePhantom::removeOverlappingCollidable(hkpCollidable *collidable)
// (Physics/Dynamics/Phantom/hkpCachingShapePhantom.cpp), vtable slot 9 (+0x24).
// Ignores collidables without a shape; otherwise finds the collidable's
// collision detail (searching from the end), fires the collidable-removed
// event (hkpPhantom::fireCollidableRemoved, fn_82D8D988), cleans up its agent
// and removes the detail (hkArray::removeAt), or fires the event with
// collidableWasAdded = false when the collidable is not found.
// The search keeps the array's data pointer in a local loaded after the
// loop guard; that makes the loop step a pointer to the element.
#include "havok/hkBase.h"

// hkpCollidable (Physics/Collide/Agent/Collidable/hkpCollidable.h): only the
// hkpCdBody shape pointer at +0 is used; the original tests it with cmpwi.
class hkpCollidable {
public:
    int m_shape;   // +0x0
};

// hkpConstraintOwner (hkCollisionConstraintOwner): the default constructor
// leaves its hkpConstraintInfo (+0x8) uninitialised.
class hkpConstraintOwner : public hkReferencedObject {
public:
    int m_constraintInfo[4];
};

// hkpCollisionAgent (Physics/Collide/Agent/hkpCollisionAgent.h): cleanup is
// at +0x1C.
class hkpCollisionAgent : public hkReferencedObject {
public:
    virtual void getClosestPoints();
    virtual void getPenetrations();
    virtual void linearCast();
    virtual void processCollision();
    virtual void cleanup(hkpConstraintOwner &constraintOwner);   // +0x1C
};

class hkpCachingShapePhantom;

// hkpPhantom::fireCollidableRemoved(const hkpCollidable *, hkBool), out of line.
extern "C" void fn_82D8D988(hkpCachingShapePhantom *self, const hkpCollidable *collidable, hkBool collidableWasAdded);

class hkpCachingShapePhantom {
public:
    struct CollisionDetail {
        hkpCollisionAgent *m_agent;
        hkpCollidable *m_collidable;
    };

    char m_phantom[0x160];                         // hkpShapePhantom
    hkArray<CollisionDetail> m_collisionDetails;   // +0x160
    hkBool m_orderDirty;                           // +0x16C
};

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
    if (collidable->m_shape) {
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
