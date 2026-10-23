#include "havok/hkBase.h"
class hkpCollisionAgent; class hkpCdBody; struct hkpCollisionInput; class hkpContactMgr;
class hkpCapsuleTriangleAgent { public: static hkpCollisionAgent *createCapsuleTriangleAgent(const hkpCdBody &, const hkpCdBody &, const hkpCollisionInput &, hkpContactMgr *); };
extern "C" { void fn_82D63130(); void fn_82D62CD8(); void fn_82D75FD0(); }
struct AgentFuncs {
 hkpCollisionAgent *(*create)(const hkpCdBody &,const hkpCdBody &,const hkpCollisionInput &,hkpContactMgr *);
 void (*a)(); void (*b)(); void (*c)(); hkBool x,y;
};
extern "C" void fn_82D632F8(AgentFuncs *p) {
 p->create = hkpCapsuleTriangleAgent::createCapsuleTriangleAgent; p->a=fn_82D63130; p->b=fn_82D62CD8; p->c=fn_82D75FD0;
 p->x=false; p->y=false;
}
