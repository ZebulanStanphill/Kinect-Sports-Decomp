class Bool_82D55DC8
{
  public:
    __forceinline Bool_82D55DC8(bool value)
    {
        m_bool = value;
    }

    __forceinline operator bool() const
    {
        return m_bool != 0;
    }

    char m_bool;
};

struct Shape_82D55DC8 {
    void *vtable;           /* 0x00 */
    int memSizeAndRefCount; /* 0x04 */
    int userData;           /* 0x08 */
    int type;               /* 0x0c */
};

struct ShapeBuffer_82D55DC8 {
    char data[0x200];
};

class ShapeContainer_82D55DC8
{
  public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual const Shape_82D55DC8 *getChildShape(unsigned int key, ShapeBuffer_82D55DC8 &buffer) const;
};

class ShapeCollection_82D55DC8
{
  public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual const ShapeContainer_82D55DC8 *getContainer() const;
};

struct CdBody_82D55DC8 {
    const Shape_82D55DC8 *m_shape;   /* 0x00 */
    unsigned int m_shapeKey;         /* 0x04 */
    const void *m_motion;            /* 0x08 */
    const CdBody_82D55DC8 *m_parent; /* 0x0c */

    __forceinline CdBody_82D55DC8(const CdBody_82D55DC8 *parent)
    {
        m_parent = parent;
        m_motion = parent->m_motion;
    }

    __forceinline void setShape(const Shape_82D55DC8 *shape, unsigned int key)
    {
        m_shape = shape;
        m_shapeKey = key;
    }
};

struct CollisionInput_82D55DC8;
class CollisionAgent_82D55DC8;
class ConstraintOwner_82D55DC8;

typedef CollisionAgent_82D55DC8 *(*CreateFunc_82D55DC8)(const CdBody_82D55DC8 &bodyA,
                                                        const CdBody_82D55DC8 &bodyB,
                                                        const CollisionInput_82D55DC8 &input, void *mgr);

struct AgentFuncs_82D55DC8 {
    CreateFunc_82D55DC8 m_createFunc;
    void *m_getPenetrationsFunc;
    void *m_getClosestPointFunc;
    void *m_linearCastFunc;
    int m_isFlipped;
};

struct Dispatcher_82D55DC8 {
    char pad0[0x1a0];
    unsigned char m_agent2Types[32][32];     /* 0x1a0 */
    unsigned char m_agent2TypesPred[32][32]; /* 0x5a0 */
    AgentFuncs_82D55DC8 m_agent2Func[1];     /* 0x9a0 */

    __forceinline CollisionAgent_82D55DC8 *getNewCollisionAgent(const CdBody_82D55DC8 &bodyA,
                                                                const CdBody_82D55DC8 &bodyB,
                                                                const CollisionInput_82D55DC8 &input,
                                                                void *mgr) const;
};

class ShapeCollectionFilter_82D55DC8
{
  public:
    virtual void v0();
    virtual Bool_82D55DC8 isCollisionEnabled(const CollisionInput_82D55DC8 &input,
                                             const CdBody_82D55DC8 &bodyA, const CdBody_82D55DC8 &bodyB,
                                             const ShapeContainer_82D55DC8 &container,
                                             unsigned int key) const;
};

class CollidableFilter_82D55DC8
{
  public:
    virtual void v0();
};

class ReferencedObject_82D55DC8
{
  public:
    virtual void v0();
    int memSizeAndRefCount;
};

class CollisionFilter_82D55DC8 : public ReferencedObject_82D55DC8,
                                 public CollidableFilter_82D55DC8,
                                 public ShapeCollectionFilter_82D55DC8
{
};

struct CollisionInput_82D55DC8 {
    Dispatcher_82D55DC8 *m_dispatcher; /* 0x00 */
    char pad4[0xc - 0x4];
    CollisionFilter_82D55DC8 *m_filter; /* 0x0c */
    char pad10[0x14 - 0x10];
    int m_createPredictiveAgents; /* 0x14 */
};

