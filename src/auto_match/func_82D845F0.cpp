// hkpWorld::hkpWorld(hkFinishLoadedObjectFlag) (Physics/Dynamics/World/hkpWorld.h), used by hkpWorld's
// getVtable (fn_82D800C0) and finishLoadedObject (fn_82D80098) functions. The world is not serialised:
// the constructor runs hkReferencedObject's default constructor (m_referenceCount = 1) and
// default-constructs the members that have constructors (the hkArrays, a null pointer at +0x50 and the
// multithread check at +0xA8); everything else is left alone. It keeps its fn_ name (a Matching C unit
// calls it), so the constructor is expanded into an extern "C" definition. Member names are not
// confirmed; untouched members are padding.
#include "havok/hkBase.h"
#include "havok/hkpWorld.h"

extern "C" hkpWorld *fn_82D845F0(hkpWorld *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpWorld::hkpWorld(flag);
    return self;
}
