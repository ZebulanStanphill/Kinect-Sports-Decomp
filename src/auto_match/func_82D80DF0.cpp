#include "havok/hkBase.h"
#include "havok/hkpReportContactMgr.h"
#include "havok/hkpNullContactMgr.h"
#include "havok/hkpSimpleConstraintContactMgr.h"
extern "C" void fn_82D587C0(void *, hkpContactMgrFactory *, int);
extern "C" void fn_82D80DF0(hkpWorld *world, void *dispatcher)
{
    hkpSimpleConstraintContactMgr::Factory *a=new hkpSimpleConstraintContactMgr::Factory(world);
    hkpReportContactMgr::Factory *b=new hkpReportContactMgr::Factory(world);
    hkpNullContactMgrFactory *c=new hkpNullContactMgrFactory;
    fn_82D587C0(dispatcher,a,1);
    fn_82D587C0(dispatcher,b,2);
    fn_82D587C0(dispatcher,c,3);
    a->removeReference(); b->removeReference(); c->removeReference();
}
