// hkpShapeCollectionAgent::hkpShapeCollectionAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
// const hkpCollisionInput &input, hkpContactMgr *mgr)
// (Physics/Collide/Agent/CompoundAgent/ShapeCollection/hkpShapeCollectionAgent.cpp): reserves one
// KeyAgentPair per child of body A's shape container, then creates a child agent through the
// collision dispatcher for every child key the collision filter accepts.
// newOperandA is constructed first (its m_parent/m_motion stores precede the getContainer call).
// The filter call goes through hkpCollisionFilter's own redeclaration of the
// hkpShapeCollectionFilter overload (no null check on the +0xC adjustment); MSVC puts the
// overloads in reverse declaration order, so the 5-argument one is slot +4.
#include "havok/hkpShape.h"

class hkpContactMgr;
class hkpCollisionAgent;
class hkpCollisionDispatcher;
class hkpConstraintOwner;
class hkMotionState;
typedef hkpConstraintOwner hkCollisionConstraintOwner;
class hkpCdBodyPairCollector;
class hkpCdPointCollector;
struct hkpLinearCastCollisionInput;
struct hkpProcessCollisionInput;
struct hkpProcessCollisionOutput;
typedef int hkBool32;

#define HK_INVALID_SHAPE_KEY 0xffffffff

// hkpShapeBuffer: the 512-byte, 16-byte aligned scratch space getChildShape builds child shapes in.
class __declspec(align(16)) hkpShapeBuffer {
public:
    hkUint8 m_buffer[0x200];
};

// hkpCdBody (Physics/Collide/Agent/Collidable/hkpCdBody.h).
class hkpCdBody {
public:
    HK_FORCE_INLINE hkpCdBody(const hkpCdBody *parent, const hkMotionState *ms)
    {
        m_parent = parent;
        m_motion = ms;
    }
    const hkpShape *getShape() const { return m_shape; }
    const hkMotionState *getMotionState() const { return static_cast<const hkMotionState *>(m_motion); }
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

// hkpCollisionFilter and its interfaces (Physics/Collide/Filter/hkpCollisionFilter.h): as in
// havok/hkpCollisionFilter.h, but hkpCollisionFilter redeclares the interfaces' isCollisionEnabled
// overloads (as Havok's header does), so a call through an hkpCollisionFilter pointer adjusts this
// to the interface without a null check.
class hkpCollidable;
class hkpWorld;
struct hkpShapeRayCastInput;
struct hkpWorldRayCastInput;
struct hkpCollisionInput;

class hkpCollidableCollidableFilter {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpCollidableCollidableFilter() {}
    virtual hkBool isCollisionEnabled(const hkpCollidable &a, const hkpCollidable &b) const;
};

class hkpShapeCollectionFilter {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual hkBool isCollisionEnabled(const hkpCollisionInput &input, const hkpCdBody &a, const hkpCdBody &b,
                                      const hkpShapeContainer &bContainer, hkpShapeKey bKey) const;
    virtual hkBool isCollisionEnabled(const hkpCollisionInput &input, const hkpCdBody &collectionBodyA,
                                      const hkpCdBody &collectionBodyB, const hkpShapeContainer &containerShapeA,
                                      const hkpShapeContainer &containerShapeB, hkpShapeKey keyA,
                                      hkpShapeKey keyB) const;
    virtual int numShapeKeyHitsLimitBreached(const hkpCollisionInput &input, const hkpCdBody &bodyA,
                                             hkpShapeKey keyA, const hkpCdBody &bodyB, hkpShapeKey keyB,
                                             hkpShapeKey *shapeKeysInOut, int numShapeKeys) const;
    virtual ~hkpShapeCollectionFilter() {}
};

class hkpRayShapeCollectionFilter {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual hkBool isCollisionEnabled(const hkpShapeRayCastInput &aInput, const hkpShapeContainer &bContainer,
                                      hkpShapeKey bKey) const;
    virtual ~hkpRayShapeCollectionFilter() {}
};

class hkpRayCollidableFilter {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpRayCollidableFilter() {}
    virtual hkBool isCollisionEnabled(const hkpWorldRayCastInput &a, const hkpCollidable &collidableB) const;
};

class hkpCollisionFilter : public hkReferencedObject,
                           public hkpCollidableCollidableFilter,
                           public hkpShapeCollectionFilter,
                           public hkpRayShapeCollectionFilter,
                           public hkpRayCollidableFilter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    virtual void init(hkpWorld *world);   // primary vtable +0xC
    virtual hkBool isCollisionEnabled(const hkpCollidable &a, const hkpCollidable &b) const;
    virtual hkBool isCollisionEnabled(const hkpCollisionInput &input, const hkpCdBody &a, const hkpCdBody &b,
                                      const hkpShapeContainer &bContainer, hkpShapeKey bKey) const;
    virtual hkBool isCollisionEnabled(const hkpCollisionInput &input, const hkpCdBody &collectionBodyA,
                                      const hkpCdBody &collectionBodyB, const hkpShapeContainer &containerShapeA,
                                      const hkpShapeContainer &containerShapeB, hkpShapeKey keyA,
                                      hkpShapeKey keyB) const;
    virtual hkBool isCollisionEnabled(const hkpShapeRayCastInput &aInput, const hkpShapeContainer &bContainer,
                                      hkpShapeKey bKey) const;
    virtual hkBool isCollisionEnabled(const hkpWorldRayCastInput &a, const hkpCollidable &collidableB) const;

