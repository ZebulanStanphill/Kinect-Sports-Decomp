// Game code: constructor of the game's actuator action (vtable lbl_821CA858, 0x150 bytes), an
// hkpUnaryAction on an entity that drives a linear and an angular target and owns an hkpAabbPhantom
// around the entity's shape. Its own name is unknown, so it stays fn_82603640: the base constructor
// (??0hkpUnaryAction@@QAA@PAVhkpEntity@@K@Z) is run with an explicit constructor call (placement new
// would add a null check) and the vtable is stored by hand.
// /O1 /QVMXReserve: the game keeps constant vectors in reserved VMX registers (v77 zero, v75, v65 the
// sign mask), read with __VMXGetReg; each read is a separate value (two negations, vor copies).
// The game's 0.0f (lbl_821CC160) is a static constant so that it is loaded once; 1.0f is
// lbl_821CA45C[1] (selectany, as in func_825BCDA8.cpp).
#include "havok/hkpShape.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" {
__vector4 __VMXGetReg(int n);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vcmpgtfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
}

static const float lbl_821CC160 = 0.0f;   // the game's 0.0f

class hkVector4 {
public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    hkQuadReal m_quad;
};
class hkRotation {
public:
    hkVector4 m_col0, m_col1, m_col2;
};
class hkTransform {
public:
    hkRotation m_rotation;
    hkVector4 m_translation;
};
class hkAabb {
public:
    hkVector4 m_min;
    hkVector4 m_max;
};

class hkpEntity {
public:
    char m_pad0[0x10];
    const hkpShape *m_shape;          // +0x10 m_collidable.m_shape
    char m_pad14[0x18];
    hkUint32 m_collisionFilterInfo;   // +0x2c m_collidable's collision filter info
};

class hkpAabbPhantom : public hkReferencedObject {
public:
    char m_pad8[0xd8];
};

extern "C" {
__declspec(selectany) extern const float lbl_821CA45C[2] = {1.0f, 1.0f};
extern void *lbl_821CA858[];              // the actuator's vtable
extern const hkVector4 lbl_82196750;      // (0, 0, 0, 1): the identity quaternion
extern const hkVector4 lbl_821962C0;      // (0, 0, 0, 0)
extern float lbl_821917A8[];
void fn_82CED628(void *self, const char *s);                       // hkStringPtr::operator=(const char *)
void fn_82CE6010(hkRotation *self, const hkVector4 *q);            // hkRotation::set(const hkQuaternion &)
hkpAabbPhantom *fn_82D8D6C0(hkpAabbPhantom *self, const hkAabb *aabb, hkUint32 filterInfo);   // hkpAabbPhantom()
}

class hkpUnaryAction : public hkReferencedObject {
public:
    hkpUnaryAction(hkpEntity *entity, hkUlong userData);
    char m_pad8[0x14];   // m_world, m_island, m_userData, m_name (+0x14), m_entity (+0x18)
};

struct ActuatorParams {
    float m_0;
    float m_4;
    float m_timeConstant;        // +0x8
    float m_invTimeConstant2;    // +0xc
    float m_invTimeConstant;     // +0x10
};

static HK_FORCE_INLINE __vector4 negate(const hkVector4 &v) { return __vxor(v.m_quad, __VMXGetReg(65)); }

class Actuator : public hkpUnaryAction {
public:
    HK_FORCE_INLINE void deactivate()
    {
        m_active = 0;
        m_120 = 0;
        fn_82CED628((char *)this + 0x14, "Actuator (disabled)");
    }
    hkVector4 m_linearTarget;          // +0x20
    hkVector4 m_30;
    hkVector4 m_40;
    hkVector4 m_50;
    hkVector4 m_linearCurrent;         // +0x60
    hkVector4 m_70;
    ActuatorParams m_linearParams;     // +0x80
    hkVector4 m_angularTarget;         // +0xa0
    hkVector4 m_b0;
    hkVector4 m_c0;
    hkVector4 m_d0;
    hkVector4 m_angularCurrent;        // +0xe0
    ActuatorParams m_angularParams;    // +0xf0
    int m_active;                      // +0x104
    int m_108;
    int m_linearEnabled;               // +0x10c
    int m_angularEnabled;              // +0x110
    int m_114;
    int m_118;
    int m_savedFilterInfo;             // +0x11c
    int m_120;
    hkVector4 m_halfExtents;           // +0x130
    hkpAabbPhantom *m_phantom;         // +0x140
};

extern "C" Actuator *fn_82603640(Actuator *self, hkpEntity *entity)
{
    self->hkpUnaryAction::hkpUnaryAction(entity, 0);
    *(void ***)self = lbl_821CA858;
    self->m_linearParams.m_0 = lbl_821CA45C[1];
    self->m_linearParams.m_4 = lbl_821CA45C[1];
    self->m_linearParams.m_timeConstant = lbl_821CC160;
    self->m_linearParams.m_invTimeConstant = lbl_821CC160;
    self->m_linearParams.m_invTimeConstant2 = lbl_821CC160;
    self->m_angularParams = self->m_linearParams;
    self->deactivate();
    self->m_108 = 0;
    self->m_114 = 0;
    self->m_118 = 0;
    self->m_angularEnabled = 1;
    self->m_linearEnabled = 1;
    self->m_120 = 0;
    self->m_linearTarget.m_quad = __VMXGetReg(77);
    self->m_angularTarget = lbl_82196750;
    self->m_30.m_quad = __VMXGetReg(77);
    self->m_b0.m_quad = __VMXGetReg(77);
    self->m_70.m_quad = __VMXGetReg(75);
    self->m_40.m_quad = __VMXGetReg(77);
    self->m_c0.m_quad = __VMXGetReg(77);
    self->m_50.m_quad = __VMXGetReg(77);
    self->m_d0.m_quad = __VMXGetReg(77);
    self->m_linearCurrent.m_quad = __VMXGetReg(77);
    self->m_angularCurrent.m_quad = __VMXGetReg(77);
    self->m_linearTarget.m_quad = __VMXGetReg(77);
    self->m_angularTarget = lbl_82196750;

    hkTransform t;
    t.m_translation = lbl_821962C0;
    fn_82CE6010(&t.m_rotation, &lbl_82196750);
    hkAabb aabb;
    entity->m_shape->getAabb(t, lbl_821917A8[0x2c / 4], aabb);
    __vector4 negMin = negate(aabb.m_min);
    self->m_halfExtents.m_quad = __vsel(aabb.m_max.m_quad, negate(aabb.m_min), __vcmpgtfp(aabb.m_max.m_quad, negMin));
    hkpAabbPhantom *phantom = (hkpAabbPhantom *)hkpAabbPhantom::operator new(sizeof(hkpAabbPhantom));
    self->m_phantom = fn_82D8D6C0(phantom, &aabb, entity->m_collisionFilterInfo);
    return self;
}
