#include "havok/hkBase.h"
#include "havok/hkVector4.h"
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
