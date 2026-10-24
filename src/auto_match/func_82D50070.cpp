// hkpStorageMeshShape::hkpStorageMeshShape(const hkpMeshShape *mesh)
// (Physics/Collide/Shape/Deprecated/StorageMesh/hkpStorageMeshShape.cpp): the
// hkpMeshShape(radius, numBits) base constructor (??0hkpMeshShape@@QAA@MH@Z),
// the two vtables and the empty m_storage array, then the mesh's scaling, user
// data and welding flag, every subpart through addSubpart (fn_82D4F750) and the
// inlined hkArray<hkUint16>::operator= of the welding info.
// Built with /O2 /QVMXReserve (the m_scaling copy uses v0).
#include "havok/hkpShape.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

class hkVector4 {
public:
    HK_FORCE_INLINE hkVector4 &operator=(const hkVector4 &v) { m_quad = v.m_quad; return *this; }
    hkQuadReal m_quad;
};

// hkArray<T>::operator= for POD elements (hkArrayBase::_copyFromArray).
template <typename T>
HK_FORCE_INLINE void hkArrayCopy(hkArray<T> &dst, const hkArray<T> &src)
{
    hkMemoryAllocator &alloc = hkContainerHeapAllocator::get(&dst);
    if (dst.getCapacity() < src.getSize()) {
        if ((dst.m_capacityAndFlags & hkArray<T>::DONT_DEALLOCATE_FLAG) == 0)
            alloc.bufFree(dst.m_data, dst.getCapacity(), sizeof(T));
        int n = src.getSize();
        dst.m_data = static_cast<T *>(alloc.bufAlloc(n, sizeof(T)));
        dst.m_capacityAndFlags = n;
    }
    dst.m_size = src.getSize();
    int n = dst.m_size;
    T *d = dst.m_data;
    const T *s = src.m_data;
    for (int i = 0; i < n; ++i)
        d[i] = s[i];
}

// hkpMeshShape (Physics/Collide/Shape/Deprecated/Mesh/hkpMeshShape.h), 0x60 bytes.
class hkpMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    struct Subpart {
        hkUint32 m_data[14];   // 0x38 bytes
    };
    hkpMeshShape(hkReal radius, int numBitsForSubpartIndex);

    int getNumSubparts() const { return m_subparts.getSize(); }
    const Subpart &getSubpartAt(int i) const { return m_subparts[i]; }

    hkVector4 m_scaling;                 // +0x20
    hkInt32 m_numBitsForSubpartIndex;    // +0x30
    hkArray<Subpart> m_subparts;         // +0x34
    hkArray<hkUint16> m_weldingInfo;     // +0x40
    hkUint8 m_weldingType;               // +0x4C
    hkReal m_radius;                     // +0x50
    int m_pad[3];                        // +0x54
};

class hkpStorageMeshShape;
extern "C" void fn_82D4F750(hkpStorageMeshShape *self, const hkpMeshShape::Subpart *part);   // addSubpart

class hkpStorageMeshShape : public hkpMeshShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    struct SubpartStorage : public hkReferencedObject {
    };
    hkpStorageMeshShape(const hkpMeshShape *mesh);
    virtual ~hkpStorageMeshShape();

    void addSubpart(const Subpart &part) { fn_82D4F750(this, &part); }

    hkArray<SubpartStorage *> m_storage;   // +0x60
};

hkpStorageMeshShape::hkpStorageMeshShape(const hkpMeshShape *mesh)
    : hkpMeshShape(mesh->m_radius, mesh->m_numBitsForSubpartIndex)
{
    m_scaling = mesh->m_scaling;
    m_userData = mesh->m_userData;
    m_disableWelding = mesh->m_disableWelding;
    for (int i = 0; i < mesh->getNumSubparts(); ++i)
        addSubpart(mesh->getSubpartAt(i));
    hkArrayCopy(m_weldingInfo, mesh->m_weldingInfo);
    m_weldingType = mesh->m_weldingType;
}
