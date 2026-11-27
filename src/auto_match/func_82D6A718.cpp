// hkpPhantomAgent::cleanup (+0x1C of ??_7hkpPhantomAgent@@6B@): tells each phantom callback shape that the other
// collidable left it, then deletes the agent.
#include "havok/hkpPhantomAgent.h"
#include "havok/hkpPhantomCallbackShape.h"

void hkpPhantomAgent::cleanup(hkCollisionConstraintOwner &constraintOwner)
{
    if (m_bodyTypeA == HK_SHAPE_PHANTOM_CALLBACK) {
        m_shapeA->phantomLeaveEvent(m_collidableA, m_collidableB);
    }
    if (m_bodyTypeB == HK_SHAPE_PHANTOM_CALLBACK) {
        m_shapeB->phantomLeaveEvent(m_collidableB, m_collidableA);
    }
    delete this;
}
