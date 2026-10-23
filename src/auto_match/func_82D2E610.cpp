// hkgpMesh::ExtrudeShape scalar deleting destructor (Common/Internal/GeometryProcessing/Mesh/hkgpMesh.cpp):
// calls the out-of-line implicit destructor ??1ExtrudeShape@hkgpMesh@@UAA@XZ (fn_82D2CFE0), then, when
// deleting, frees sizeof(ExtrudeShape) = 0x80 bytes to the heap through Havok's non-virtual class
// allocator, whose operator delete checks for null. The class layout follows func_82D2CFE0.cpp.
// The function at the end only makes the compiler emit the vtable, and with it this function.
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
            virtual void getSupportingVertex(const hkVector4 &direction, hkVector4 &out) const;   // +0x8
            virtual int getNumPlanes() const;                                  // +0xC
        };
    };

    struct ExtrudeShape : public IConvexOverlap::IConvexShape {
        HK_FORCE_INLINE void *HK_CALL operator new(hk_size_t nbytes)
        { return hkMemoryRouter::getInstance().heap().blockAlloc(static_cast<int>(nbytes)); }
        HK_FORCE_INLINE void HK_CALL operator delete(void *p)
        { if (p) hkMemoryRouter::getInstance().heap().blockFree(p, sizeof(ExtrudeShape)); }
        HK_FORCE_INLINE void *HK_CALL operator new(hk_size_t, void *p) { return p; }
        HK_FORCE_INLINE void HK_CALL operator delete(void *, void *) {}

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

void emitVtable_82D2E610(void *p) { new (p) hkgpMesh::ExtrudeShape; }
