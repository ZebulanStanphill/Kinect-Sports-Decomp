// hkpPulleyConstraintData::hkpPulleyConstraintData() (Physics/Dynamics/Constraint/Pulley/
// hkpPulleyConstraintData.cpp), /O2 /QVMXReserve (flag file). It keeps its fn_ name (the constructor
// body runs through MSVC's explicit self->C::C() call, which has no placement-new null check).
// The atoms' constructors store their types (3 = SET_LOCAL_TRANSLATIONS, 20 = PULLEY); the body zeroes
// the four pivots and sets the rope length 0.0f and the leverage 1.0f. Both floats are literals: the
// game's 1.0f is lbl_82002AE0 (the linker merged __real@3f800000 into it, and Matching units reference
// it), so it is a static constant with that name; a plain extern is reloaded after the stores.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
extern "C" __vector4 __vxor(__vector4 a, __vector4 b);

// The game's 1.0f keeps its lbl_ name (see above).
static const float lbl_82002AE0 = 1.0f;

class hkVector4 {
public:
    HK_FORCE_INLINE void setZero4() { m_quad = __vxor(m_quad, m_quad); }
    __vector4 m_quad;
};

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintData() : m_userData(0) {}
    hkUlong m_userData;   // +0x8
};

struct hkpConstraintAtom {
    enum AtomType {
        TYPE_SET_LOCAL_TRANSLATIONS = 3,
        TYPE_PULLEY = 20
    };
    hkpConstraintAtom(AtomType type) : m_type(hkUint16(type)) {}
    hkUint16 m_type;
};

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
        m_atoms.m_pulley.m_leverageOnBodyB = lbl_82002AE0;
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
