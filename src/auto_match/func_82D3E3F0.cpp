#include "havok/hkBase.h"
class hkpShape:public hkReferencedObject {public:unsigned userData,type;};
class hkpShapeContainer {public:virtual ~hkpShapeContainer() {}};
enum hkpShapeType { ShapeTypeDummy };
class __declspec(novtable) hkpShapeCollection:public hkpShape,public hkpShapeContainer {public:
 enum CollectionType{CollectionTypeDummy};
 hkpShapeCollection(hkpShapeType,CollectionType);char padding[4];
};

extern "C" void fn_82CE6310(hkMemoryAllocator*,void*,int,int);
extern "C" void fn_82D3E1F0(void*,const void*,int,int,int);
struct Child {unsigned int words[4];};
struct Array {Child *data;int size,cap;HK_FORCE_INLINE Array():data(0),size(0),cap(0x80000000){} HK_FORCE_INLINE void reserve(int n){hkMemoryAllocator *a=&hkMemoryRouter::getInstance().heap();int capacity=cap&0x3fffffff;if(capacity<n){int c=capacity*2;if(c<=n)c=n;fn_82CE6310(a,this,c,sizeof(Child));}}};
class hkpListShape:public hkpShapeCollection {public:
 HK_FORCE_INLINE hkpListShape(const void *shapes,int count,int policy):hkpShapeCollection((hkpShapeType)9,(CollectionType)0){
 children.reserve(4);fn_82D3E1F0(this,shapes,count,0,policy);
 for(int i=0;i<8;++i)enabled[i]=-1;disabledCount=0;flags=0;
 }
 Array children;unsigned short flags,disabledCount;char gap[0x28];unsigned enabled[8];
};
extern "C" hkpListShape *fn_82D3E3F0(hkpListShape *self,const void *shapes,int count,int policy){self->hkpListShape::hkpListShape(shapes,count,policy);return self;}
