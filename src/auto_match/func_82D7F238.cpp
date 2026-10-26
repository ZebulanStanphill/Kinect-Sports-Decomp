// cleanupLoadedObjecthkpLinearParametricCurve: the cleanup function in hkpLinearParametricCurve's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpLinearParametricCurve {
public:
    virtual ~hkpLinearParametricCurve();
};

void HK_CALL cleanupLoadedObjecthkpLinearParametricCurve(void *p)
{
    static_cast<hkpLinearParametricCurve *>(p)->~hkpLinearParametricCurve();
}
