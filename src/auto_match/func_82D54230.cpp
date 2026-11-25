#include "havok/hkpShape.h"
#include "havok/hkVector4.h"
class hkpCdBody; struct hkpCollisionInput; class hkpContactMgr;
class hkpCollisionAgent: public hkReferencedObject { public: HK_FORCE_INLINE hkpCollisionAgent(hkpContactMgr *m):mgr(m) {} hkpContactMgr *mgr; };
extern "C" void fn_82D70F30(void *);
class hkpBvTreeStreamAgent: public hkpCollisionAgent { public:
 unsigned input; hkVector4 a,b; hkArray<void *> agents;
 hkpBvTreeStreamAgent(const hkpCdBody &,const hkpCdBody &,const hkpCollisionInput &in,hkpContactMgr *m);
};

hkpBvTreeStreamAgent::hkpBvTreeStreamAgent(const hkpCdBody &,const hkpCdBody &,const hkpCollisionInput &in,hkpContactMgr *m):hkpCollisionAgent(m) { input=*(const unsigned *)&in; a.setZero(); b.setZero(); fn_82D70F30(&agents); }
