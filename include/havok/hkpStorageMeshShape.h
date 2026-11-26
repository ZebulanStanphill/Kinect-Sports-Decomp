// hkpStorageMeshShape (Physics/Collide/Shape/Deprecated/StorageMesh/hkpStorageMeshShape.h), 0x70 bytes: an
// hkpMeshShape that owns the data of its subparts, one SubpartStorage (0x50 bytes) per subpart. The sizes and
// members are the game's hkClass (initialisers 8312EA98 and 8312E9B8).
//
// - The constructors are out of line: ??0hkpStorageMeshShape@@QAA@MH@Z (82D4F638) and the one that copies an
//   hkpMeshShape (82D50070); so is the destructor (82D4F698).
// - The finish constructor exists in the game only as fn_82D4FF88 (its unit defines it): when finishing it points
//   each subpart at its storage.
// - SubpartStorage's destructor is out of line (82D501D0; deleting destructor 82D503A0); its finish constructor
//   is inline.
#ifndef HAVOK_HKPSTORAGEMESHSHAPE_H
#define HAVOK_HKPSTORAGEMESHSHAPE_H

#include "havok/hkBase.h"
#include "havok/hkpMeshShape.h"

class hkpStorageMeshShape : public hkpMeshShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);

    // 0x50 bytes.
    struct SubpartStorage : public hkReferencedObject {
        HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
        SubpartStorage(hkFinishLoadedObjectFlag flag)
            : hkReferencedObject(flag), m_vertices(flag), m_indices16(flag), m_indices32(flag),
              m_materialIndices(flag), m_materials(flag), m_materialIndices16(flag) {}
        virtual ~SubpartStorage();   // out of line (82D501D0)

        hkArray<hkReal> m_vertices;              // +0x8
        hkArray<hkUint16> m_indices16;           // +0x14
        hkArray<hkUint32> m_indices32;           // +0x20
        hkArray<hkUint8> m_materialIndices;      // +0x2C
        hkArray<hkUint32> m_materials;           // +0x38
        hkArray<hkUint16> m_materialIndices16;   // +0x44
    };

    hkpStorageMeshShape(hkReal radius, int numBitsForSubpartIndex);   // out of line (82D4F638)
    hkpStorageMeshShape(const hkpMeshShape *mesh);                    // out of line (82D50070)
    hkpStorageMeshShape(hkFinishLoadedObjectFlag flag);               // fn_82D4FF88
    virtual ~hkpStorageMeshShape();                                   // out of line (82D4F698)

    hkArray<SubpartStorage *> m_storage;   // +0x60
};

#endif
