// hkAabbTreeData (Common/Internal/Collide/Tree/AabbTree): the two bounding volumes the AABB trees are
// instantiated with. The game's mangled names (?$hkAabbTree@UhkAabbTreeAabb@hkAabbTreeData@@I@@,
// ...UhkAabbTreeAabb16@hkAabbTreeData@@G...) say both are structs inside hkAabbTreeData and that the full
// volume goes with 32-bit node indices, the quantised one with 16-bit indices; they cannot say whether
// hkAabbTreeData is a namespace or a struct. It is a namespace here, which lets units forward-declare the
// volumes as `namespace hkAabbTreeData { struct hkAabbTreeAabb; }`.
//
// Sizes: the node storage of hkAabbTree<hkAabbTreeAabb, hkUint32> has elements of 0x30 bytes (82D1E718,
// 82D38600) and that of hkAabbTree<hkAabbTreeAabb16, hkUint16> elements of 0x14 bytes (82D34F48); a node
// is the volume and four indices (see hkAabbTree.h), so the volumes are 0x20 and 0xC bytes.
#ifndef HAVOK_HKAABBTREEDATA_H
#define HAVOK_HKAABBTREEDATA_H

#include "havok/hkBase.h"

namespace hkAabbTreeData {

// 0x20 bytes, 16-byte aligned: the query (82D38600) loads it with two lvx128. What the w lanes hold is not
// known.
struct __declspec(align(16)) hkAabbTreeAabb {
    hkReal m_min[3];   // +0x0
    hkUint32 m_minW;   // +0xC
    hkReal m_max[3];   // +0x10
    hkUint32 m_maxW;   // +0x1C
};

// 0xC bytes: a box quantised to 16 bits per coordinate (hkAabbTree's offset and scale vectors map it back).
struct hkAabbTreeAabb16 {
    hkUint16 m_min[3];   // +0x0
    hkUint16 m_max[3];   // +0x6
};

}   // namespace hkAabbTreeData

#endif
