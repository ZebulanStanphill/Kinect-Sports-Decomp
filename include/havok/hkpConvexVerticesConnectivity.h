// hkpConvexVerticesConnectivity (Physics/Collide/Shape/Convex/ConvexVertices/hkpConvexVerticesConnectivity.h,
// the folder of its class units), 0x20 bytes: the faces of an hkpConvexVerticesShape, as vertex index lists.
// The layout comes from the implicit destructor (82D39F50: the arrays at +0x14 and +0x8; the freed sizes give
// the element types) and clear (82D4A310 empties both). The member names follow Havok's header.
#ifndef HAVOK_HKPCONVEXVERTICESCONNECTIVITY_H
#define HAVOK_HKPCONVEXVERTICESCONNECTIVITY_H

#include "havok/hkBase.h"

// ??_7hkpConvexVerticesConnectivity@@6B@: the deleting destructor (82D3A008), hkReferencedObject's two
// functions, then clear (82D4A310, Havok's name).
class hkpConvexVerticesConnectivity : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexVerticesConnectivity(hkFinishLoadedObjectFlag flag)
        : hkReferencedObject(flag), m_vertexIndices(flag), m_numVerticesPerFace(flag) {}
    virtual void clear();   // +0xC

    hkArray<hkUint16> m_vertexIndices;       // +0x8
    hkArray<hkUint8> m_numVerticesPerFace;   // +0x14
};

#endif
