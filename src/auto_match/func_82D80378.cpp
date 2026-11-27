// finishLoadedObjecthkpSimpleContactConstraintAtom: the finish function in hkpSimpleContactConstraintAtom's
// hkTypeInfo (static in Havok): runs the out-of-line finish constructor (82D9FE90) on the loaded object.
#include "havok/hkpSimpleContactConstraintAtom.h"

// The atom has no class allocator; the global placement new (as in hkArrayCopy.h).
inline void *operator new(hk_size_t, void *p) { return p; }

extern "C" void fn_82D80378(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpSimpleContactConstraintAtom(f);
}
