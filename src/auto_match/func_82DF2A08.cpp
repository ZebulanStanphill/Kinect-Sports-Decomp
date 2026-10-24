// hkpMouseSpringAction::hkpMouseSpringAction(const hkVector4 &, const hkVector4 &, hkReal, hkReal, hkReal, hkpRigidBody *,
// const hkArray<mouseSpringAppliedCallback> *) (Physics/Utilities/Actions/MouseSpring/hkpMouseSpringAction.cpp), /O2 /QVMXReserve.
// 250.0f is a literal (the rename map names the game's copy __real@437a0000); 1.0f (lbl_82002AE0) and HK_REAL_MAX
// (lbl_82134508) keep their names because Matching units reference them. hkpCollisionInput's members are hkPadSpu
// wrappers, so its implicit copy moves m_tolerance through integer registers; the closest-points function is
// looked up before the input copy and the collector are built.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

static const float lbl_82002AE0 = 1.0f;   // the game's 1.0f (Matching units reference it)
extern "C" const float lbl_82134508;      // HK_REAL_MAX (Matching units reference it)

class hkVector4 {
public:
    HK_FORCE_INLINE hkVector4() {}
    HK_FORCE_INLINE hkVector4(const hkVector4 &v) { m_quad = v.m_quad; }
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    HK_FORCE_INLINE hkReal &operator()(int i) { return m_quad.vector4_f32[i]; }
    __vector4 m_quad;
};

class hkMatrix3 {
public:
    HK_FORCE_INLINE hkMatrix3() {}
    HK_FORCE_INLINE hkMatrix3(const hkMatrix3 &m) : m_col0(m.m_col0), m_col1(m.m_col1), m_col2(m.m_col2) {}
    hkVector4 m_col0, m_col1, m_col2;
};
class hkRotation : public hkMatrix3 {
public:
    HK_FORCE_INLINE hkRotation() {}
};

class hkTransform;
extern "C" const hkTransform *fn_82CEBD78(void);   // hkTransform::getIdentity()

class hkTransform {
public:
    HK_FORCE_INLINE hkTransform() {}
    HK_FORCE_INLINE hkTransform(const hkRotation &r, const hkVector4 &t) : m_rotation(r), m_translation(t) {}
    static HK_FORCE_INLINE const hkTransform &HK_CALL getIdentity() { return *fn_82CEBD78(); }
    HK_FORCE_INLINE const hkRotation &getRotation() const { return m_rotation; }
    hkRotation m_rotation;
    hkVector4 m_translation;
};

// hkStringPtr::operator=(const char *) is out of line (fn_82CED628) and keeps its fn_ name.
extern "C" void fn_82CED628(hkStringPtr *self, const char *s);

class hkpWorld;
class hkpEntity;
class hkpRigidBody;
class hkpSimulationIsland;
class hkpShape;
class hkpCdBody;
class hkpCollidable;
class hkMotionState;
struct hkStepInfo;

enum hkpShapeType { HK_SHAPE_INVALID = 0 };
typedef hkUint32 hkpShapeKey;
#define HK_INVALID_SHAPE_KEY 0xffffffff

class hkpShape : public hkReferencedObject {
public:
    HK_FORCE_INLINE hkpShapeType getType() const { return hkpShapeType(m_type); }
    hkUlong m_userData;   // +0x8
    hkUint32 m_type;      // +0xC
};

class hkpSphereShape : public hkpShape {
public:
    hkpSphereShape(hkReal radius);   // out of line
    hkReal m_radius;                 // +0x10
    hkUint32 m_pad16[3];             // +0x14
};

// hkpCollidable::hkpCollidable(const hkpShape *, const hkTransform *, int) is out of line (fn_8253D7A8).
extern "C" void fn_8253D7A8(hkpCollidable *self, const hkpShape *shape, const hkTransform *t, int type);

class hkpCdBody {
public:
    HK_FORCE_INLINE const hkpShape *getShape() const { return m_shape; }
    const hkpShape *m_shape;     // +0x0
    hkUint32 m_shapeKey;         // +0x4
    const void *m_motion;        // +0x8
    const hkpCdBody *m_parent;   // +0xC
};

class hkpCollidable : public hkpCdBody {
public:
    HK_FORCE_INLINE hkpCollidable(const hkpShape *shape, const hkTransform *t, int type = 0)
    {
        fn_8253D7A8(this, shape, t, type);
    }
    char m_rest[0x50 - 0x10];
};

struct hkContactPoint {
    HK_FORCE_INLINE void setDistance(hkReal d) { m_separatingNormal(3) = d; }
    hkVector4 m_position;
    hkVector4 m_separatingNormal;
};