    hkUint32 m_prepad[2];   // +0x18
    hkUint32 m_type;        // +0x20
    hkUint32 m_postpad[3];  // +0x24
};

// Physics/Collide/Agent/hkpCollisionInput.h.
struct hkpCollisionInput {
    hkpCollisionDispatcher *m_dispatcher;     // +0x0
    hkUint32 m_weldClosestPoints;             // +0x4
    hkUint32 m_forceAcceptContactPoints;      // +0x8
    const hkpCollisionFilter *m_filter;       // +0xC
    hkReal m_tolerance;                       // +0x10
    hkBool32 m_createPredictiveAgents;        // +0x14
};

// hkpCollisionDispatcher (Physics/Collide/Dispatch/hkpCollisionDispatcher.h): the 32x32 agent type
// tables at +0x1A0 and +0x5A0 (predictive) and the 0x14-byte AgentFuncs at +0x9A0.
class hkpCollisionDispatcher : public hkReferencedObject {
public:
    enum { HK_MAX_SHAPE_TYPE = 32 };
    typedef hkpCollisionAgent *(HK_CALL *CreateFunc)(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                     const hkpCollisionInput &input, hkpContactMgr *mgr);
    struct AgentFuncs {
        CreateFunc m_createFunc;
        void *m_getPenetrationsFunc;
        void *m_getClosestPointFunc;
        void *m_linearCastFunc;
        hkBool m_isFlipped;
        hkBool m_isPredictive;
    };

    HK_FORCE_INLINE hkpCollisionAgent *getNewCollisionAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                            const hkpCollisionInput &input, hkpContactMgr *mgr) const
    {
        int typeA = bodyA.getShape()->m_type;
        int typeB = bodyB.getShape()->m_type;
        const hkUint8 (*table)[HK_MAX_SHAPE_TYPE] = input.m_createPredictiveAgents ? m_agent2TypesPred : m_agent2Types;
        int agentType = table[typeA][typeB];
        CreateFunc f = m_agent2Func[agentType].m_createFunc;
        return f(bodyA, bodyB, input, mgr);
    }

    hkUint8 m_members[0x198];                                          // +0x8
    hkUint8 m_agent2Types[HK_MAX_SHAPE_TYPE][HK_MAX_SHAPE_TYPE];       // +0x1A0
    hkUint8 m_agent2TypesPred[HK_MAX_SHAPE_TYPE][HK_MAX_SHAPE_TYPE];   // +0x5A0
    AgentFuncs m_agent2Func[32];                                       // +0x9A0
};

class hkpCollisionAgent : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpCollisionAgent(hkpContactMgr *contactMgr) : m_contactMgr(contactMgr) {}
    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);   // +0xC
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector);   // +0x10
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);   // +0x14
    virtual void processCollision(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpProcessCollisionInput &input,
                                  hkpProcessCollisionOutput &result);   // +0x18
    virtual void cleanup(hkCollisionConstraintOwner &constraintOwner);   // +0x1C

    hkpContactMgr *m_contactMgr;   // +0x8
};

extern "C" void fn_82CE6310(hkMemoryAllocator *alloc, void *array, int reqCapacity, int sizeElem);   // hkArrayUtil::_reserve

struct hkArrayUtil_ {
    static HK_FORCE_INLINE void HK_CALL _reserve(hkMemoryAllocator &a, void *array, int reqCapacity, int sizeElem)
    {
        fn_82CE6310(&a, array, reqCapacity, sizeElem);
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
