// finishLoadedObjecthkpWheelConstraintData: the finish function in hkpWheelConstraintData's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpWheelConstraintData -> hkpConstraintData -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkpConstraintData : public hkReferencedObject {
public:
    hkpConstraintData(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpWheelConstraintData : public hkpConstraintData {
public:
    hkpWheelConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag) {}
};

void HK_CALL finishLoadedObjecthkpWheelConstraintData(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpWheelConstraintData(f);
}
