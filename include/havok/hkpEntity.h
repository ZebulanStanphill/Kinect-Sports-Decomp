// hkpEntity (Physics/Dynamics/Entity/hkpEntity.h), 0x218 bytes: a world
// object with a motion, a material, its constraints, listeners and actions.
// The members and their order are those the constructor fills in (82D8AAA8).
#ifndef HAVOK_HKPENTITY_H
#define HAVOK_HKPENTITY_H

#include "havok/hkConstraintInternal.h"
#include "havok/hkLocalFrame.h"
#include "havok/hkRefPtr.h"
#include "havok/hkSmallArray.h"
#include "havok/hkpMotion.h"
#include "havok/hkpWorldObject.h"

class hkpAction;
class hkpBreakableBody;
class hkpConstraintInstance;
class hkpContactListener;
class hkpEntity;
class hkpEntityListener;
class hkpSimulationIsland;

// hkpMaterial (Physics/Dynamics/Entity/hkpEntity.h? 0xC bytes). The default
// friction and restitution are 0.5f and 0.4f.
struct hkpMaterial {
    HK_FORCE_INLINE hkpMaterial() : m_friction(0.5f), m_restitution(0.4f) {}
    hkpMaterial(hkFinishLoadedObjectFlag) {}
    hkInt8 m_responseType;                 // +0x0
    hkInt16 m_rollingFrictionMultiplier;   // +0x2
    hkReal m_friction;                     // +0x4
    hkReal m_restitution;                  // +0x8
};

extern "C" {
void fn_82D8A058(hkpEntity *entity, hkpContactListener *cl);   // hkpEntity::addContactListener
void fn_82D8A110(hkpEntity *entity, hkpEntityListener *el);    // hkpEntity::addEntityListener
void fn_82D8A228(hkpEntity *entity, hkpEntityListener *el);    // hkpEntity::removeEntityListener
void *fn_82DF06C0(hkpEntity *entity);                          // hkpEntity::getEntityListeners
}

class hkpEntity : public hkpWorldObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ENTITY);

    struct SpuCollisionCallback {
        HK_FORCE_INLINE SpuCollisionCallback() : m_util(HK_NULL), m_capabilities(0), m_eventFilter(3), m_userFilter(1) {}
        SpuCollisionCallback(hkFinishLoadedObjectFlag) {}
        void *m_util;              // +0x0
        hkUint16 m_capabilities;   // +0x4
        hkUint8 m_eventFilter;     // +0x6
        hkUint8 m_userFilter;      // +0x7
    };
    struct ExtendedListeners;

    hkpEntity(const hkpShape *shape);
    // The finish constructor runs the finish constructor of the motion's real
    // class over it, chosen by the serialised motion type.
    HK_FORCE_INLINE hkpEntity(hkFinishLoadedObjectFlag flag)
        : hkpWorldObject(flag), m_material(flag), m_spuCollisionCallback(flag), m_motion(flag), m_localFrame(flag)
    {
        if (flag.m_finishing)
        {
            switch (m_motion.m_type)
            {
            case hkpMotion::MOTION_SPHERE_INERTIA: new (&m_motion) hkpSphereMotion(flag); break;
            case hkpMotion::MOTION_BOX_INERTIA: new (&m_motion) hkpBoxMotion(flag); break;
            case hkpMotion::MOTION_KEYFRAMED: new (&m_motion) hkpKeyframedRigidMotion(flag); break;
            case hkpMotion::MOTION_FIXED: new (&m_motion) hkpFixedRigidMotion(flag); break;
            case hkpMotion::MOTION_THIN_BOX_INERTIA: new (&m_motion) hkpThinBoxMotion(flag); break;
            case hkpMotion::MOTION_CHARACTER: new (&m_motion) hkpCharacterMotion(flag); break;
            }
        }
    }
    virtual ~hkpEntity();
    // ??_7hkpEntity@@6B@: no motion state at this level (the folded function that returns 0), then one
    // slot of its own (82D8A5D0; the name is Havok's).
    virtual hkMotionState *getMotionState();
    virtual void deallocateInternalArrays();   // +0x14

    hkSmallArray<hkpEntityListener *> &getEntityListeners()
    {
        return *static_cast<hkSmallArray<hkpEntityListener *> *>(fn_82DF06C0(this));
    }
    void addEntityListener(hkpEntityListener *el) { fn_82D8A110(this, el); }
    void removeEntityListener(hkpEntityListener *el) { fn_82D8A228(this, el); }
    void addContactListener(hkpContactListener *cl) { fn_82D8A058(this, cl); }

    hkpMaterial m_material;                                    // +0x8C
    void *m_limitContactImpulseUtilAndFlag;                    // +0x98
    hkReal m_damageMultiplier;                                 // +0x9C
    hkpBreakableBody *m_breakableBody;                         // +0xA0
    hkUint32 m_solverData;                                     // +0xA4
    hkUint16 m_storageIndex;                                   // +0xA8
    hkUint16 m_contactPointCallbackDelay;                      // +0xAA
    hkSmallArray<hkConstraintInternal> m_constraintsMaster;    // +0xAC
    hkArray<hkpConstraintInstance *> m_constraintsSlave;       // +0xB4
    hkArray<hkUint8> m_constraintRuntime;                      // +0xC0
    hkpSimulationIsland *m_simulationIsland;                   // +0xCC
    hkInt8 m_autoRemoveLevel;                                  // +0xD0
    hkUint8 m_numShapeKeysInContactPointProperties;            // +0xD1
    hkUint8 m_responseModifierFlags;                           // +0xD2
    hkUint32 m_uid;                                            // +0xD4
    SpuCollisionCallback m_spuCollisionCallback;               // +0xD8
    hkpMaxSizeMotion m_motion;                                 // +0xE0
    hkSmallArray<hkpContactListener *> m_contactListeners;     // +0x200
    hkSmallArray<hkpAction *> m_actions;                       // +0x208
    hkRefPtr<hkLocalFrame> m_localFrame;                       // +0x210
    ExtendedListeners *m_extendedListeners;                    // +0x214
};

#endif
