// hkpBallAndSocketConstraintData::hkpBallAndSocketConstraintData()
// (Physics/Dynamics/Constraint/Bilateral/BallAndSocket/hkpBallAndSocketConstraintData.cpp), /O2 /QVMXReserve.
// The atoms' constructors set the atom types and the ball-socket defaults, then the body zeroes both pivots.
// It keeps its fn_ name (func_82DBEF20, a clone function a C unit can match, calls it), so the constructor is
// inline and run by MSVC's explicit constructor call (placement new would add a null check).
// The 1.0f is a literal in the original (its load is scheduled above the base stores and copied to a temporary
// for hkUFloat8's const hkReal &); the game's copy is lbl_82002AE0, which Matching units reference, so it is a
// static constant with that name.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" __vector4 __vxor(__vector4 a, __vector4 b);

static const float lbl_82002AE0 = 1.0f;   // the game's 1.0f (Matching units reference it)
extern "C" const float lbl_82134508;      // HK_REAL_MAX

class hkVector4 {
public:
    HK_FORCE_INLINE void setZero4() { m_quad = __vxor(m_quad, m_quad); }
    hkQuadReal m_quad;
};

class hkUFloat8;
// hkUFloat8::operator=(const hkReal &) is out of line.
extern "C" void fn_82CE5458(hkUFloat8 *self, const hkReal &f);

// hkUFloat8 (Common/Base/Types/hkBaseTypes.h): an 8-bit unsigned float.
class hkUFloat8 {
public:
    HK_FORCE_INLINE hkUFloat8(const hkReal &f) { *this = f; }
    HK_FORCE_INLINE hkUFloat8 &operator=(const hkReal &f)
    {
        fn_82CE5458(this, f);
        return *this;
    }
    hkUint8 m_value;
};

// hkpConstraintAtom (Physics/ConstraintSolver/Constraint/Atom/hkpConstraintAtom.h).
struct hkpConstraintAtom {
    enum AtomType {
        TYPE_INVALID = 0,
        TYPE_BRIDGE = 1,
        TYPE_SET_LOCAL_TRANSFORMS = 2,
        TYPE_SET_LOCAL_TRANSLATIONS = 3,
        TYPE_SET_LOCAL_ROTATIONS = 4,
        TYPE_BALL_SOCKET = 5
    };
    hkpConstraintAtom(AtomType type) : m_type(hkUint16(type)) {}
    hkUint16 m_type;   // +0x0  hkEnum<AtomType, hkUint16>
};

struct hkpSetLocalTranslationsConstraintAtom : public hkpConstraintAtom {
    hkpSetLocalTranslationsConstraintAtom() : hkpConstraintAtom(TYPE_SET_LOCAL_TRANSLATIONS) {}
    hkVector4 m_translationA;   // +0x10
    hkVector4 m_translationB;   // +0x20
};

struct hkpBallSocketConstraintAtom : public hkpConstraintAtom {
    hkpBallSocketConstraintAtom()
        : hkpConstraintAtom(TYPE_BALL_SOCKET), m_bodiesToNotify(0), m_velocityStabilizationFactor(+lbl_82002AE0),
          m_maxImpulse(lbl_82134508) {}
    hkUint8 m_bodiesToNotify;                  // +0x2
    hkUFloat8 m_velocityStabilizationFactor;   // +0x3
    hkReal m_maxImpulse;                       // +0x4
};

// hkpConstraintData (Physics/Dynamics/Constraint/hkpConstraintData.h): hkReferencedObject + m_userData.
class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintData() : m_userData(0) {}
    virtual void setMaxLinearImpulse(hkReal maxImpulse);   // +0xC
    hkUlong m_userData;   // +0x8
};

class hkpBallAndSocketConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    HK_FORCE_INLINE hkpBallAndSocketConstraintData()
    {
        m_atoms.m_pivots.m_translationA.setZero4();
        m_atoms.m_pivots.m_translationB.setZero4();
    }
    virtual void setMaxLinearImpulse(hkReal maxImpulse);

    struct Atoms {
        Atoms() {}
        hkpSetLocalTranslationsConstraintAtom m_pivots;   // +0x10
        hkpBallSocketConstraintAtom m_ballSocket;         // +0x40
    };
    Atoms m_atoms;   // +0x10
};

extern "C" hkpBallAndSocketConstraintData *fn_82D96728(hkpBallAndSocketConstraintData *self)
{
    self->hkpBallAndSocketConstraintData::hkpBallAndSocketConstraintData();
    return self;
}
