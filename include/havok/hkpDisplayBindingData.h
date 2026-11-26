// hkpDisplayBindingData and its nested RigidBody and PhysicsSystem (Physics/Utilities/VisualDebugger/
// hkpDisplayBindingData.h; the class units are in Physics/Utilities/Serialize). The RTTI names all three
// as structs (??_R0?AUhkpDisplayBindingData@@@8). hkpDisplayBindingData is 0x20 bytes, RigidBody 0x90,
// PhysicsSystem 0x18. The layouts come from the destructors, all implicit: ~RigidBody is inlined into its
// deleting destructor (82DE4058: m_displayObjectPtr, then m_rigidBody), ~PhysicsSystem (82DE40E0: m_system,
// then the array) and ~hkpDisplayBindingData (82DE4198: the two arrays) are emitted out of line. The finish
// constructors finish every member. The member names follow Havok's header; the two matrices of RigidBody
// are not touched by any function of the game.
#ifndef HAVOK_HKPDISPLAYBINDINGDATA_H
#define HAVOK_HKPDISPLAYBINDINGDATA_H

#include "havok/hkBase.h"
#include "havok/hkMatrix4.h"
#include "havok/hkRefPtr.h"
#include "havok/hkpRigidBody.h"

struct hkpDisplayBindingData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);

    struct RigidBody : public hkReferencedObject {
    public:
        HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
        RigidBody(hkFinishLoadedObjectFlag flag)
            : hkReferencedObject(flag), m_rigidBody(flag), m_displayObjectPtr(flag) {}

        hkRefPtr<hkpRigidBody> m_rigidBody;                // +0x8
        hkRefPtr<hkReferencedObject> m_displayObjectPtr;   // +0xC
        hkMatrix4 m_rigidBodyFromDisplayObjectTransform;   // +0x10
        hkMatrix4 m_displayObjectFromRigidBodyTransform;   // +0x50
    };

    struct PhysicsSystem : public hkReferencedObject {
    public:
        HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
        PhysicsSystem(hkFinishLoadedObjectFlag flag)
            : hkReferencedObject(flag), m_bindings(flag), m_system(flag) {}

        hkArray<hkRefPtr<RigidBody> > m_bindings;   // +0x8
        hkRefPtr<hkReferencedObject> m_system;      // +0x14 (an hkpPhysicsSystem, which has no header yet)
    };

    hkpDisplayBindingData(hkFinishLoadedObjectFlag flag)
        : hkReferencedObject(flag), m_rigidBodyBindings(flag), m_physicsSystemBindings(flag) {}

    hkArray<hkRefPtr<RigidBody> > m_rigidBodyBindings;           // +0x8
    hkArray<hkRefPtr<PhysicsSystem> > m_physicsSystemBindings;   // +0x14
};

#endif
