#include "havok/hkBase.h"
#include "havok/hkpContactMgr.h"
#include "havok/hkpContactMgrFactory.h"
class hkpWorld;
class hkpSimpleConstraintContactMgr {
public:
    class Factory : public hkpContactMgrFactory {
    public:
        Factory(hkpWorld *);
        virtual hkpContactMgr *createContactMgr(const hkpCollidable &a, const hkpCollidable &b,
                                                const hkpCollisionInput &env);
        hkpWorld *m_world;
    };
};
class hkpReportContactMgr {
public:
    class Factory : public hkpContactMgrFactory {
    public:
        Factory(hkpWorld *);
        virtual hkpContactMgr *createContactMgr(const hkpCollidable &a, const hkpCollidable &b,
                                                const hkpCollisionInput &env);
        hkpWorld *m_world;
    };
};
class hkpNullContactMgr : public hkpContactMgr {
public:
    hkpNullContactMgr() : hkpContactMgr(TYPE_NULL_CONTACT_MGR) {}
};
class hkpNullContactMgrFactory : public hkpContactMgrFactory {
public:
    virtual hkpContactMgr *createContactMgr(const hkpCollidable &a, const hkpCollidable &b,
                                            const hkpCollisionInput &env);
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
