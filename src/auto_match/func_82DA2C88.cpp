#include "havok/hkBase.h"
class hkpShape;
class __declspec(align(16)) hkTransform { public: float a[16]; };
class __declspec(align(16)) hkpShapePhantom : public hkReferencedObject { public:
 char p08[8]; const hkpShape *shape; char p14[0x18]; unsigned int user;
 char p30[0x5c]; hkArray<int> a,b; char pa4[0xc]; hkTransform transform; char pf0[0x70];
 hkpShapePhantom(const hkpShape *,const hkTransform &); virtual ~hkpShapePhantom();
};
class hkpSimpleShapePhantom : public hkpShapePhantom { public:
 hkArray<int> overlaps; hkBool order;
 HK_FORCE_INLINE hkpSimpleShapePhantom(const hkpShape *s,const hkTransform &t,unsigned int u):hkpShapePhantom(s,t),order(false){user=u;} virtual ~hkpSimpleShapePhantom();
};
extern "C" void fn_82D8C858(void *,const void *);
template<class T> static HK_FORCE_INLINE void arrayCopy(hkArray<T> &a,const hkArray<T> &b) {
 hkMemoryAllocator &alloc=hkMemoryRouter::getInstance().heap();
 if(a.getCapacity()<b.m_size) {
  if((a.m_capacityAndFlags & (int)0x80000000)==0)alloc.bufFree(a.m_data,a.getCapacity(),sizeof(T));
  int n=b.m_size;a.m_data=(T *)alloc.bufAlloc(n,sizeof(T));a.m_capacityAndFlags=n;
 }
 int n=b.m_size; T *dst=a.m_data; a.m_size=n; const T *src=b.m_data;
 for(int i=0;i<n;++i)dst[i]=src[i];
}

extern "C" hkpSimpleShapePhantom *fn_82DA2C88(const hkpSimpleShapePhantom *self) {
 hkpSimpleShapePhantom *p=new hkpSimpleShapePhantom(self->shape,self->transform,self->user);
 arrayCopy(p->a,self->a);arrayCopy(p->b,self->b);fn_82D8C858(p,self);return p;
}
