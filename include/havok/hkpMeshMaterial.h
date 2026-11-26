// hkpMeshMaterial (Physics/Collide/Shape/Compound/Collection/Mesh/hkpMeshMaterial.h), 4 bytes: the per-triangle
// material of the mesh shapes, a collision filter info. The size and the member are the game's hkClass
// (initialiser 8312F138). hkpNamedMeshMaterial (8 bytes, an hkStringPtr name at +4) derives from it; it is not
// declared here.
#ifndef HAVOK_HKPMESHMATERIAL_H
#define HAVOK_HKPMESHMATERIAL_H

#include "havok/hkBase.h"

struct hkpMeshMaterial {
    hkUint32 m_filterInfo;   // +0x0
};

#endif
