// hkpMotorAction::hkpMotorAction(hkpRigidBody *body, const hkVector4 &axis, hkReal spinRate, hkReal gain)
// (Havok 2010, Physics/Utilities/Actions/Motor/hkpMotorAction.cpp). Havok code, /O2 /QVMXReserve.
// It keeps its fn_ name (the NonMatching C unit func_82DF1F20 calls it).
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" {
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vmsum4fp(__vector4, __vector4);
__vector4 __vrsqrtefp(__vector4);
__vector4 __vnmsubfp(__vector4, __vector4, __vector4);
__vector4 __vmaddfp(__vector4, __vector4, __vector4);
__vector4 __vcmpeqfp(__vector4, __vector4);
__vector4 __vsel(__vector4, __vector4, __vector4);
__vector4 __vspltisw(int);
__vector4 __vspltw(__vector4, unsigned int);
}

// Havok's global vector of four 0.5s at 0x82132D70, in its table of vector constants. It is a named
// object, not a compiler constant: a `const __vector4` literal is materialised later (77.98%).
extern "C" const hkQuadReal lbl_82132D70;
class hkVector4 {
public:
    HK_FORCE_INLINE hkVector4() {}
    HK_FORCE_INLINE hkVector4(const hkVector4 &v) { m_quad = v.m_quad; }
    HK_FORCE_INLINE void normalize4()
    {
        const hkQuadReal zero = __vspltisw(0);
        const hkQuadReal len2 = __vmsum4fp(m_quad, m_quad);
        hkQuadReal e = __vrsqrtefp(len2);
        const hkQuadReal halfLen2 = __vmulfp(len2, lbl_82132D70);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vsel(e, zero, __vcmpeqfp(zero, len2));
        m_quad = __vmulfp(m_quad, __vspltw(e, 0));
    }
    hkQuadReal m_quad;
};

class hkpWorld;
class hkpSimulationIsland;
class hkpEntity;
class hkpRigidBody;

class hkpAction : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ACTION);
    hkpWorld *m_world;               // +0x8
    hkpSimulationIsland *m_island;   // +0xC
    hkUlong m_userData;              // +0x10
    hkStringPtr m_name;              // +0x14
};

class hkpUnaryAction : public hkpAction {
public:
    hkpUnaryAction(hkpEntity *entity = HK_NULL, hkUlong userData = 0);   // ??0hkpUnaryAction@@QAA@PAVhkpEntity@@K@Z
    hkpEntity *m_entity;   // +0x18
};

class hkpMotorAction : public hkpUnaryAction {
public:
    hkpMotorAction(hkpRigidBody *body, const hkVector4 &axis, hkReal spinRate, hkReal gain);
    virtual ~hkpMotorAction();

    hkVector4 m_axis;      // +0x20
    hkReal m_spinRate;     // +0x30
    hkReal m_gain;         // +0x34
    hkBool m_active;       // +0x38
};

HK_FORCE_INLINE hkpMotorAction::hkpMotorAction(hkpRigidBody *body, const hkVector4 &axis, hkReal spinRate, hkReal gain)
    : hkpUnaryAction((hkpEntity *)body), m_axis(axis), m_spinRate(spinRate), m_gain(gain), m_active(true)
{
    m_axis.normalize4();
}

extern "C" hkpMotorAction *fn_82DF1E50(hkpMotorAction *self, hkpRigidBody *body, const hkVector4 &axis, hkReal spinRate, hkReal gain)
{
    self->hkpMotorAction::hkpMotorAction(body, axis, spinRate, gain);
    return self;
}
