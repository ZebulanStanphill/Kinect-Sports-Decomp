// hkpRagdollLimitsData::getRuntimeInfo(hkBool, RuntimeInfo &) const: slot +0x24 of ??_7hkpRagdollLimitsData@@6B@.
// Always 0x1C bytes of runtime for three solver results, whether the runtime is wanted or not.
#include "havok/hkpRagdollLimitsData.h"

void hkpRagdollLimitsData::getRuntimeInfo(hkBool wantRuntime, RuntimeInfo &infoOut) const
{
    infoOut.m_numSolverResults = 3;
    infoOut.m_sizeOfExternalRuntime = 0x1C;
}
