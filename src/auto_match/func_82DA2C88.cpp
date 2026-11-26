#include "havok/hkpShapePhantom.h"
// Local copy of hkpSimpleShapePhantom (havok/hkpSimpleShapePhantom.h): its constructor (fn_82DA2BA8) is
// defined in the same source file and inlined into this function, so here it is inline.
class hkpSimpleShapePhantom : public hkpShapePhantom {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    HK_FORCE_INLINE hkpSimpleShapePhantom(const hkpShape *shape, const hkTransform &transform, hkUint32 collisionFilterInfo)
        : hkpShapePhantom(shape, transform), m_orderDirty(false)
    {
        m_collidable.setCollisionFilterInfo(collisionFilterInfo);
    }
    virtual ~hkpSimpleShapePhantom();

    struct CollisionDetail {
        hkpCollidable *m_collidable;
    };
    hkArray<CollisionDetail> m_collisionDetails;   // +0x160
    hkBool m_orderDirty;                           // +0x16C
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
 hkpSimpleShapePhantom *p=new hkpSimpleShapePhantom(self->m_collidable.getShape(),self->m_motionState.getTransform(),
     self->m_collidable.m_broadPhaseHandle.m_collisionFilterInfo);
 arrayCopy(p->m_overlapListeners,self->m_overlapListeners);arrayCopy(p->m_phantomListeners,self->m_phantomListeners);fn_82D8C858(p,self);return p;
}
