// hkpStorageSampledHeightFieldShape scalar deleting destructor: the implicit destructor
// (m_storage, an hkArray<hkReal>, then hkpSampledHeightFieldShape's out-of-line implicit
// destructor ??1, fn_82D46390) is inlined. The finish constructor below only makes the
// compiler emit the vtable.
#include "havok/hkpShape.h"

class hkpHeightFieldShape : public hkpShape {
public:
    hkpHeightFieldShape(hkFinishLoadedObjectFlag flag) : hkpShape(flag) { m_type = hkpShapeType(0x1a); }
};

class hkpSampledHeightFieldShape : public hkpHeightFieldShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    enum HeightFieldType { HEIGHTFIELD_STORAGE = 0, HEIGHTFIELD_COMPRESSED = 1, HEIGHTFIELD_USER = 2 };
    hkpSampledHeightFieldShape(hkFinishLoadedObjectFlag flag) : hkpHeightFieldShape(flag)
    {
        if (flag.m_finishing)
            m_type = hkpShapeType(0xd);
    }
    virtual ~hkpSampledHeightFieldShape();

    int m_xRes;                        // +0x10
    int m_zRes;                        // +0x14
    hkReal m_heightCenter;             // +0x18
    hkBool m_useProjectionBasedHeight; // +0x1C
    hkUint8 m_heightfieldType;         // +0x1D hkEnum<HeightFieldType, hkUint8>
    char m_pad[0x60 - 0x20];
};

class hkpStorageSampledHeightFieldShape : public hkpSampledHeightFieldShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpStorageSampledHeightFieldShape(hkFinishLoadedObjectFlag flag) : hkpSampledHeightFieldShape(flag), m_storage(flag)
    {
        if (flag.m_finishing)
            m_heightfieldType = HEIGHTFIELD_STORAGE;
    }

    hkArray<hkReal> m_storage;   // +0x60
    hkBool m_triangleFlip;       // +0x6C
};

void emitVtable_82D3B5E0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpStorageSampledHeightFieldShape(f); }
