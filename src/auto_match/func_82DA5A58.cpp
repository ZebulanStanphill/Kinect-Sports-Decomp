// hkpStiffSpringChainData::hkpStiffSpringChainData()
// (Physics/Dynamics/Constraint/Chain/StiffSpring/hkpStiffSpringChainData.cpp): the bases
// (hkpConstraintData's m_userData, the reference count), the bridge atom's type, the empty
// m_infos array, then the body sets tau, damping and cfm and initialises the bridge atom.
//
// The original uses literals, whose loads the compiler schedules above the base stores.
// 0.6f and 0.1f * HK_REAL_EPSILON have only non-Matching references and are renamed to their
// __real@ names; 1.0f is the game's lbl_82002AE0, which Matching C units reference, so it is
// declared here as a known constant (as in func_83096D00.cpp).
#include "havok/hkBase.h"

#define HK_REAL_EPSILON 1.192092896e-07f

extern "C" __declspec(selectany) const float lbl_82002AE0 = 1.0f;

class hkpConstraintData;

// hkpBridgeConstraintAtom::init(hkpConstraintData *) is out of line (sets m_buildJacobianFunc and
// m_constraintData); it keeps its fn_ name because a Matching C unit defines it.
extern "C" void fn_82D9FE70(void *self, hkpConstraintData *data);

// hkpConstraintAtom (Physics/ConstraintSolver/Constraint/Atom/hkpConstraintAtom.h).
struct hkpConstraintAtom {
    enum AtomType {
        TYPE_INVALID = 0,
        TYPE_BRIDGE = 1
    };
    hkpConstraintAtom(AtomType type) : m_type(hkUint16(type)) {}
    hkUint16 m_type;   // +0x0  hkEnum<AtomType, hkUint16>
};

struct hkpBridgeConstraintAtom : public hkpConstraintAtom {
    hkpBridgeConstraintAtom() : hkpConstraintAtom(TYPE_BRIDGE) {}
    void init(hkpConstraintData *constraintData) { fn_82D9FE70(this, constraintData); }

    void *m_buildJacobianFunc;           // +0x4
    hkpConstraintData *m_constraintData; // +0x8
};

struct hkpBridgeAtoms {
    hkpBridgeAtoms() {}
    hkpBridgeConstraintAtom m_bridgeAtom;
};

class hkVector4 {
public:
    hkReal x, y, z, w;
};

// hkpConstraintData (Physics/Dynamics/Constraint/hkpConstraintData.h): hkReferencedObject + m_userData.
class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintData() : m_userData(0) {}

    hkUlong m_userData;   // +0x8
};

class hkpConstraintChainData : public hkpConstraintData {
};

class hkpStiffSpringChainData : public hkpConstraintChainData {
public:
    hkpStiffSpringChainData();

    struct ConstraintInfo {
        hkVector4 m_pivotInA;
        hkVector4 m_pivotInB;
        hkReal m_springLength;
        hkReal m_pad[3];
    };

    hkpBridgeAtoms m_atoms;          // +0xC
    hkArray<ConstraintInfo> m_infos; // +0x18
    hkReal m_tau;                    // +0x24
    hkReal m_damping;                // +0x28
    hkReal m_cfm;                    // +0x2C
};

hkpStiffSpringChainData::hkpStiffSpringChainData()
{
    m_tau = 0.6f;
    m_damping = lbl_82002AE0;
    m_cfm = 0.1f * HK_REAL_EPSILON;
    m_atoms.m_bridgeAtom.init(this);
}
