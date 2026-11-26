// hkpBreakOffPartsUtil (Physics/Utilities/Destruction/BreakOffParts/hkpBreakOffPartsUtil.h), 0x24 bytes,
// and its nested LimitContactImpulseUtil, 0x30 bytes.
//
// hkpBreakOffPartsUtil: the RTTI gives hkReferencedObject, then the listeners at +0x8 (contact impulse limit),
// +0xC (entity), +0x10 (world deletion) and +0x14 (constraint). The constructor (82DEA840) stores the world at
// +0x18 and the listener at +0x20 and news the critical section at +0x1C; the destructor (82DEA960) removes the
// listeners and deletes the section; 8253CC70 allocates 0x24 bytes. The overrides are placed by the five
// vtables (??_7hkpBreakOffPartsUtil@@6B...):
//  - contactImpulseLimitBreachedCallback, slot 1 of the impulse-limit vtable: 82DEB7C0;
//  - entityRemovedCallback, slot 2 of the entity listener vtable: 82DEA758 (empty, but not folded);
//  - worldDeletedCallback, slot 1 of the world deletion vtable: 82DEA708 (removes the impulse-limit listener,
//    clears m_world and drops a reference);
//  - constraintAddedCallback, slot 1 of the constraint listener vtable: 82DEA760.
// The deleting destructor (82DEC3A8) and its thunks (82DEC388..82DEC3A0) are C units with fn_ names. The member
// and callback names follow Havok's header.
//
// LimitContactImpulseUtil: the RTTI gives hkReferencedObject at +0x0 and hkpCollisionListener at +0x8. The
// constructor (82DEAEB8, out of line) stores the entity at +0x10, 0xFF in the hkUFloat8 at +0x14, FLT_MAX at
// +0x18 and builds the pointer map at +0x1C (reserve with the heap allocator); it does not store its
// hkpBreakOffPartsUtil argument, and +0xC is not set (its contents are unknown). The callback 82DEAB48 (slot 4 of
// the collision listener vtable: contactPointAddedCallback) reads +0x10, +0x14 and the map. 82DEB018 allocates
// 0x30 bytes for one; nothing seen reads or writes +0x28..+0x30. The destructor is the implicit one (the map,
// then the bases); its deleting form 82DEC418 keeps its fn_ name. The names of m_entity, m_maxImpulse and
// m_shapeKeyToMaxImpulse follow Havok's header; m_maxImpulseFactor is the earlier units' name for +0x18.
#ifndef HAVOK_HKPBREAKOFFPARTSUTIL_H
#define HAVOK_HKPBREAKOFFPARTSUTIL_H

#include "havok/hkBase.h"
#include "havok/hkUFloat8.h"
#include "havok/hkpCollisionListener.h"
#include "havok/hkpConstraintListener.h"
#include "havok/hkpContactImpulseLimitBreachedListener.h"
#include "havok/hkpEntityListener.h"
#include "havok/hkpWorldDeletionListener.h"

class hkCriticalSection;
class hkpBreakOffPartsListener;
class hkpEntity;
class hkpWorld;
typedef hkUint32 hkpShapeKey;

class hkpBreakOffPartsUtil : public hkReferencedObject,
                             public hkpContactImpulseLimitBreachedListener,
                             public hkpEntityListener,
                             public hkpWorldDeletionListener,
                             public hkpConstraintListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);

    class LimitContactImpulseUtil : public hkReferencedObject, public hkpCollisionListener {
    public:
        HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
        LimitContactImpulseUtil(hkpBreakOffPartsUtil *breakUtil, hkpEntity *entity);
        virtual void contactPointAddedCallback(hkpContactPointAddedEvent &event);   // 82DEAB48

        void *m_unknownC;                                       // +0xC, not set by the constructor
        hkpEntity *m_entity;                                    // +0x10
        hkUFloat8 m_maxImpulse;                                 // +0x14
        hkReal m_maxImpulseFactor;                              // +0x18
        hkPointerMap<hkpShapeKey, hkUint8> m_shapeKeyToMaxImpulse;   // +0x1C
        hkUint8 m_unknown28[8];                                 // +0x28, unknown
    };

    hkpBreakOffPartsUtil(hkpWorld *world, hkpBreakOffPartsListener *breakOffPartsListener);
    virtual ~hkpBreakOffPartsUtil();
    virtual void contactImpulseLimitBreachedCallback(const hkpContactImpulseLimitBreachedListenerInfo *breachedContacts,
                                                     int numBreachedContacts);
    virtual void entityRemovedCallback(hkpEntity *entity);
    virtual void worldDeletedCallback(hkpWorld *world);
    virtual void constraintAddedCallback(hkpConstraintInstance *constraint);

    hkpWorld *m_world;                                   // +0x18
    hkCriticalSection *m_criticalSection;                // +0x1C
    hkpBreakOffPartsListener *m_breakOffPartsListener;   // +0x20
};

#endif
