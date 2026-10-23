// hkgpMesh::ExtrudeShape::~ExtrudeShape, the implicit destructor (Common/Internal/GeometryProcessing/Mesh/
// hkgpMesh.cpp), emitted out of line: the deleting destructor (fn_82D2E610) calls it. It destroys the hkArray
// of 0x30-byte planes at +0x10, then the interface base hkgpMesh::IConvexOverlap::IConvexShape stores its
// vtable. The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

class hkVector4 {
public:
    hkQuadReal m_quad;
};


extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkgpMesh {
public:
    struct IConvexOverlap {
        struct IConvexShape {
            static void operator delete(void *p) { fn_8265CA20(p); }
            virtual ~IConvexShape() {}
            virtual hkReal getMaxCoverage(const hkVector4 &direction) const;   // +0x4
            virtual void getSupportingVertex(const hkVector4 &direction, hkVector4 &out) const;   // pure in Havok; +0x8
            virtual int getNumPlanes() const;                                  // pure in Havok; +0xC
        };
    };

    struct ExtrudeShape : public IConvexOverlap::IConvexShape {
        struct Plane {
            hkVector4 m_v[3];
        };
        ExtrudeShape() {}
        virtual void getSupportingVertex(const hkVector4 &direction, hkVector4 &out) const;
        virtual int getNumPlanes() const;

        hkUint32 m_data4[3];       // +0x4 (not destroyed)
        hkArray<Plane> m_planes;   // +0x10
        hkVector4 m_data[6];       // +0x20
    };
};

inline void *operator new(hk_size_t, void *p) throw() { return p; }

void emitVtable_82D2CFE0(void *p) { ::new (p) hkgpMesh::ExtrudeShape; }
