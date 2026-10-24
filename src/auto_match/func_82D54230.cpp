#include "havok/hkpShape.h"
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;
extern "C" __vector4 __vxor(__vector4, __vector4);
extern "C" __vector4 __vspltw(__vector4, unsigned int);
extern "C" __vector4 __vaddfp(__vector4, __vector4);
extern "C" __vector4 __vsubfp(__vector4, __vector4);
extern "C" __vector4 __vmulfp(__vector4, __vector4);
class hkVector4 { public:
 HK_FORCE_INLINE void operator=(const hkVector4 &v) { q=v.q; }
 HK_FORCE_INLINE void setZero() { q=__vxor(q,q); }
 HK_FORCE_INLINE void setAll(float x) { q.f[0]=x; q=__vspltw(q,0); }
 __vector4 q;
};
class hkpCdBody; struct hkpCollisionInput; class hkpContactMgr;
class hkpCollisionAgent: public hkReferencedObject { public: HK_FORCE_INLINE hkpCollisionAgent(hkpContactMgr *m):mgr(m) {} hkpContactMgr *mgr; };
extern "C" void fn_82D70F30(void *);
class hkpBvTreeStreamAgent: public hkpCollisionAgent { public:
 unsigned input; hkVector4 a,b; hkArray<void *> agents;
 hkpBvTreeStreamAgent(const hkpCdBody &,const hkpCdBody &,const hkpCollisionInput &in,hkpContactMgr *m);
};

hkpBvTreeStreamAgent::hkpBvTreeStreamAgent(const hkpCdBody &,const hkpCdBody &,const hkpCollisionInput &in,hkpContactMgr *m):hkpCollisionAgent(m) { input=*(const unsigned *)&in; a.setZero(); b.setZero(); fn_82D70F30(&agents); }
