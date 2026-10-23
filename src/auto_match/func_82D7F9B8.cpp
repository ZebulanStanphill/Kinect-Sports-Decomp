// finishLoadedObjecthkpRagdollLimitsData: hkpRagdollLimitsData's hkTypeInfo finish function (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
// The finish constructor re-applies the cone limit's stabilization when finishing: if the atom's flag
// (+0x9A) is set it calls setConeLimitStabilization(true) (fn_82DA1EA8, out of line, keeps its fn_ name;
// the hkBool argument is built in a stack temporary).
#include "havok/hkBase.h"

class hkpRagdollLimitsData;
extern "C" void fn_82DA1EA8(hkpRagdollLimitsData *self, hkBool enable);   // hkpRagdollLimitsData::setConeLimitStabilization

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintData(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}

    hkUlong m_userData;   // +0x8
};

class hkpRagdollLimitsData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpRagdollLimitsData(hkFinishLoadedObjectFlag f) : hkpConstraintData(f)
    {
        if (f.m_finishing) {
            if (m_coneLimitStabilization)
                fn_82DA1EA8(this, true);   // setConeLimitStabilization(true): the hkBool temporary is converted here
        }
    }

    hkUint8 m_atoms[0x8E];         // +0xC: the atoms
    hkUint8 m_coneLimitStabilization;   // +0x9A (in the cone limit atom)
};

void HK_CALL finishLoadedObjecthkpRagdollLimitsData(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpRagdollLimitsData(f);
}