struct hkpRootCdPoint {
    hkContactPoint m_contact;               // +0x0
    const hkpCollidable *m_rootCollidableA; // +0x20
    hkpShapeKey m_shapeKeyA;                // +0x24
    const hkpCollidable *m_rootCollidableB; // +0x28
    hkpShapeKey m_shapeKeyB;                // +0x2C
};

struct hkpCdPoint;

class hkpCdPointCollector {
public:
    HK_FORCE_INLINE hkpCdPointCollector() { reset(); }
    HK_FORCE_INLINE virtual ~hkpCdPointCollector() {}
    virtual void addCdPoint(const hkpCdPoint &point);
    HK_FORCE_INLINE void reset() { m_earlyOutDistance = lbl_82134508; }
    hkReal m_earlyOutDistance;   // +0x4
};

class hkpClosestCdPointCollector : public hkpCdPointCollector {
public:
    HK_FORCE_INLINE hkpClosestCdPointCollector() { reset(); }
    HK_FORCE_INLINE virtual ~hkpClosestCdPointCollector() {}
    virtual void addCdPoint(const hkpCdPoint &point);
    HK_FORCE_INLINE void reset()
    {
        m_hitPoint.m_rootCollidableA = HK_NULL;
        m_hitPoint.m_contact.setDistance(lbl_82134508);
        hkpCdPointCollector::reset();
    }
    HK_FORCE_INLINE hkBool hasHit() const { return m_hitPoint.m_rootCollidableA != HK_NULL; }
    HK_FORCE_INLINE const hkpRootCdPoint &getHit() const { return m_hitPoint; }

    hkpRootCdPoint m_hitPoint;   // +0x10
};

class hkpCollisionDispatcher;
class hkpCollisionFilter;
class hkpConvexListFilter;

// hkPadSpu (Common/Base/Types/hkBaseTypes.h): a value padded to 16 bytes on SPU, plain elsewhere.
template <typename TYPE>
class hkPadSpu {
public:
    HK_FORCE_INLINE hkPadSpu() {}
    HK_FORCE_INLINE hkPadSpu(TYPE e) : m_storage(e) {}
    HK_FORCE_INLINE operator TYPE() const { return m_storage; }
    HK_FORCE_INLINE TYPE operator->() const { return m_storage; }
    TYPE m_storage;
};

struct hkpCollisionInput {
    struct Aabb32Info {
        hkVector4 m_bitOffsetLow;
        hkVector4 m_bitOffsetHigh;
        hkVector4 m_bitScale;
    };
    hkPadSpu<hkpCollisionDispatcher *> m_dispatcher;            // +0x0
    hkPadSpu<hkBool> m_weldClosestPoints;                       // +0x4
    hkPadSpu<hkUint32> m_forceAcceptContactPoints;              // +0x8
    hkPadSpu<hkReal> m_tolerance;                               // +0xC
    hkPadSpu<const hkpCollisionFilter *> m_filter;              // +0x10
    hkPadSpu<const hkpConvexListFilter *> m_convexListFilter;   // +0x14
    Aabb32Info m_aabb32Info;                        // +0x20
};
struct hkpProcessCollisionInput : public hkpCollisionInput {
};

class hkpCollisionDispatcher : public hkReferencedObject {
public:
    typedef void (HK_CALL *GetClosestPointsFunc)(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                 const hkpCollisionInput &input, hkpCdPointCollector &output);
    struct AgentFuncs {
        void *m_createFunc;
        void *m_getPenetrationsFunc;
        GetClosestPointsFunc m_getClosestPointFunc;
        void *m_linearCastFunc;
        hkBool m_isFlipped;
        hkBool m_isPredictive;
    };
    HK_FORCE_INLINE GetClosestPointsFunc getGetClosestPointsFunc(hkpShapeType typeA, hkpShapeType typeB) const
    {
        int idx = m_agent2Types[typeA][typeB];
        return m_agent2Func[idx].m_getClosestPointFunc;
    }

    char m_pad8[0x1A0 - 0x8];
    hkUint8 m_agent2Types[32][32];       // +0x1A0
    hkUint8 m_agent2TypesPred[32][32];   // +0x5A0
    AgentFuncs m_agent2Func[1];          // +0x9A0
};

class hkpWorld {
public:
    HK_FORCE_INLINE const hkpProcessCollisionInput *getCollisionInput() const { return m_collisionInput; }
    HK_FORCE_INLINE hkpCollisionDispatcher *getCollisionDispatcher() const { return m_collisionDispatcher; }
    char m_pad0[0x78];
    hkpProcessCollisionInput *m_collisionInput;    // +0x78
    hkpCollisionFilter *m_collisionFilter;         // +0x7C
    hkpCollisionDispatcher *m_collisionDispatcher; // +0x80
};

