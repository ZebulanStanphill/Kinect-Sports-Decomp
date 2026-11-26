// hkpBallAndSocketConstraintData::hkpBallAndSocketConstraintData()
// (Physics/Dynamics/Constraint/Bilateral/BallAndSocket/hkpBallAndSocketConstraintData.cpp), /O2 /QVMXReserve.
// The atoms' constructors set the atom types and the ball-socket defaults, then the body zeroes both pivots.
// It keeps its fn_ name (func_82DBEF20, a clone function a C unit can match, calls it), so the constructor is
// inline and run by MSVC's explicit constructor call (placement new would add a null check).
// The 1.0f is a literal in the original (its load is scheduled above the base stores and copied to a temporary
// for hkUFloat8's const hkReal &).
#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpConstraintAtom.h"
#include "havok/hkpConstraintData.h"

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

struct hkpSetLocalTranslationsConstraintAtom : public hkpConstraintAtom {
    hkpSetLocalTranslationsConstraintAtom() : hkpConstraintAtom(TYPE_SET_LOCAL_TRANSLATIONS) {}
    hkVector4 m_translationA;   // +0x10
    hkVector4 m_translationB;   // +0x20
};

struct hkpBallSocketConstraintAtom : public hkpConstraintAtom {
    hkpBallSocketConstraintAtom()
        : hkpConstraintAtom(TYPE_BALL_SOCKET), m_bodiesToNotify(0), m_velocityStabilizationFactor(1.0f),
          m_maxImpulse(3.40282e+38f) {}
    hkUint8 m_bodiesToNotify;                  // +0x2
    hkUFloat8 m_velocityStabilizationFactor;   // +0x3
    hkReal m_maxImpulse;                       // +0x4
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
