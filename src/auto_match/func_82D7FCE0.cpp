// cleanupLoadedObjecthkpSimulation: the cleanup function in hkpSimulation's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpSimulation {
public:
    virtual ~hkpSimulation();
};

void HK_CALL cleanupLoadedObjecthkpSimulation(void *p)
{
    static_cast<hkpSimulation *>(p)->~hkpSimulation();
}
