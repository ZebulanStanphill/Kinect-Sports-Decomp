#include "havok/hkBase.h"
enum hkpShapeType { SHAPE_PIECE=7, SHAPE_SIMPLE=24 };
class hkpShape : public hkReferencedObject { public: unsigned m_userData, m_type; };
class hkpShapeContainer { public: static void operator delete(void *p) { fn_8265CA20(p); } virtual ~hkpShapeContainer() {} };
class hkpShapeCollection : public hkpShape, public hkpShapeContainer {
public: enum CollectionType { COLLECTION_PIECE=3, COLLECTION_SIMPLE=4 };
hkpShapeCollection(hkpShapeType, CollectionType);
hkBool m_disableWelding; unsigned char m_collectionType;
};
typedef struct __declspec(intrin_type) __declspec(align(16)) __vector4 { float f[4]; } __vector4;
struct Triangles { char data[0x60]; };
struct Shapes { char data[0x40]; };
class hkpExtendedMeshShape : public hkpShapeCollection {
public:
 HK_DECLARE_CLASS_ALLOCATOR(0);
 hkpExtendedMeshShape(float radius,int bits);
 char pad[0x68]; __vector4 m_vector; char pad2[0x20]; int m_bits;
 hkArray<Triangles> m_triangles; hkArray<Shapes> m_shapes;
 hkArray<hkUint16> m_welding; unsigned char m_weldingType; char pad3[0xb]; float m_radius; char pad4[8];
};
class hkpStorageExtendedMeshShape;
extern "C" {
void fn_82D4E4A8(hkpStorageExtendedMeshShape*,const Triangles*);
void fn_82D4DE48(hkpStorageExtendedMeshShape*,const Shapes*);
void fn_82D41D58(hkpExtendedMeshShape*);
}
class hkpStorageExtendedMeshShape : public hkpExtendedMeshShape {
public:
 hkpStorageExtendedMeshShape(const hkpExtendedMeshShape &mesh);
 hkArray<int> m_triangleStorage, m_shapeStorage;
};
static HK_FORCE_INLINE void copyWelding(hkArray<hkUint16> &dst,const hkArray<hkUint16> &src) {
 hkMemoryAllocator &a=hkMemoryRouter::getInstance().heap();
 if(dst.getCapacity()<src.getSize()) {
  if((dst.m_capacityAndFlags & int(0x80000000))==0) a.bufFree(dst.m_data,dst.getCapacity(),2);
  int n=src.getSize(); dst.m_data=(hkUint16*)a.bufAlloc(n,2); dst.m_capacityAndFlags=n;
 }
 int n=src.getSize(); hkUint16 *p=dst.m_data;dst.m_size=n;
 const hkUint16 *q=src.m_data;
 for(int i=0;i<n;++i) p[i]=q[i];
}
hkpStorageExtendedMeshShape::hkpStorageExtendedMeshShape(const hkpExtendedMeshShape &mesh)
 : hkpExtendedMeshShape(mesh.m_radius,mesh.m_bits) {
 m_vector=mesh.m_vector;m_userData=mesh.m_userData;m_disableWelding=mesh.m_disableWelding;
 for(int i=0;i<mesh.m_triangles.getSize();++i) fn_82D4E4A8(this,mesh.m_triangles.m_data+i);
 for(int i=0;i<mesh.m_shapes.getSize();++i) fn_82D4DE48(this,mesh.m_shapes.m_data+i);
 copyWelding(m_welding,mesh.m_welding);
 m_weldingType=mesh.m_weldingType;fn_82D41D58(this);
}
