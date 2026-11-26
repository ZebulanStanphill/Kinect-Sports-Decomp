#include "havok/hkpCollisionAgent.h"
extern "C" void fn_82D70F30(void *);
class hkpBvTreeStreamAgent: public hkpCollisionAgent { public:
 unsigned input; hkVector4 a,b; hkArray<void *> agents;
 hkpBvTreeStreamAgent(const hkpCdBody &,const hkpCdBody &,const hkpCollisionInput &in,hkpContactMgr *m);
};

hkpBvTreeStreamAgent::hkpBvTreeStreamAgent(const hkpCdBody &,const hkpCdBody &,const hkpCollisionInput &in,hkpContactMgr *m):hkpCollisionAgent(m) { input=*(const unsigned *)&in; a.setZero(); b.setZero(); fn_82D70F30(&agents); }
