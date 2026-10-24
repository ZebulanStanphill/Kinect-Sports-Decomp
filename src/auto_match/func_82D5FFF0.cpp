// hkpSymmetricAgent<hkpListAgent>::linearCast (virtual, Physics/Collide/Agent/Util/Symmetric/hkpSymmetricAgent.inl):
// flips the bodies, negates the cast path and wraps the collectors so that the results come back flipped, then
// forwards to hkpListAgent's linear cast, which is hkpSymmetricAgent<hkpShapeCollectionAgent>::staticLinearCast
// (fn_82D5D320, keeps its fn_ name: it is Matching). The compiler inlines that function into the branch without a
// start collector only, so it is defined here (as an inline extern "C" function) as well as called.
#include "havok/hkBase.h"

class hkpCdPoint;
class hkpContactMgr;
class hkpConstraintOwner;
typedef hkpConstraintOwner hkCollisionConstraintOwner;
struct hkpCollisionInput;
struct hkpProcessCollisionInput;
struct hkpProcessCollisionOutput;
class hkpCdBodyPairCollector;

extern "C" const float lbl_82134508;   // HK_REAL_MAX

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" __vector4 __vxor(__vector4 a, __vector4 b);   // VMX intrinsic
extern "C" const hkQuadReal lbl_8209AB20;               // sign mask

class hkVector4 {
public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    HK_FORCE_INLINE void setNeg4(const hkVector4 &v) { m_quad = __vxor(v.m_quad, lbl_8209AB20); }

    hkQuadReal m_quad;
};

class hkpCdBody;

// Physics/Collide/Agent/hkpLinearCastCollisionInput.h: 0x70 bytes, m_path at +0x50.
struct hkpLinearCastCollisionInput {
    hkUint8 m_collisionInput[0x40];   // +0x0 hkpCollisionInput
    hkVector4 m_aabb32Info;           // +0x40
    hkVector4 m_path;                 // +0x50
    hkReal m_maxExtraPenetration;     // +0x60
    hkReal m_cachedPathLength;        // +0x64
};

class hkpCdPointCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpCdPointCollector);
    hkpCdPointCollector() { reset(); }
    virtual ~hkpCdPointCollector() {}
    virtual void addCdPoint(const hkpCdPoint &point) = 0;
    virtual void reset() { m_earlyOutDistance = lbl_82134508; }

    hkReal m_earlyOutDistance;   // +0x4
};

class hkpSymmetricAgentFlipCastCollector : public hkpCdPointCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpSymmetricAgentFlipCastCollector);
    hkpSymmetricAgentFlipCastCollector(const hkVector4 &path, hkpCdPointCollector &c)
    {
        m_path = path;
        m_collector = &c;
    }
    virtual void addCdPoint(const hkpCdPoint &point);

    hkVector4 m_path;                   // +0x10
    hkpCdPointCollector *m_collector;   // +0x20
};

class hkpCollisionAgent : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
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

extern "C" {
// hkpShapeCollectionAgent::staticLinearCast
void fn_82D6C100(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                 hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);

// hkpSymmetricAgent<hkpShapeCollectionAgent>::staticLinearCast
inline void fn_82D5D320(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                        hkpCdPointCollector &collector, hkpCdPointCollector *startCollector)
{
    hkpLinearCastCollisionInput flippedInput = input;
    flippedInput.m_path.setNeg4(input.m_path);
    hkpSymmetricAgentFlipCastCollector flipCollector(input.m_path, collector);
    if (startCollector) {
        hkpSymmetricAgentFlipCastCollector startFlipCollector(input.m_path, *startCollector);
        fn_82D6C100(bodyB, bodyA, flippedInput, flipCollector, &startFlipCollector);
    } else {
        fn_82D6C100(bodyB, bodyA, flippedInput, flipCollector, HK_NULL);
    }
}
}

class hkpListAgent : public hkpCollisionAgent {
public:
    static void HK_CALL staticLinearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                         const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
                                         hkpCdPointCollector *startCollector)
    {
        fn_82D5D320(bodyA, bodyB, input, collector, startCollector);
    }
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector)
    {
        staticLinearCast(bodyA, bodyB, input, collector, startCollector);
    }
};

template <typename AGENT>
class hkpSymmetricAgent : public AGENT {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector)
    {
        hkpLinearCastCollisionInput flippedInput = input;
        flippedInput.m_path.setNeg4(input.m_path);
        hkpSymmetricAgentFlipCastCollector flipCollector(input.m_path, collector);
        if (startCollector) {
            hkpSymmetricAgentFlipCastCollector startFlipCollector(input.m_path, *startCollector);
            AGENT::linearCast(bodyB, bodyA, flippedInput, flipCollector, &startFlipCollector);
        } else {
            AGENT::linearCast(bodyB, bodyA, flippedInput, flipCollector, HK_NULL);
        }
    }
};

template void hkpSymmetricAgent<hkpListAgent>::linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);
