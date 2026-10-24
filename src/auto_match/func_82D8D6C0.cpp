#include "havok/hkpShape.h"
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned u[4]; } __vector4;
class hkVector4 { public: __vector4 q; };
class hkAabb { public: hkVector4 m_min,m_max; HK_FORCE_INLINE void operator=(const hkAabb &a) { m_min.q=a.m_min.q; m_max.q=a.m_max.q; } };
class hkpCollidable { public: char prefix[0x10]; char owner; char data[0xB]; unsigned filter; char rest[0x5C]; void setOwner(void *p) { owner=(char)((char*)p-(char*)this); } };
class hkpWorldObject : public hkReferencedObject { public:
 enum BroadPhaseType { PHANTOM=2 };
 hkpWorldObject(const hkpShape *,BroadPhaseType);
 char prefix[8]; hkpCollidable m_collidable;
};
class hkpPhantom : public hkpWorldObject { public:
 HK_FORCE_INLINE hkpPhantom() : hkpWorldObject(0,PHANTOM) { m_collidable.setOwner(this); }
 hkArray<void *> m_overlapListeners,m_phantomListeners;
};
class hkpAabbPhantom;
extern "C" void fn_82D7E1E0(hkpAabbPhantom *);
class hkpAabbPhantom : public hkpPhantom { public:
 HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
 HK_FORCE_INLINE hkpAabbPhantom(const hkAabb &a,unsigned filter) : m_orderDirty(false) { m_aabb=a; m_collidable.filter=filter; fn_82D7E1E0(this); }
 char padding[0xC]; hkAabb m_aabb; hkArray<void *> m_overlaps; hkBool m_orderDirty;
};
extern "C" hkpAabbPhantom *fn_82D8D6C0(hkpAabbPhantom *self,const hkAabb &a,unsigned filter) { self->hkpAabbPhantom::hkpAabbPhantom(a,filter); return self; }
