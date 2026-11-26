// hkpMalleableConstraintData::hkpMalleableConstraintData(hkFinishLoadedObjectFlag) (Physics/Dynamics/Constraint/Malleable/hkpMalleableConstraintData.cpp). The bridge atom's finish constructor re-inits it with its stored pointer, then the class points it at itself. It keeps its fn_ name (a Matching getVtable unit calls it), so it is defined inline and expanded below.
#include "havok/hkBase.h"
#include "havok/hkpMalleableConstraintData.h"

extern "C" hkpMalleableConstraintData *fn_82D98B10(hkpMalleableConstraintData *self, hkFinishLoadedObjectFlag f)
{
    self->hkpMalleableConstraintData::hkpMalleableConstraintData(f);
    return self;
}
