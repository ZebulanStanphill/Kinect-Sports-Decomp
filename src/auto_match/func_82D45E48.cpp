#include "havok/hkBase.h"
class hkpShape:public hkReferencedObject {public:unsigned userData,type;};
class hkpShapeContainer {public:virtual ~hkpShapeContainer() {}};
enum hkpShapeType { ShapeTypeDummy };
class __declspec(novtable) hkpShapeCollection:public hkpShape,public hkpShapeContainer {public:
 enum CollectionType{CollectionTypeDummy};
 hkpShapeCollection(hkpShapeType,CollectionType);char padding[4];
};

struct Array {void *data;int size,cap;HK_FORCE_INLINE Array():data(0),size(0),cap(0x80000000){}};
class hkpCompressedMeshShape:public hkpShapeCollection {public:
 HK_FORCE_INLINE hkpCompressedMeshShape(float error):hkpShapeCollection((hkpShapeType)16,(CollectionType)6),error(error),bitsPerIndex(17),bitsPerWIndex(18),indexMask(0x3ffff),wIndexMask(0x1ffff),material(0),defaultMaterial(0),materialStride(0){mode=6;}
 int bitsPerIndex,bitsPerWIndex,indexMask,wIndexMask;float error;unsigned char mode;char pad[3];
 Array arrays[8];char gap[0x30];void *material;unsigned short defaultMaterial,materialStride;Array namedMaterials;
};
extern "C" hkpCompressedMeshShape *fn_82D45E48(hkpCompressedMeshShape *self,float error){self->hkpCompressedMeshShape::hkpCompressedMeshShape(error);return self;}
