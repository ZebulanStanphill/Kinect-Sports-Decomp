#ifndef HAVOK_HKPCDBODY_H
#define HAVOK_HKPCDBODY_H

#include "havok/hkpShape.h"
#include "havok/hkMotionState.h"

// hkpCdBody (Physics/Collide/Agent/Collidable/hkpCdBody.h).
class hkpCdBody {
public:
    hkpCdBody() {}   // for hkpCollidable, whose constructors fill the body in
    HK_FORCE_INLINE explicit hkpCdBody(const hkpCdBody *parent)
    {
        m_parent = parent;
        m_motion = parent->m_motion;
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
    const hkpCdBody *getRootCollidable() const
    {
        const hkpCdBody *body = this;
        while (body->m_parent)
            body = body->m_parent;
        return body;
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
