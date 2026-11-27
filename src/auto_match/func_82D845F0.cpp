// hkpWorld::hkpWorld(hkFinishLoadedObjectFlag) (Physics/Dynamics/World/hkpWorld.cpp), used by hkpWorld's
// getVtable and finishLoadedObject functions. The world is not serialised: the constructor runs
// hkReferencedObject's default constructor (m_referenceCount = 1) and default-constructs the members that
// have constructors (the hkArrays, a null pointer at +0x50 and the multithread check at +0xA8); everything
// else is left alone.
#include "havok/hkBase.h"
#include "havok/hkpWorld.h"

hkpWorld::hkpWorld(hkFinishLoadedObjectFlag flag) : m_phantoms(flag) {}
