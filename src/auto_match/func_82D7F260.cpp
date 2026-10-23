// finishLoadedObjecthkpLinearParametricCurve: the finish function in hkpLinearParametricCurve's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpLinearParametricCurve -> hkpParametricCurve -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkpParametricCurve : public hkReferencedObject {
public:
    hkpParametricCurve(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpLinearParametricCurve : public hkpParametricCurve {
public:
    hkpLinearParametricCurve(hkFinishLoadedObjectFlag flag) : hkpParametricCurve(flag) {}
};

void HK_CALL finishLoadedObjecthkpLinearParametricCurve(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpLinearParametricCurve(f);
}
