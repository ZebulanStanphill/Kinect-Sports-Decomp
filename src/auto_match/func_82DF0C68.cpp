// hkpGravityGun body picking (Physics/Utilities/Weapons/hkpGravityGun.cpp): over the world's active, then
// inactive simulation islands, take the entity in front of the view (local x from 0.1 to
// m_maxDistOfObjectPicked) with the smallest (|y| + |z|) / (x + 1), plus 0.1 for bodies heavier than
// m_maxMassOfObjectPicked, below 0.35, not already grabbed, and visible: a closest-hit ray from the view
// to the body hits nothing or the body itself.
//
// Built with /O2 /QVMXReserve. The source used literal constants; 0.35f and 0.1f are renamed to their
// __real@ names in the map. The 1.0f is lbl_82002AE0, whose rename is blocked by Matching C units, so this
// version still differs in that one name (as a variable copy, the constant changes the register
// allocation).
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;
typedef hkUint32 hkpShapeKey;

extern "C" double fabs(double);

struct hkMath {
    static HK_FORCE_INLINE hkReal fabs(hkReal r) { return (hkReal)::fabs(r); }
};

class hkVector4 {
public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    HK_FORCE_INLINE hkReal &operator()(int i) { return m_quad.vector4_f32[i]; }
    HK_FORCE_INLINE const hkReal &operator()(int i) const { return m_quad.vector4_f32[i]; }
    hkQuadReal m_quad;
};

class hkTransform {
public:
    HK_FORCE_INLINE const hkVector4 &getTranslation() const { return m_translation; }
    hkVector4 m_rotation[3];
    hkVector4 m_translation;   // +0x30
};

class hkpCollidable;
class hkpMotion;
class hkpCdBody;

extern "C" {
void fn_82CE5088(hkVector4 *self, const hkTransform *a, const hkVector4 *b);   // hkVector4::setTransformedInversePos
hkReal fn_82D93128(const hkpMotion *self);                                    // hkpMotion::getMass
}

// Only the members used here.
class hkpRigidBody {
public:
    HK_FORCE_INLINE const hkpCollidable *getCollidable() const { return (const hkpCollidable *)m_collidable; }
    HK_FORCE_INLINE const hkpMotion *getMotion() const { return (const hkpMotion *)m_motion; }
    HK_FORCE_INLINE const hkVector4 &getPosition() const { return m_position; }

    char m_pad0[0x10];
    char m_collidable[0xd0];   // +0x10 hkpWorldObject::m_collidable
    char m_motion[0x60];       // +0xe0 hkpEntity::m_motion
    hkVector4 m_position;      // +0x140
};

class hkpSimulationIsland {
public:
    char m_pad0[0x48];
    hkArray<hkpRigidBody *> m_entities;   // +0x48
};

class hkpWorld {
public:
    char m_pad0[0x28];
    hkArray<hkpSimulationIsland *> m_activeSimulationIslands;     // +0x28
    hkArray<hkpSimulationIsland *> m_inactiveSimulationIslands;   // +0x34
};

struct hkpWorldRayCastInput {
    hkpWorldRayCastInput() : m_enableShapeCollectionFilter(false), m_filterInfo(0) {}
    hkVector4 m_from;
    hkVector4 m_to;
    hkBool m_enableShapeCollectionFilter;
    hkUint32 m_filterInfo;
};

struct hkpShapeRayCastCollectorOutput {
    HK_FORCE_INLINE hkpShapeRayCastCollectorOutput() { reset(); }
    HK_FORCE_INLINE void reset() { m_hitFraction = 1.0f; m_extraInfo = -1; }
    hkVector4 m_normal;
    hkReal m_hitFraction;   // +0x10
    int m_extraInfo;        // +0x14
    int m_pad[2];
};

struct hkpShapeRayCastOutput : public hkpShapeRayCastCollectorOutput {
    HK_FORCE_INLINE hkpShapeRayCastOutput() { m_shapeKeyIndex = 0; m_shapeKeys[0] = hkpShapeKey(-1); }
    HK_FORCE_INLINE void reset()
    {
        hkpShapeRayCastCollectorOutput::reset();
        m_shapeKeyIndex = 0;
        m_shapeKeys[0] = hkpShapeKey(-1);
    }
    hkpShapeKey m_shapeKeys[8];   // +0x20
    int m_shapeKeyIndex;          // +0x40
};

