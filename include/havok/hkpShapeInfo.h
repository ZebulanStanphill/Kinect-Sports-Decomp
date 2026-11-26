// hkpShapeInfo (Physics/Utilities/Serialize/ShapeInfo/hkpShapeInfo.h; its class units are in
// Physics/Collide/Util/ShapeInfo), 0x70 bytes: a shape with the names and transforms of its children, as the
// serialised scene tools store it. The members and offsets are the game's hkClass (initialiser 8312E348); the
// element and pointer types are those of its hkClassMember table (shape POINTER/STRUCT, childShapeNames
// ARRAY/STRINGPTR, childTransforms ARRAY/TRANSFORM).
//
// - The destructor is out of line and empty (??1hkpShapeInfo@@UAA@XZ, 82D3ADD8; the members are destroyed in
//   reverse order), the deleting destructor 82D3AED8.
// - The finish constructor is inline: finishLoadedObject (82D3ADB0) and getVtable (82D3ADC8) only store the
//   vtable.
// ??_7hkpShapeInfo@@6B@ has hkReferencedObject's three slots.
#ifndef HAVOK_HKPSHAPEINFO_H
#define HAVOK_HKPSHAPEINFO_H

#include "havok/hkBase.h"
#include "havok/hkTransform.h"
#include "havok/hkRefPtr.h"
#include "havok/hkStringPtr.h"
#include "havok/hkpShape.h"

class hkpShapeInfo : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    hkpShapeInfo(hkFinishLoadedObjectFlag flag)
        : hkReferencedObject(flag), m_shape(flag), m_childShapeNames(flag), m_childTransforms(flag) {}
    virtual ~hkpShapeInfo();   // out of line (82D3ADD8)

    hkRefPtr<hkpShape> m_shape;               // +0x8
    hkBool m_isHierarchicalCompound;          // +0xC
    hkBool m_hkdShapesCollected;              // +0xD
    hkArray<hkStringPtr> m_childShapeNames;   // +0x10
    hkArray<hkTransform> m_childTransforms;   // +0x1C
    hkTransform m_transform;                  // +0x30
};

#endif
