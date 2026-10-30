#include "havok/hkBase.h"
class hkpCollisionAgent; class hkpCdBody; struct hkpCollisionInput; class hkpContactMgr;
class hkpBoxBoxAgent { public: static hkpCollisionAgent *createBoxBoxAgent(const hkpCdBody &, const hkpCdBody &, const hkpCollisionInput &, hkpContactMgr *); };
extern "C" { void fn_82D686D8(); void fn_82D684C0(); void fn_82D75FD0(); }
struct AgentFuncs {
 hkpCollisionAgent *(*create)(const hkpCdBody &,const hkpCdBody &,const hkpCollisionInput &,hkpContactMgr *);
 void (*a)(); void (*b)(); void (*c)(); hkBool x,y;
};
extern "C" void fn_82D688E8(AgentFuncs *p) {
 p->create = hkpBoxBoxAgent::createBoxBoxAgent; p->a=fn_82D686D8; p->b=fn_82D684C0; p->c=fn_82D75FD0;
 p->x=false; p->y=false;
}
