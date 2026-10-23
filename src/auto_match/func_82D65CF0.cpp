#include "havok/hkBase.h"
class hkpCollisionAgent; class hkpCdBody; struct hkpCollisionInput; class hkpContactMgr;
class hkpSphereTriangleAgent { public: static hkpCollisionAgent *createSphereTriangleAgent(const hkpCdBody &, const hkpCdBody &, const hkpCollisionInput &, hkpContactMgr *); };
extern "C" { void fn_82D656C0(); void fn_82D65AB8(); void fn_82D75FD0(); }
struct AgentFuncs {
 hkpCollisionAgent *(*create)(const hkpCdBody &,const hkpCdBody &,const hkpCollisionInput &,hkpContactMgr *);
 void (*a)(); void (*b)(); void (*c)(); hkBool x,y;
};
extern "C" void fn_82D65CF0(AgentFuncs *p) {
 p->create = hkpSphereTriangleAgent::createSphereTriangleAgent; p->a=fn_82D656C0; p->b=fn_82D65AB8; p->c=fn_82D75FD0;
 p->x=false; p->y=false;
}
