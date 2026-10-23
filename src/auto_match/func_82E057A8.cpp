#include "havok/hkBase.h"
extern "C" void fn_82E04A30(void *);
struct Texture {hkRefPtr<hkReferencedObject> p;int a,b;};
class hkxMaterial {public:
 char opaque[0x7c];
 virtual HK_FORCE_INLINE ~hkxMaterial(){
  ((hkRefPtr<hkReferencedObject> *)((char *)this+0x7c))->~hkRefPtr();
  hkArray<hkRefPtr<hkReferencedObject> > &children=*(hkArray<hkRefPtr<hkReferencedObject> > *)((char *)this+0x70); children._clearAndDeallocate(hkContainerHeapAllocator::get(&children));
  hkArray<Texture> &textures=*(hkArray<Texture> *)((char *)this+0x18); textures._clearAndDeallocate(hkContainerHeapAllocator::get(&textures));
  ((hkStringPtr *)((char *)this+0x14))->~hkStringPtr();
  fn_82E04A30(this);
 }
 static void operator delete(void *p){fn_8265CA20(p);}
};
extern "C" void fn_82E057A8(hkxMaterial *self){self->hkxMaterial::~hkxMaterial();}
