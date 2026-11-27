// hkpConstraintData::getSolverResults(hkpConstraintRuntime *) (Physics/Dynamics/Constraint/hkpConstraintData.cpp):
// slot +0x28 of the constraint datas' vtables (every class but hkpPoweredChainData and
// hkpSimpleContactConstraintData inherits it). The runtime starts with the solver results.
#include "havok/hkpConstraintData.h"

hkpSolverResults *hkpConstraintData::getSolverResults(hkpConstraintRuntime *runtime)
{
    return reinterpret_cast<hkpSolverResults *>(runtime);
}
