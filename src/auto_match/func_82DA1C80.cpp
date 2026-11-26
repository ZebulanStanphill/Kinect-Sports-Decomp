// hkpPulleyConstraintData::hkpPulleyConstraintData() (Physics/Dynamics/Constraint/Pulley/
// hkpPulleyConstraintData.cpp), /O2 /QVMXReserve (flag file). It keeps its fn_ name (the constructor
// body runs through MSVC's explicit self->C::C() call, which has no placement-new null check).
// The atoms' constructors store their types (3 = SET_LOCAL_TRANSLATIONS, 20 = PULLEY); the body zeroes
// the four pivots and sets the rope length 0.0f and the leverage 1.0f. Both floats are literals.
#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpConstraintAtom.h"
#include "havok/hkpConstraintData.h"

// The game's 1.0f keeps its lbl_ name (see above).

struct hkpSetLocalTranslationsConstraintAtom : public hkpConstraintAtom {
    hkpSetLocalTranslationsConstraintAtom() : hkpConstraintAtom(TYPE_SET_LOCAL_TRANSLATIONS) {}
    hkVector4 m_translationA;   // +0x10
    hkVector4 m_translationB;   // +0x20
};

struct hkpPulleyConstraintAtom : public hkpConstraintAtom {
    hkpPulleyConstraintAtom() : hkpConstraintAtom(TYPE_PULLEY) {}
    hkVector4 m_fixedPivotAinWorld;   // +0x10
    hkVector4 m_fixedPivotBinWorld;   // +0x20
    hkReal m_ropeLength;              // +0x30
    hkReal m_leverageOnBodyB;         // +0x34
};

class hkpPulleyConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    HK_FORCE_INLINE hkpPulleyConstraintData()
    {
        m_atoms.m_translations.m_translationA.setZero4();
        m_atoms.m_translations.m_translationB.setZero4();
        m_atoms.m_pulley.m_fixedPivotAinWorld.setZero4();
        m_atoms.m_pulley.m_fixedPivotBinWorld.setZero4();
        m_atoms.m_pulley.m_ropeLength = 0.0f;
        m_atoms.m_pulley.m_leverageOnBodyB = 1.0f;
    }

    struct Atoms {
        hkpSetLocalTranslationsConstraintAtom m_translations;   // +0x10
        hkpPulleyConstraintAtom m_pulley;                       // +0x40
    };
    Atoms m_atoms;   // +0x10
};

extern "C" hkpPulleyConstraintData *fn_82DA1C80(hkpPulleyConstraintData *self)
{
    self->hkpPulleyConstraintData::hkpPulleyConstraintData();
    return self;
}
