// finishLoadedObjecthkpBallAndSocketConstraintData: the finish function in hkpBallAndSocketConstraintData's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpBallAndSocketConstraintData -> hkpConstraintData -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkpConstraintData : public hkReferencedObject {
public:
    hkpConstraintData(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpBallAndSocketConstraintData : public hkpConstraintData {
public:
    hkpBallAndSocketConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag) {}
};

void HK_CALL finishLoadedObjecthkpBallAndSocketConstraintData(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpBallAndSocketConstraintData(f);
}
