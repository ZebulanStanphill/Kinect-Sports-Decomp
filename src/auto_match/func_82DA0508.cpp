// hkpPointToPathConstraintData::hkpPointToPathConstraintData() (Physics/Dynamics/Constraint/Bilateral/
// PointToPath/hkpPointToPathConstraintData.cpp), /O2 /QVMXReserve. hkpBridgeConstraintAtom::init
// (fn_82D9FE70) is out of line and keeps its fn_ name.
#include "havok/hkBase.h"
#include "havok/hkTransform.h"

// The game's 1.0f keeps its lbl_ name (Matching units reference it).

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintData() : m_userData(0) {}
    hkUlong m_userData;   // +0x8
};

class hkpParametricCurve;

// hkEnum (Common/Base/Types/hkBaseTypes.h): an enum stored in a smaller integer. Initialising the member
// through its constructor (rather than a plain hkInt8) is what makes the scheduling match.
template <typename ENUM, typename STORAGE>
class hkEnum {
public:
    HK_FORCE_INLINE hkEnum() {}
    HK_FORCE_INLINE hkEnum(ENUM e) { m_storage = static_cast<STORAGE>(e); }
    HK_FORCE_INLINE void operator=(ENUM e) { m_storage = static_cast<STORAGE>(e); }
    HK_FORCE_INLINE ENUM get() const { return static_cast<ENUM>(m_storage); }
    STORAGE m_storage;
};

struct hkpConstraintAtom {
    enum AtomType { TYPE_INVALID, TYPE_BRIDGE };
    HK_FORCE_INLINE hkpConstraintAtom(AtomType type) : m_type(hkUint16(type)) {}
    hkUint16 m_type;
};

struct hkpBridgeConstraintAtom;
extern "C" void fn_82D9FE70(hkpBridgeConstraintAtom *self, hkpConstraintData *data);   // hkpBridgeConstraintAtom::init

struct hkpBridgeConstraintAtom : public hkpConstraintAtom {
    HK_FORCE_INLINE hkpBridgeConstraintAtom() : hkpConstraintAtom(TYPE_BRIDGE) {}
    HK_FORCE_INLINE void init(hkpConstraintData *constraintData) { fn_82D9FE70(this, constraintData); }
    void *m_buildJacobianFunc;            // +0x4
    hkpConstraintData *m_constraintData;  // +0x8
};

struct hkpBridgeAtoms {
    HK_FORCE_INLINE hkpBridgeAtoms() {}
    hkpBridgeConstraintAtom m_bridgeAtom;
};

class hkpPointToPathConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    enum OrientationConstraintType {
        CONSTRAIN_ORIENTATION_INVALID,
        CONSTRAIN_ORIENTATION_NONE,
        CONSTRAIN_ORIENTATION_ALLOW_SPIN,
        CONSTRAIN_ORIENTATION_TO_PATH,
        CONSTRAIN_ORIENTATION_MAX_ID
    };
    hkpPointToPathConstraintData();

    hkpBridgeAtoms m_atoms;                 // +0xC
    hkpParametricCurve *m_path;             // +0x18
    hkReal m_maxFrictionForce;              // +0x1C
    hkEnum<OrientationConstraintType, hkInt8> m_angularConstrainedDOF;   // +0x20
    hkTransform m_transform_OS_KS[2];       // +0x30
};

hkpPointToPathConstraintData::hkpPointToPathConstraintData()
    : m_path(HK_NULL),
      m_maxFrictionForce(0.0f),
      m_angularConstrainedDOF(OrientationConstraintType(CONSTRAIN_ORIENTATION_NONE))
{
    m_transform_OS_KS[0].setIdentity();
    m_transform_OS_KS[1].setIdentity();
    m_atoms.m_bridgeAtom.init(this);
}
