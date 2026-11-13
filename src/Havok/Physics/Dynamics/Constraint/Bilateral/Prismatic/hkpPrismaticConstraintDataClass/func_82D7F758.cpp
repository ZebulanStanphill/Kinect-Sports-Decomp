// finishLoadedObjecthkpPrismaticConstraintData: the finish function in hkpPrismaticConstraintData's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpPrismaticConstraintData -> hkpConstraintData -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkpConstraintData : public hkReferencedObject {
public:
    hkpConstraintData(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpPrismaticConstraintData : public hkpConstraintData {
public:
    hkpPrismaticConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag) {}
};

void HK_CALL finishLoadedObjecthkpPrismaticConstraintData(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpPrismaticConstraintData(f);
}
