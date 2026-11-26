#include "havok/hkAabb.h"
#include "havok/hkpPhantom.h"
class hkpAabbPhantom;
extern "C" void fn_82D7E1E0(hkpAabbPhantom *);
class hkpAabbPhantom : public hkpPhantom { public:
 HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
 HK_FORCE_INLINE hkpAabbPhantom(const hkAabb &a,unsigned filter) : hkpPhantom(HK_NULL), m_orderDirty(false) { m_aabb=a; m_collidable.setCollisionFilterInfo(filter); fn_82D7E1E0(this); }
 virtual ~hkpAabbPhantom();
 hkAabb m_aabb; hkArray<hkpCollidable *> m_overlappingCollidables; hkBool m_orderDirty;
};
extern "C" hkpAabbPhantom *fn_82D8D6C0(hkpAabbPhantom *self,const hkAabb &a,unsigned filter) { self->hkpAabbPhantom::hkpAabbPhantom(a,filter); return self; }
