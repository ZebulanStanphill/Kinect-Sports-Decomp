// hkpMalleableConstraintData::hkpMalleableConstraintData(hkpConstraintData *) (Physics/Dynamics/Constraint/Malleable/hkpMalleableConstraintData.cpp). The strength is the literal 0.01f; the game's copy is lbl_82021544, so this matches only with it named __real@3c23d70a (a load of an extern constant cannot move above the stores).
#include "havok/hkBase.h"

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

// hkpConstraintData (Physics/Dynamics/Constraint/hkpConstraintData.h): hkReferencedObject + m_userData.
// The virtuals are declared up to getRuntimeInfo (slot 9, +0x24), as the game's vtables have them.
class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    struct RuntimeInfo {
        int m_sizeOfExternalRuntime;
        int m_numSolverResults;
    };
    hkpConstraintData() : m_userData(0) {}

    virtual void setMaxLinearImpulse(hkReal maxImpulse);   // +0xC
    virtual hkReal getMaxLinearImpulse() const;            // +0x10
    virtual void setBodyToNotify(int bodyIdx);             // +0x14
    virtual hkUint8 getNotifiedBodyIndex() const;          // +0x18
    virtual hkBool isValid() const;                        // +0x1C
    virtual int getType() const;                           // +0x20
    virtual void getRuntimeInfo(hkBool wantRuntime, RuntimeInfo &infoOut) const;   // +0x24

    hkUlong m_userData;   // +0x8
};



class hkpMalleableConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpMalleableConstraintData(hkpConstraintData *constraintData);

    hkpConstraintData *m_constraintData;   // +0xC
    hkpBridgeAtoms m_atoms;                // +0x10
    hkReal m_strength;                     // +0x1C
};

hkpMalleableConstraintData::hkpMalleableConstraintData(hkpConstraintData *constraintData)
    : m_constraintData(constraintData), m_strength(0.01f)
{
    m_constraintData->addReference();
    m_atoms.m_bridgeAtom.init(this);
}
