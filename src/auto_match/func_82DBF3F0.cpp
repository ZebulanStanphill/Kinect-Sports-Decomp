// hkpRagdollLimitsData clone: allocates a new hkpRagdollLimitsData (class allocator, out-of-line constructor) and copies its
// atoms (0xac bytes at +0x10, up to the end of m_planesLimit) with hkString::memCpy. Havok code: /O2.
#include "havok/hkBase.h"
#include "havok/hkpRagdollLimitsData.h"

extern "C" hkpRagdollLimitsData *fn_82DBF3F0(const hkpRagdollLimitsData *self)
{
    hkpRagdollLimitsData *copy = new hkpRagdollLimitsData();
    hkString::memCpy(&copy->m_atoms, &self->m_atoms, 172);
    return copy;
}
