#include "havok/hkBase.h"
class hkpWorld;
class hkpContactMgrFactory : public hkReferencedObject {};
class hkpSimpleConstraintContactMgr {
public:
    class Factory : public hkpContactMgrFactory {
    public:
        Factory(hkpWorld *);
        hkpWorld *m_world;
    };
};
class hkpReportContactMgr {
public:
    class Factory : public hkpContactMgrFactory {
    public:
        Factory(hkpWorld *);
        hkpWorld *m_world;
    };
};
class hkpContactMgr : public hkReferencedObject {
public:
    hkpContactMgr(int type) : m_type(type) {}
    int m_type;
};
class hkpNullContactMgr : public hkpContactMgr {
public:
    hkpNullContactMgr() : hkpContactMgr(3) {}
};
class hkpNullContactMgrFactory : public hkpContactMgrFactory {
public:
    hkpNullContactMgr m_mgr;
};
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