class hkpWorldObject : public hkReferencedObject {
public:
    HK_FORCE_INLINE hkpWorld *getWorld() const { return m_world; }
    HK_FORCE_INLINE const hkpCollidable *getCollidable() const { return &m_collidable; }
    hkpWorld *m_world;          // +0x8
    hkUlong m_userData;         // +0xC
    hkpCollidable m_collidable; // +0x10
};
class hkpEntity : public hkpWorldObject {
};
class hkpRigidBody : public hkpEntity {
};

class hkpAction : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    HK_FORCE_INLINE void setName(const char *name) { fn_82CED628(&m_name, name); }
    hkUlong m_userData;             // +0x8
    hkpWorld *m_world;              // +0xC
    hkpSimulationIsland *m_island;  // +0x10
    hkStringPtr m_name;             // +0x14
};

class hkpUnaryAction : public hkpAction {
public:
    hkpUnaryAction(hkpEntity *entity = HK_NULL, hkUlong userData = 0);   // out of line
    hkpEntity *m_entity;   // +0x18
};

template <typename T>
static HK_FORCE_INLINE void _copyFromArray(hkArrayBase<T> &self, hkMemoryAllocator &alloc, const hkArrayBase<T> &a)
{
    if (self.getCapacity() < a.getSize()) {
        if ((self.m_capacityAndFlags & hkArrayBase<T>::DONT_DEALLOCATE_FLAG) == 0)
            alloc.bufFree(self.m_data, self.getCapacity(), sizeof(T));
        int n = a.getSize();
        self.m_data = static_cast<T *>(alloc.bufAlloc(n, sizeof(T)));
        self.m_capacityAndFlags = n;
    }
    self.m_size = a.getSize();
    T *dst = self.m_data;
    const T *src = a.m_data;
    int cnt = self.m_size;
    for (int i = 0; i < cnt; ++i)
        dst[i] = src[i];
}

template <typename T>
static HK_FORCE_INLINE void assign(hkArray<T> &self, const hkArray<T> &a)
{
    _copyFromArray(self, hkContainerHeapAllocator::get(&self), a);
}

class hkpMouseSpringAction : public hkpUnaryAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    typedef void (HK_CALL *mouseSpringAppliedCallback)(hkpMouseSpringAction *action, const hkStepInfo &stepInfo,
                                                       hkpRigidBody *rb);

    hkpMouseSpringAction(const hkVector4 &positionInRbLocal, const hkVector4 &mousePositionInWorld,
                         const hkReal springDamping, const hkReal springElasticity, const hkReal objectDamping,
                         hkpRigidBody *rb, const hkArray<mouseSpringAppliedCallback> *appliedCallbacks);
    virtual void applyAction(const hkStepInfo &stepInfo);

    hkVector4 m_positionInRbLocal;      // +0x20
    hkVector4 m_mousePositionInWorld;   // +0x30
    hkReal m_springDamping;             // +0x40
    hkReal m_springElasticity;          // +0x44
    hkReal m_maxRelativeForce;          // +0x48
    hkReal m_objectDamping;             // +0x4C
    hkpShapeKey m_shapeKey;             // +0x50
    hkArray<mouseSpringAppliedCallback> m_applyCallbacks;   // +0x54
};

hkpMouseSpringAction::hkpMouseSpringAction(const hkVector4 &positionInRbLocal, const hkVector4 &mousePositionInWorld,
                                           const hkReal springDamping, const hkReal springElasticity,
                                           const hkReal objectDamping, hkpRigidBody *rb,
                                           const hkArray<mouseSpringAppliedCallback> *appliedCallbacks)
    : hkpUnaryAction(rb),
      m_positionInRbLocal(positionInRbLocal),
      m_mousePositionInWorld(mousePositionInWorld),
      m_springDamping(springDamping),
      m_springElasticity(springElasticity),
      m_objectDamping(objectDamping)
{
    m_maxRelativeForce = 250.0f;
    if (appliedCallbacks)
        assign(m_applyCallbacks, *appliedCallbacks);

    hkpWorld *world = rb->getWorld();
    m_shapeKey = HK_INVALID_SHAPE_KEY;
    if (world) {
        hkpSphereShape sphere(lbl_82002AE0);
        hkTransform transform(hkTransform::getIdentity().getRotation(), mousePositionInWorld);
        hkpCollidable sphereCollidable(&sphere, &transform);

        hkpCollisionDispatcher::GetClosestPointsFunc getClosestPoints =
            world->getCollisionDispatcher()->getGetClosestPointsFunc(sphere.getType(), rb->getCollidable()->getShape()->getType());
        hkpCollisionInput input = *world->getCollisionInput();
        hkpClosestCdPointCollector collector;
        getClosestPoints(sphereCollidable, *rb->getCollidable(), input, collector);
        if (collector.hasHit())
            m_shapeKey = collector.getHit().m_shapeKeyB;
    }
    setName("hkpMouseSpringAction");
}
