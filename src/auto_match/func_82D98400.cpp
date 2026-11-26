// hkpBreakableConstraintData::hkpBreakableConstraintData(hkFinishLoadedObjectFlag) (Physics/Dynamics/Constraint/Breakable/hkpBreakableConstraintData.cpp). The bridge atom's finish constructor re-inits it with its stored pointer, then the class points it at itself. It keeps its fn_ name (the Matching getVtable unit func_82D7E6A0 calls it), so it is defined inline and expanded below.
#include "havok/hkBase.h"
#include "havok/hkpConstraintAtom.h"
#include "havok/hkpConstraintData.h"

class hkpBreakableConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpBreakableConstraintData(hkFinishLoadedObjectFlag f) : hkpConstraintData(f), m_atoms(f)
    {
        if (f.m_finishing)
            m_atoms.m_bridgeAtom.init(this);
    }
    virtual ~hkpBreakableConstraintData();

    hkpBridgeAtoms m_atoms;               // +0xC
    hkpConstraintData *m_constraintData;  // +0x18
};

extern "C" hkpBreakableConstraintData *fn_82D98400(hkpBreakableConstraintData *self, hkFinishLoadedObjectFlag f)
{
    self->hkpBreakableConstraintData::hkpBreakableConstraintData(f);
    return self;
}
