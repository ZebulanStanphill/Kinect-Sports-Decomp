// hkMemoryResourceHandle::hkMemoryResourceHandle(hkFinishLoadedObjectFlag), the finish constructor, out of line
// in hkMemoryResourceHandle.cpp; the finish function of the class's hkTypeInfo (82E08DD0) and getVtable
// (82E08DF8) call it.
#include "havok/hkMemoryResourceContainer.h"

hkMemoryResourceHandle::hkMemoryResourceHandle(hkFinishLoadedObjectFlag f)
    : hkResourceHandle(f), m_variant(f), m_name(f), m_references(f)
{
}
