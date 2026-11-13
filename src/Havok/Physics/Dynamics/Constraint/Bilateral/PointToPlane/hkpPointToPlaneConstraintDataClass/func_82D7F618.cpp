// finishLoadedObjecthkpPointToPlaneConstraintData: the finish function in hkpPointToPlaneConstraintData's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpPointToPlaneConstraintData -> hkpConstraintData -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkpConstraintData : public hkReferencedObject {
public:
    hkpConstraintData(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpPointToPlaneConstraintData : public hkpConstraintData {
public:
    hkpPointToPlaneConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag) {}
};

void HK_CALL finishLoadedObjecthkpPointToPlaneConstraintData(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpPointToPlaneConstraintData(f);
}
