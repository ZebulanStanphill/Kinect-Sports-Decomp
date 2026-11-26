// hkMemoryMeshShape (Common/GeometryUtilities/Mesh/Memory/hkMemoryMeshShape.h), 0x30 bytes: an hkMeshShape whose
// sections and indices live in memory. The members, offsets and types are the game's hkClass (initialiser
// 8312C928: sections is an array of hkMeshSectionCinfo, 0x20 bytes each).
//
// - The destructor is out of line (82D075D0: releases each section's vertex buffer and material); the deleting
//   destructor is 82D07020.
// - The finish constructor is inline: finishLoadedObject (82D06FA0) and getVtable (82D06FC8) call only m_name's
//   (fn_82CED308).
// hkMeshSectionCinfo has no header yet: it is only declared here, so a unit that walks or destroys m_sections
// needs its own definition until hkMeshSectionCinfo.h exists.
#ifndef HAVOK_HKMEMORYMESHSHAPE_H
#define HAVOK_HKMEMORYMESHSHAPE_H

#include "havok/hkBase.h"
#include "havok/hkStringPtr.h"
#include "havok/hkMeshShape.h"

struct hkMeshSectionCinfo;

class hkMemoryMeshShape : public hkMeshShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkMemoryMeshShape(hkFinishLoadedObjectFlag flag)
        : hkMeshShape(flag), m_sections(flag), m_indices16(flag), m_indices32(flag), m_name(flag) {}
    virtual ~hkMemoryMeshShape();   // out of line (82D075D0)

    hkArray<hkMeshSectionCinfo> m_sections;   // +0x8
    hkArray<hkUint16> m_indices16;            // +0x14
    hkArray<hkUint32> m_indices32;            // +0x20
    hkStringPtr m_name;                       // +0x2C
};

#endif