__forceinline CollisionAgent_82D55DC8 *
Dispatcher_82D55DC8::getNewCollisionAgent(const CdBody_82D55DC8 &bodyA, const CdBody_82D55DC8 &bodyB,
                                          const CollisionInput_82D55DC8 &input, void *mgr) const
{
    int typeA = bodyA.m_shape->type;
    int typeB = bodyB.m_shape->type;
    const unsigned char (*table)[32] = input.m_createPredictiveAgents ? m_agent2TypesPred : m_agent2Types;
    int index = table[typeA][typeB];
    return m_agent2Func[index].m_createFunc(bodyA, bodyB, input, mgr);
}

class CollisionAgent_82D55DC8
{
  public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void cleanup(ConstraintOwner_82D55DC8 &owner);
    virtual void updateShapeCollectionFilter(const CdBody_82D55DC8 &bodyA, const CdBody_82D55DC8 &bodyB,
                                             const CollisionInput_82D55DC8 &input,
                                             ConstraintOwner_82D55DC8 &owner);
};

struct KeyAgentPair_82D55DC8 {
    unsigned int m_key;                        /* 0x00 */
    int pad4;                                  /* 0x04 */
    CollisionAgent_82D55DC8 *m_collisionAgent; /* 0x08 */
};

/* hkArray<KeyAgentPair> */
struct AgentArray_82D55DC8 {
    KeyAgentPair_82D55DC8 *m_data; /* 0x00 */
    int m_size;                    /* 0x04 */
    int m_capacityAndFlags;        /* 0x08 */

    __forceinline int getSize() const
    {
        return m_size;
    }

    __forceinline KeyAgentPair_82D55DC8 &operator[](int i)
    {
        return m_data[i];
    }
};

struct ShapeCollectionAgent_82D55DC8 {
    void *vtable;                 /* 0x00 */
    int memSizeAndRefCount;       /* 0x04 */
    void *m_contactMgr;           /* 0x08 */
    AgentArray_82D55DC8 m_agents; /* 0x0c */

    void updateShapeCollectionFilter(const CdBody_82D55DC8 &bodyA, const CdBody_82D55DC8 &bodyB,
                                     const CollisionInput_82D55DC8 &input, ConstraintOwner_82D55DC8 &owner);
};

extern "C" CollisionAgent_82D55DC8 *fn_82D74740(void);

void ShapeCollectionAgent_82D55DC8::updateShapeCollectionFilter(const CdBody_82D55DC8 &bodyA,
                                                                const CdBody_82D55DC8 &bodyB,
                                                                const CollisionInput_82D55DC8 &input,
                                                                ConstraintOwner_82D55DC8 &owner)
{
    const ShapeContainer_82D55DC8 *container =
        ((const ShapeCollection_82D55DC8 *)bodyB.m_shape)->getContainer();
    ShapeBuffer_82D55DC8 shapeBuffer;

    for (int i = 0; i < m_agents.getSize(); i++) {
        const Shape_82D55DC8 *shape = container->getChildShape(m_agents[i].m_key, shapeBuffer);
        CdBody_82D55DC8 newOperand(&bodyB);
        newOperand.setShape(shape, m_agents[i].m_key);

        if (input.m_filter->isCollisionEnabled(input, bodyA, bodyB, *container, m_agents[i].m_key)) {
            if (m_agents[i].m_collisionAgent == fn_82D74740()) {
                m_agents[i].m_collisionAgent =
                    input.m_dispatcher->getNewCollisionAgent(bodyA, newOperand, input, m_contactMgr);
            } else {
                m_agents[i].m_collisionAgent->updateShapeCollectionFilter(bodyA, newOperand, input, owner);
            }
        } else {
            if (m_agents[i].m_collisionAgent != fn_82D74740()) {
                m_agents[i].m_collisionAgent->cleanup(owner);
                m_agents[i].m_collisionAgent = fn_82D74740();
            }
        }
    }
}
