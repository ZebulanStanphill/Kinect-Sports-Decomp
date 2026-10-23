// finishLoadedObjecthkpDisableEntityCollisionFilter: the finish function in hkpDisableEntityCollisionFilter's
// hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok). RTTI: hkpCollisionFilter (its four filter interfaces
// at +0x8..+0x14), then hkpEntityListener at +0x30.
#include "havok/hkpCollisionFilter.h"
class hkpEntity;
class hkpConstraintInstance;
struct hkpConstraintBrokenEvent;
struct hkpConstraintRepairedEvent;

extern "C" void fn_8265CA20(void *p);   // global operator delete

// Listener interfaces with no base (RTTI). Vtables: the deleting destructor, then five callbacks whose default
// implementations are empty (folded into fn_82BA02A8; hkpEntityListener's slot 3 is fn_82DB2F50).
class hkpConstraintListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpConstraintListener() {}
    virtual void constraintAddedCallback(hkpConstraintInstance *constraint) {}
    virtual void constraintRemovedCallback(hkpConstraintInstance *constraint) {}
    virtual void constraintDeletedCallback(hkpConstraintInstance *constraint) {}
    virtual void constraintBreakingCallback(const hkpConstraintBrokenEvent &event) {}
    virtual void constraintRepairedCallback(const hkpConstraintRepairedEvent &event) {}
};

class hkpEntityListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpEntityListener() {}
    virtual void entityAddedCallback(hkpEntity *entity) {}
    virtual void entityRemovedCallback(hkpEntity *entity) {}
    virtual void entityShapeSetCallback(hkpEntity *entity);
    virtual void entitySetMotionTypeCallback(hkpEntity *entity) {}
    virtual void entityDeletedCallback(hkpEntity *entity) {}
};

class hkpDisableEntityCollisionFilter : public hkpCollisionFilter, public hkpEntityListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpDisableEntityCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag), m_disabledPairs(flag) {}
    virtual ~hkpDisableEntityCollisionFilter();

    hkArray<hkpEntity *> m_disabledPairs;   // +0x34
};

void HK_CALL finishLoadedObjecthkpDisableEntityCollisionFilter(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpDisableEntityCollisionFilter(f);
}
