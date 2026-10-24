#include "havok/hkBase.h"
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;
extern "C" __vector4 __vxor(__vector4,__vector4);
class hkVector4 { public: __vector4 m_quad; void setZero4(){ m_quad=__vxor(m_quad,m_quad); } };
enum hkpShapeType { TYPE=7 };
class hkpShape : public hkReferencedObject { public: unsigned int userData,type; };
extern "C" void fn_8265CA20(void *);
class hkpShapeContainer { public: static void operator delete(void *p){fn_8265CA20(p);} virtual ~hkpShapeContainer(){} };
class hkpShapeCollection : public hkpShape,public hkpShapeContainer {
public: enum CollectionType { COLLECTION=2 }; hkpShapeCollection(hkpShapeType,CollectionType);
 hkBool welding; unsigned char collection;
};
class hkpSampledHeightFieldShape : public hkReferencedObject {};
class hkpTriSampledHeightFieldCollection : public hkpShapeCollection {
public: HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE); hkpTriSampledHeightFieldCollection(hkpSampledHeightFieldShape *,float);
 hkpSampledHeightFieldShape *heightfield; int pad;
 float radius; hkArray<unsigned short> weldingInfo; hkVector4 extrusion;
};
hkpTriSampledHeightFieldCollection::hkpTriSampledHeightFieldCollection(hkpSampledHeightFieldShape *shape,float r) : hkpShapeCollection(TYPE,COLLECTION) {
 radius=r; heightfield=shape; extrusion.setZero4(); heightfield->addReference();
}
