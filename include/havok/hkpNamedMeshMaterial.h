// hkpNamedMeshMaterial (Physics/Collide/Shape/Compound/Collection/Mesh/hkpNamedMeshMaterial.h, the path is
// Havok's), 8 bytes: an hkpMeshMaterial with a name. The game's hkClass (initialiser 8312F1A8) gives the parent
// (hkpMeshMaterial), the size and one member; the name's offset and type come from the destructors of the
// arrays that hold it (82D46000, 82D4F308: an hkStringPtr at +4 of each 8-byte element). The constructors and
// the destructor are implicit.
#ifndef HAVOK_HKPNAMEDMESHMATERIAL_H
#define HAVOK_HKPNAMEDMESHMATERIAL_H

#include "havok/hkBase.h"
#include "havok/hkpMeshMaterial.h"

struct hkpNamedMeshMaterial : public hkpMeshMaterial {
    hkStringPtr m_name;   // +0x4
};

#endif
