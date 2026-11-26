// hkpConstraintInstance (Physics/Dynamics/Constraint/hkpConstraintInstance.h),
// 0x38 bytes: a constraint between two entities, described by its data.
//
// Its vtable (??_7hkpConstraintInstance@@6B@, 7 slots) has four functions after hkReferencedObject's:
// +0xC 82D957E0 (empty), +0x10 82D958F8 (when the instance has an owner, removes it from the entity's
// world), +0x14 82D957E8 (empty), +0x18 82D7E470 (returns 0). hkpConstraintChainInstance replaces +0x10
// and +0x18 (returns 1). The two empty functions are separate functions next to the class's other code, so
// they are out of line; the two getType functions are folded copies far from it, so they are inline. The
// names and InstanceType follow Havok's header.
#ifndef HAVOK_HKPCONSTRAINTINSTANCE_H
#define HAVOK_HKPCONSTRAINTINSTANCE_H

#include "havok/hkEnum.h"
#include "havok/hkSmallArray.h"
#include "havok/hkStringPtr.h"
#include "havok/hkpConstraintAtom.h"
#include "havok/hkpConstraintData.h"
#include "havok/hkpEntity.h"

class hkpConstraintListener;
class hkpConstraintOwner;

extern "C" {
void fn_82CE3F80(void);   // hkReferencedObject::lockAll()
void fn_82CE3FE8(void);   // hkReferencedObject::unlockAll()
}

class hkpConstraintInstance : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    enum ConstraintPriority {
        PRIORITY_INVALID,
        PRIORITY_PSI,
        PRIORITY_SIMPLIFIED_TOI_UNUSED,
        PRIORITY_TOI,
        PRIORITY_TOI_HIGHER,
        PRIORITY_TOI_FORCED,
        NUM_PRIORITIES
    };
    enum OnDestructionRemapInfo {
        ON_DESTRUCTION_REMAP = 0,
        ON_DESTRUCTION_REMOVE = 1,
        ON_DESTRUCTION_RESET_REMOVE = 2
    };
    enum InstanceType { TYPE_NORMAL = 0, TYPE_CHAIN = 1 };
    hkpConstraintInstance(ConstraintPriority priority);
    // Out of line in the game as fn_82D962A8, which keeps its fn_ name (a
    // Matching unit calls it); defined inline here so that a unit can expand it.
    HK_FORCE_INLINE hkpConstraintInstance(hkpEntity *entityA, hkpEntity *entityB, hkpConstraintData *data,
                                          ConstraintPriority priority)
        : m_owner(HK_NULL), m_data(data), m_priority(priority), m_wantRuntime(true),
          m_destructionRemapInfo(ON_DESTRUCTION_REMAP), m_userData(0), m_internal(HK_NULL), m_uid(0xfffffff0)
    {
        m_entities[0] = entityA;
        m_entities[1] = entityB;
        m_constraintModifiers = HK_NULL;
        fn_82CE3F80();
        m_entities[0]->addReference();
        if (m_entities[1])
            m_entities[1]->addReference();
        m_data->addReference();
        fn_82CE3FE8();
    }
    hkpConstraintInstance(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_name(f), m_uid(0xfffffff0) {}
    virtual ~hkpConstraintInstance();
    virtual void entityAddedCallback(hkpEntity *entity);              // +0xC
    virtual void entityRemovedCallback(hkpEntity *entity);            // +0x10
    virtual void entityDeletedCallback(hkpEntity *entity);            // +0x14
    virtual InstanceType getType() const { return TYPE_NORMAL; }      // +0x18
    HK_FORCE_INLINE hkpConstraintData *getData() const { return m_data; }

    hkpConstraintOwner *m_owner;                          // +0x8
    hkpConstraintData *m_data;                            // +0xC
    hkpModifierConstraintAtom *m_constraintModifiers;     // +0x10
    hkpEntity *m_entities[2];                             // +0x14
    hkEnum<ConstraintPriority, hkUint8> m_priority;       // +0x1C
    hkBool m_wantRuntime;                                 // +0x1D
    hkEnum<OnDestructionRemapInfo, hkUint8> m_destructionRemapInfo;   // +0x1E
    hkSmallArray<hkpConstraintListener *> m_listeners;    // +0x20
    hkStringPtr m_name;                                   // +0x28
    hkUlong m_userData;                                   // +0x2C
    hkConstraintInternal *m_internal;                     // +0x30
    hkUint32 m_uid;                                       // +0x34
};

#endif
