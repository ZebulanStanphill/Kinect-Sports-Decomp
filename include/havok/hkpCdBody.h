#ifndef HAVOK_HKPCDBODY_H
#define HAVOK_HKPCDBODY_H

#include "havok/hkpShape.h"
#include "havok/hkMotionState.h"

class hkpCollidable;

// hkpCdBody (Physics/Collide/Agent/Collidable/hkpCdBody.h).
class hkpCdBody {
public:
    // Bodies are built in place (82D68AD0 constructs them in a stack array).
    HK_DECLARE_PLACEMENT_ALLOCATOR();
    hkpCdBody() {}   // for hkpCollidable, whose constructors fill the body in
    // The motion is stored before the parent (82D68AD0's store order; the other users compile to
    // the same code with either order).
    HK_FORCE_INLINE explicit hkpCdBody(const hkpCdBody *parent)
    {
        m_motion = parent->m_motion;
        m_parent = parent;
    }
    // A root body on a transform; the stores are in this order in 82DBED98.
    HK_FORCE_INLINE hkpCdBody(const hkpShape *shape, const hkTransform *t)
    {
        m_shape = shape;
        m_motion = t;
        m_parent = HK_NULL;
        m_shapeKey = HK_INVALID_SHAPE_KEY;
    }
    HK_FORCE_INLINE hkpCdBody(const hkpCdBody *parent, const hkMotionState *ms)
    {
        m_parent = parent;
        m_motion = ms;
    }
    HK_FORCE_INLINE hkpCdBody(const hkpCdBody *parent, const hkTransform *t)
    {
        m_parent = parent;
        m_motion = t;
    }
    const hkpShape *getShape() const { return m_shape; }
    const hkMotionState *getMotionState() const { return static_cast<const hkMotionState *>(m_motion); }
    const hkTransform &getTransform() const { return *static_cast<const hkTransform *>(m_motion); }
    // The root of the parent chain is the hkpCollidable (82D5B3B0 and 82D74A90 read its
    // m_allowedPenetrationDepth, +0x4C).
    const hkpCollidable *getRootCollidable() const
    {
        const hkpCdBody *body = this;
        while (body->m_parent)
            body = body->m_parent;
        return reinterpret_cast<const hkpCollidable *>(body);
    }
    HK_FORCE_INLINE void setShape(const hkpShape *shape, hkpShapeKey key)
    {
        m_shape = shape;
        m_shapeKey = key;
    }

    const hkpShape *m_shape;     // +0x0
    hkpShapeKey m_shapeKey;      // +0x4
    const void *m_motion;        // +0x8: an hkMotionState or an hkTransform
    const hkpCdBody *m_parent;   // +0xC
};

#endif
