// cleanupLoadedObjecthkpLinearParametricCurve: the cleanup function in hkpLinearParametricCurve's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpLinearParametricCurve.h"

void HK_CALL cleanupLoadedObjecthkpLinearParametricCurve(void *p)
{
    static_cast<hkpLinearParametricCurve *>(p)->~hkpLinearParametricCurve();
}
