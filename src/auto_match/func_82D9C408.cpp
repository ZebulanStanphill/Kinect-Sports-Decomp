#include "havok/hkpShapePhantom.h"
// hkpCachingShapePhantom as in havok/hkpCachingShapePhantom.h, but with the constructor inline: clone() is in the
// constructor's .cpp, and the game inlines it here (a call to hkpShapePhantom's constructor, then the members).
class hkpCachingShapePhantom : public hkpShapePhantom {
public:
    struct CollisionDetail {
        class hkpCollisionAgent *m_agent;
        hkpCollidable *m_collidable;
    };
    HK_FORCE_INLINE hkpCachingShapePhantom(const hkpShape *shape, const hkTransform &transform,
                                           hkUint32 collisionFilterInfo)
        : hkpShapePhantom(shape, transform), m_orderDirty(false)
    {
        m_collidable.setCollisionFilterInfo(collisionFilterInfo);
    }
    virtual ~hkpCachingShapePhantom();

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

extern "C" hkpCachingShapePhantom *fn_82D9C408(const hkpCachingShapePhantom *self) {
 hkpCachingShapePhantom *p=new hkpCachingShapePhantom(self->m_collidable.getShape(),self->m_motionState.getTransform(),
                                                      self->m_collidable.m_broadPhaseHandle.m_collisionFilterInfo);
 arrayCopy(p->m_overlapListeners,self->m_overlapListeners);arrayCopy(p->m_phantomListeners,self->m_phantomListeners);
 fn_82D8C858(p,self);return p;
}