struct hkpWorldRayCastOutput : public hkpShapeRayCastOutput {
    HK_FORCE_INLINE hkpWorldRayCastOutput() : m_rootCollidable(HK_NULL) {}
    HK_FORCE_INLINE void reset()
    {
        m_rootCollidable = HK_NULL;
        hkpShapeRayCastOutput::reset();
    }
    HK_FORCE_INLINE hkBool hasHit() const { return m_rootCollidable != HK_NULL; }
    const hkpCollidable *m_rootCollidable;   // +0x50
};

class hkpRayHitCollector {
public:
    HK_FORCE_INLINE hkpRayHitCollector() { reset(); }
    HK_FORCE_INLINE void reset() { m_earlyOutHitFraction = 1.0f; }
    virtual void addRayHit(const hkpCdBody &cdBody, const hkpShapeRayCastCollectorOutput &hitInfo);
    virtual ~hkpRayHitCollector() {}
    hkReal m_earlyOutHitFraction;
};

class hkpClosestRayHitCollector : public hkpRayHitCollector {
public:
    HK_FORCE_INLINE hkpClosestRayHitCollector() { reset(); }
    HK_FORCE_INLINE void reset()
    {
        m_rayHit.reset();
        hkpRayHitCollector::reset();
    }
    virtual void addRayHit(const hkpCdBody &cdBody, const hkpShapeRayCastCollectorOutput &hitInfo);
    HK_FORCE_INLINE const hkpWorldRayCastOutput &getHit() const { return m_rayHit; }
    HK_FORCE_INLINE hkBool hasHit() const { return m_rayHit.hasHit(); }
    hkpWorldRayCastOutput m_rayHit;   // +0x10
};

// hkpWorld::castRay(const hkpWorldRayCastInput &, hkpRayHitCollector &) const, kept: its unit matches.
extern "C" void fn_82D81CC8(const hkpWorld *world, const hkpWorldRayCastInput *input, hkpRayHitCollector *collector);

class hkpGravityGun {
public:
    char m_pad0[0x20];                           // hkpFirstPersonGun
    hkArray<hkpRigidBody *> m_grabbedBodies;     // +0x20
    int m_maxNumObjectsPicked;                   // +0x2c
    hkReal m_maxMassOfObjectPicked;              // +0x30
    hkReal m_maxDistOfObjectPicked;              // +0x34
};

extern "C" hkpRigidBody *fn_82DF0C68(hkpGravityGun *self, const hkTransform *viewTransform, hkpRigidBody *characterBody,
                                     const hkpWorld *world)
{
    hkpRigidBody *bestBody = HK_NULL;
    hkReal bestValue = 0.35f;
    const hkArray<hkpSimulationIsland *> *islands = &world->m_activeSimulationIslands;
    for (int a = 0; a < 2; a++)
    {
        for (int i = 0; i < islands->getSize(); i++)
        {
            const hkpSimulationIsland *island = (*islands)[i];
            for (int b = 0; b < island->m_entities.getSize(); b++)
            {
                hkpRigidBody *body = island->m_entities[b];
                hkVector4 local;
                fn_82CE5088(&local, viewTransform, &body->getPosition());
                if (local(0) < 0.1f || local(0) > self->m_maxDistOfObjectPicked || body == characterBody)
                    continue;

                hkReal value = (hkMath::fabs(local(1)) + hkMath::fabs(local(2))) / (local(0) + 1.0f);
                if (fn_82D93128(body->getMotion()) > self->m_maxMassOfObjectPicked)
                    value += 0.1f;
                if (value > bestValue)
                    continue;

                // Skip bodies already grabbed (the guarded pointer loop of hkArray::indexOf).
                {
                    int g = 0;
                    const int size = self->m_grabbedBodies.m_size;
                    if (size > 0)
                    {
                        hkpRigidBody *const *p = self->m_grabbedBodies.m_data;
                        do
                        {
                            if (*p == body)
                                goto nextBody;
                            ++p;
                            ++g;
                        } while (g < size);
                    }
                }

                {
                    hkpClosestRayHitCollector collector;
                    hkpWorldRayCastInput input;
                    input.m_from = viewTransform->getTranslation();
                    input.m_to = body->getPosition();
                    fn_82D81CC8(world, &input, &collector);
                    if (collector.hasHit() && collector.getHit().m_rootCollidable != body->getCollidable())
                        goto nextBody;
                    bestValue = value;
                    bestBody = body;
                }
            nextBody:;
            }
        }
        islands = &world->m_inactiveSimulationIslands;
    }
    return bestBody;
}
