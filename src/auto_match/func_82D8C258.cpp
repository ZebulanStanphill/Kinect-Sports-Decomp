// hkpRigidBody::hkpRigidBody(const hkpRigidBodyCinfo &info) (Physics/Dynamics/Entity/hkpRigidBody.cpp).
// It keeps its fn_ name (Matching units call it), so it is written as an extern "C" function: the
// hkpEntity base constructor (??0hkpEntity@@QAA@PBVhkpShape@@@Z, at 0x82D8AAA8), then the hkpRigidBody vtable (taken from a finish-constructed
// stand-in), then the body. Member names follow Havok 2010 and are not all confirmed.
// - hkMath::min2 on Xbox 360 is __fsel(x - y, y, x).
// - The fixed motion's placement new is written with an explicit null test on a local: a plain
//   `new (&m_motion)` fuses the check into addic. and keeps &m_motion out of the dominating block,
//   while the original computes it once before the branch (cmplwi) and still folds the motion's
//   vtable loads into 0xe0(this).
// - 0.2f is a literal (lbl_82002C2C renamed to __real@3e4ccccd): with an extern float the multiply
//   puts the loaded constant first. 0.1f is a literal too; symbols.txt already names its constant
//   __real@3dcccccd, so declaring it as an lbl_ extern references a symbol the original lacks.
#include "havok/hkBase.h"
extern "C" double __fsel(double, double, double);
class hkVector4 { public: float v[4]; };
class hkQuaternion { public: float v[4]; };
class hkMatrix3 { public: hkVector4 c[3]; };
class hkpShape;
class hkLocalFrame : public hkReferencedObject {};
extern "C" void fn_82CE5458(void *self, const float *f);
class hkUFloat8 { public: HK_FORCE_INLINE void operator=(const float &f) { fn_82CE5458(this, &f); } unsigned char m_value; };
template <typename T> class RefPtr {
public:
    HK_FORCE_INLINE void operator=(T *e) { if (e) e->addReference(); if (m_pntr) m_pntr->removeReference(); m_pntr = e; }
    HK_FORCE_INLINE T *operator->() const { return m_pntr; }
    T *m_pntr;
};
struct hkpRigidBodyCinfo {
    unsigned int m_collisionFilterInfo;
    const hkpShape *m_shape;
    hkLocalFrame *m_localFrame;
    unsigned char m_collisionResponse;
    char pad0d;
    unsigned short m_contactPointCallbackDelay;
    hkVector4 m_position;
    hkQuaternion m_rotation;
    hkVector4 m_linearVelocity;
    hkVector4 m_angularVelocity;
    hkMatrix3 m_inertiaTensor;
    hkVector4 m_centerOfMass;
    float m_mass;
    float m_linearDamping;
    float m_angularDamping;
    unsigned short m_gravityFactor;
    char pad9e[2];
    float m_friction;
    float m_restitution;
    float m_maxLinearVelocity;
    float m_maxAngularVelocity;
    float m_allowedPenetrationDepth;
    signed char m_motionType;
    unsigned char m_enableDeactivation;
    signed char m_solverDeactivation;
    unsigned char m_qualityType;
    unsigned char m_autoRemoveLevel;
    unsigned char m_responseModifierFlags;
    signed char m_numShapeKeysInContactPointProperties;
    unsigned char m_forceCollideOntoPpu;
};
struct hkMotionState { char pad[0xa4]; float m_linearDamping, m_angularDamping; hkUFloat8 m_maxLinearVelocity, m_maxAngularVelocity; char pad2[0x10e - 0xae]; unsigned short m_gravityFactor; };
class hkpMotion {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void setLinearVelocity(const hkVector4 &v); virtual void setAngularVelocity(const hkVector4 &v);
    char pad04[4];
    unsigned char m_type;
    char pad09[7];
    hkMotionState m_motionState;
    char padEnd[0x130 - 0x10 - sizeof(hkMotionState)];
};
class hkpFixedRigidMotion : public hkpMotion { public: hkpFixedRigidMotion(const hkVector4 &position, const hkQuaternion &rotation); };
inline void *operator new(unsigned int, void *p) { return p; }
struct hkpWorld { char pad[0x305]; unsigned char m_c305, m_c306, m_c307; };
extern "C" {
void fn_82D93120(hkpMotion *, int);
void fn_82D8B4B8(int, const hkVector4 &, const hkQuaternion &, float, const hkMatrix3 &, const hkVector4 &, float, float, hkpMotion *);
void fn_82D8B2F8(hkpMotion *, int, unsigned int, unsigned char, unsigned char, unsigned char);
unsigned char fn_83095E98(const hkpShape *);
extern float lbl_82002C5C, lbl_82134508;
}
class hkpRigidBody;
extern "C" { void fn_82D89BD8(hkpRigidBody *); void fn_82D8B400(hkpRigidBody *, const hkpShape *, hkVector4 *); }
// The base constructor, out of line: hkpEntity::hkpEntity(const hkpShape *).
class hkpEntity { public: hkpEntity(const hkpShape *shape); };
static HK_FORCE_INLINE float min2(float x, float y) { return (float)__fsel(x - y, y, x); }
class hkpRigidBody : public hkReferencedObject {
public:
    hkpRigidBody(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}
    HK_FORCE_INLINE hkpMotion *getRigidMotion() { return (hkpMotion *)&m_motion; }
    HK_FORCE_INLINE void activate() { fn_82D89BD8(this); }
    HK_FORCE_INLINE void setLinearVelocity(const hkVector4 &v) { activate(); getRigidMotion()->setLinearVelocity(v); }
    HK_FORCE_INLINE void setAngularVelocity(const hkVector4 &v) { activate(); getRigidMotion()->setAngularVelocity(v); }
    hkpWorld *m_world;            // 08
    char pad0c[4];
    const hkpShape *m_shape;      // 10
    char pad14[4];
    hkMotionState *m_motionState; // 18
    char pad1c[0x21 - 0x1c];
    unsigned char m_forceCollideOntoPpu; // 21
    char pad22[0x2a - 0x22];
    unsigned char m_objectQualityType;   // 2a
    char pad2b;
    unsigned int m_collisionFilterInfo;  // 2c
    char pad30[0x5c - 0x30];
    float m_allowedPenetrationDepth;     // 5c
    char pad60[0x8c - 0x60];
    unsigned char m_responseType;        // 8c
    char pad8d[3];
    float m_friction, m_restitution;     // 90 94
    char pad98[0xaa - 0x98];
    unsigned short m_contactPointCallbackDelay; // aa
    char padac[0xd0 - 0xac];
    unsigned char m_autoRemoveLevel;     // d0
    unsigned char m_numShapeKeysInContactPointProperties; // d1
    unsigned char m_responseModifierFlags; // d2
    char padd3;
    unsigned int m_uid;                  // d4
    char padd8[0xe0 - 0xd8];
    hkpMotion m_motion;                  // e0
    RefPtr<hkLocalFrame> m_localFrame;   // 210
};
static HK_FORCE_INLINE void *rigidBodyVtable() { union { void *v; char b[sizeof(hkpRigidBody)]; } u; hkFinishLoadedObjectFlag f; new (u.b) hkpRigidBody(f); return u.v; }
extern "C" hkpRigidBody *fn_82D8C258(hkpRigidBody *self, const hkpRigidBodyCinfo &info)
{
    ((hkpEntity *)self)->hkpEntity::hkpEntity(info.m_shape);
    *(void **)self = rigidBodyVtable();
    self->m_responseType = info.m_collisionResponse;
    self->m_contactPointCallbackDelay = info.m_contactPointCallbackDelay;
    self->m_collisionFilterInfo = info.m_collisionFilterInfo;
    if (info.m_localFrame) {
        self->m_localFrame = info.m_localFrame;
        self->m_localFrame->addReference();
    }
    float depth;
    if (info.m_motionType == 5) {
        void *mem = &self->m_motion;
        hkpFixedRigidMotion *fm = mem ? new (mem) hkpFixedRigidMotion(info.m_position, info.m_rotation) : 0;
        fm->m_motionState.m_maxLinearVelocity = info.m_maxLinearVelocity;
        fm->m_motionState.m_maxAngularVelocity = info.m_maxAngularVelocity;
        fn_82D93120(fm, 1);
        self->m_motionState = &self->getRigidMotion()->m_motionState;
        depth = info.m_allowedPenetrationDepth;
        if (depth <= 0.0f) depth = lbl_82134508;
    } else {
        fn_82D8B4B8(info.m_motionType, info.m_position, info.m_rotation, info.m_mass, info.m_inertiaTensor, info.m_centerOfMass, info.m_maxLinearVelocity, info.m_maxAngularVelocity, self->getRigidMotion());
        fn_82D93120(self->getRigidMotion(), info.m_solverDeactivation);
        self->setLinearVelocity(info.m_linearVelocity);
        self->setAngularVelocity(info.m_angularVelocity);
        self->m_motionState = &self->getRigidMotion()->m_motionState;
        depth = info.m_allowedPenetrationDepth;
    }
    self->m_allowedPenetrationDepth = depth;
    if (info.m_enableDeactivation) {
        hkpWorld *w = self->m_world;
        if (w) fn_82D8B2F8(self->getRigidMotion(), 1, self->m_uid, w->m_c305, w->m_c306, w->m_c307);
        else fn_82D8B2F8(self->getRigidMotion(), 1, self->m_uid, 0, 0, 0);
    } else {
        fn_82D8B2F8(self->getRigidMotion(), 0, 0, 0, 0, 0);
    }
    self->getRigidMotion()->m_motionState.m_linearDamping = info.m_linearDamping;
    self->getRigidMotion()->m_motionState.m_angularDamping = info.m_angularDamping;
    if ((int)self->m_shape != 0) {
        hkVector4 extents;
        fn_82D8B400(self, self->m_shape, &extents);
        if (self->m_allowedPenetrationDepth <= 0.0f) {
            float m = min2(min2(extents.v[0], extents.v[1]), extents.v[2]);
            if (m < lbl_82002C5C) self->m_allowedPenetrationDepth = m * 0.2f;
            else self->m_allowedPenetrationDepth = 0.1f;
        }
    }
    if (info.m_qualityType == 255) {
        if (self->m_motion.m_type == 5) self->m_objectQualityType = 0;
        else if (info.m_motionType == 4) self->m_objectQualityType = 1;
        else self->m_objectQualityType = 2;
    } else self->m_objectQualityType = info.m_qualityType;
    self->m_autoRemoveLevel = info.m_autoRemoveLevel;
    if (info.m_forceCollideOntoPpu) self->m_forceCollideOntoPpu |= 1;
    self->m_friction = info.m_friction;
    self->m_restitution = info.m_restitution;
    self->getRigidMotion()->m_motionState.m_gravityFactor = info.m_gravityFactor;
    if (info.m_numShapeKeysInContactPointProperties >= 0) self->m_numShapeKeysInContactPointProperties = info.m_numShapeKeysInContactPointProperties;
    else self->m_numShapeKeysInContactPointProperties = fn_83095E98(info.m_shape);
    self->m_responseModifierFlags = info.m_responseModifierFlags;
    return self;
}
