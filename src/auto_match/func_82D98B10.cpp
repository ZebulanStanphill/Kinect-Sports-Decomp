// hkpMalleableConstraintData::hkpMalleableConstraintData(hkFinishLoadedObjectFlag) (Physics/Dynamics/Constraint/Malleable/hkpMalleableConstraintData.cpp). The bridge atom's finish constructor re-inits it with its stored pointer, then the class points it at itself. It keeps its fn_ name (a Matching getVtable unit calls it), so it is defined inline and expanded below.
#include "havok/hkBase.h"
#include "havok/hkpConstraintAtom.h"
#include "havok/hkpConstraintData.h"

class hkpMalleableConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpMalleableConstraintData(hkFinishLoadedObjectFlag f) : hkpConstraintData(f), m_atoms(f)
    {
        if (f.m_finishing)
            m_atoms.m_bridgeAtom.init(this);
    }
    virtual ~hkpMalleableConstraintData();
    hkpConstraintData *m_constraintData;   // +0xC
    hkpBridgeAtoms m_atoms;
};

extern "C" hkpMalleableConstraintData *fn_82D98B10(hkpMalleableConstraintData *self, hkFinishLoadedObjectFlag f)
{
    self->hkpMalleableConstraintData::hkpMalleableConstraintData(f);
    return self;
}
