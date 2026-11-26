// hkpShapeCollectionAgent::hkpShapeCollectionAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
// const hkpCollisionInput &input, hkpContactMgr *mgr)
// (Physics/Collide/Agent/CompoundAgent/ShapeCollection/hkpShapeCollectionAgent.cpp): reserves one
// KeyAgentPair per child of body A's shape container, then creates a child agent through the
// collision dispatcher for every child key the collision filter accepts.
// newOperandA is constructed first (its m_parent/m_motion stores precede the getContainer call).
// The filter call goes through hkpCollisionFilter's own redeclaration of the
// hkpShapeCollectionFilter overload (no null check on the +0xC adjustment); MSVC puts the
// overloads in reverse declaration order, so the 5-argument one is slot +4.
#include "havok/hkpShapeCollectionAgent.h"
#include "havok/hkpCollisionDispatcher.h"
#include "havok/hkpCollisionFilter.h"

// hkpShapeBuffer: the 512-byte, 16-byte aligned scratch space getChildShape builds child shapes in.
class __declspec(align(16)) hkpShapeBuffer {
public:
    hkUint8 m_buffer[0x200];
};

hkpShapeCollectionAgent::hkpShapeCollectionAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                 const hkpCollisionInput &input, hkpContactMgr *mgr)
    : hkpCollisionAgent(mgr)
{
    hkpCdBody newOperandA(&bodyA, bodyA.getMotionState());

    const hkpShapeContainer *shapeContainer = bodyA.getShape()->getContainer();

    int numChildren = shapeContainer->getNumChildShapes();
    m_agents.reserve(numChildren);

    hkpShapeKey key = shapeContainer->getFirstKey();
    while (key != HK_INVALID_SHAPE_KEY) {
        hkpShapeBuffer shapeBuffer;
        const hkpShape *shape = shapeContainer->getChildShape(key, shapeBuffer);
        newOperandA.setShape(shape, key);

        if (input.m_filter->isCollisionEnabled(input, bodyB, bodyA, *shapeContainer, key)) {
            KeyAgentPair &ap = *m_agents.expandByUnchecked(1);
            ap.m_agent = input.m_dispatcher->getNewCollisionAgent(newOperandA, bodyB, input, mgr);
            ap.m_key = key;
        }
        key = shapeContainer->getNextKey(key);
    }
}
