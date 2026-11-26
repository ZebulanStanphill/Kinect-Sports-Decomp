// hkpShapeCollectionAgent::hkpShapeCollectionAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
// const hkpCollisionInput &input, hkpContactMgr *mgr)
// (Physics/Collide/Agent/CompoundAgent/ShapeCollection/hkpShapeCollectionAgent.cpp): reserves one
// KeyAgentPair per child of body A's shape container, then creates a child agent through the
// collision dispatcher for every child key the collision filter accepts.
// newOperandA is constructed first (its m_parent/m_motion stores precede the getContainer call).
// The filter call goes through hkpCollisionFilter's own redeclaration of the
// hkpShapeCollectionFilter overload (no null check on the +0xC adjustment); MSVC puts the
// overloads in reverse declaration order, so the 5-argument one is slot +4.
#include "havok/hkpCollisionAgent.h"
#include "havok/hkpCollisionDispatcher.h"
#include "havok/hkpCollisionFilter.h"

// hkpShapeBuffer: the 512-byte, 16-byte aligned scratch space getChildShape builds child shapes in.
class __declspec(align(16)) hkpShapeBuffer {
public:
    hkUint8 m_buffer[0x200];
};

struct hkArrayUtil_ {
    static HK_FORCE_INLINE void HK_CALL _reserve(hkMemoryAllocator &a, void *array, int reqCapacity, int sizeElem)
    {
        hkArrayUtil::_reserve(a, array, reqCapacity, sizeElem);
    }
};

// hkInplaceArray with the reserve and expandByUnchecked the agent uses.
template <typename T, unsigned N>
class hkInplaceArray_ : public hkArray<T> {
public:
    HK_FORCE_INLINE hkInplaceArray_() : hkArray<T>(m_storage, 0, N) {}
    HK_FORCE_INLINE void _reserve(hkMemoryAllocator &a, int n)
    {
        const int capacity = this->getCapacity();
        if (capacity < n) {
            int cap2 = 2 * capacity;
            int newSize = (n < cap2) ? cap2 : n;
            hkArrayUtil_::_reserve(a, this, newSize, sizeof(T));
        }
    }
    HK_FORCE_INLINE void reserve(int n) { _reserve(hkContainerHeapAllocator::get(this), n); }
    HK_FORCE_INLINE T *expandByUnchecked(int n)
    {
        T *res = this->m_data + this->m_size;
        this->m_size += n;
        return res;
    }
    T m_storage[N];
};

class hkpShapeCollectionAgent : public hkpCollisionAgent {
public:
    hkpShapeCollectionAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    ~hkpShapeCollectionAgent();   // out of line: ??1hkpShapeCollectionAgent@@UAA@XZ (0x82D55060)

    struct KeyAgentPair {
        hkpShapeKey m_key;
        hkpCollisionAgent *m_agent;
    };

    hkInplaceArray_<KeyAgentPair, 4> m_agents;   // +0xC
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
